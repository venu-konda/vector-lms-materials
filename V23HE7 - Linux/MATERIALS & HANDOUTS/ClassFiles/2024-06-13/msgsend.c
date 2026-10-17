#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
struct msgbuf
{
long mtype;
char data[20];
};
main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./snd msgtype message\n");
		return;
	}
	struct msgbuf v;
	v.mtype=atoi(argv[1]);
	strcpy(v.data,argv[2]);
	int id;
	id=msgget(1,IPC_CREAT|0660);
	if(id<0)
	{
		perror("msgget");
		return;
	}
	if(msgsnd(id,&v,strlen(v.data)+1,0)==-1)
	{
		perror("msgsnd");
		exit(0);
	}
	printf("sent to the msgqueue successfully\n");
}
