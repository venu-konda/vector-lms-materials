//client.c
#include"headers.h"

int main(int argc,char **argv)
{
	struct termios v;
	int fd;
	struct sockaddr_in addr;
	if(argc<3)
	{
		puts("input:./client(exe) server_port server_ip\n");
		exit(0);
	}
	puts("creating client socket\n");
	fd=socket(AF_INET,SOCK_STREAM,0);
	if(fd<0)
	{
		perror("socket");
		exit(0);
	}
	puts("client socket created succussfully\n");

	addr.sin_family=AF_INET;
	addr.sin_addr.s_addr=inet_addr(argv[2]);
	addr.sin_port=htons(atoi(argv[1]));

	puts("connecting with server ....\n");
	socklen_t len=sizeof(addr);

	if(connect(fd,(const struct sockaddr *)&addr,len)<0)
	{ perror("connect"); exit(0); }
	puts("connected with server\n");

	char buff[100];
	
	tcgetattr(0,&v);
	//v.c_lflag &= ~ECHO;
	//tcsetattr(0,TCSANOW,&v);
	if(fork()==0)
	{
		while(1)
		{
			bzero(buff,100);
			if(recv(fd,buff,100,0)==0)
			{
				puts("server abnormally terminated\n");
				break;
			}
			puts(buff);
		}

	}
	else
	{
		puts("Now you can  keep sending MSG's in group\n\n\n");
		while(1)
		{
			bzero(buff,100);
			gets(buff);

			if(send(fd,buff,strlen(buff)+1,0)<=0)
			{
				perror("send");
				close(fd);
				break;
			}
			if(strcmp(buff,"quit")==0)
			{
				puts("leaving chat room...\n");
				sleep(3);
				break;
			}
			printf("\t\t\t\t\t%s\n",buff);
		}

	}
	v.c_lflag |= ECHO;
	tcsetattr(0,TCSANOW,&v);

	close(fd);
}

