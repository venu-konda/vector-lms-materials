//tcp_client.c
#include "headers.h"

int main(int argc,char **argv)
{
	char buff[100];
	int status;
	
	if(argc<3)
	{
		puts("input format @cmdline : client.exe server_port_no server_ip_address");
		return 0;    
	}

	puts("Creating client Socket...");
	int fd;
	fd=socket(AF_INET,SOCK_STREAM,0);
	if(fd<0)
	{
		perror("socket");
		return 0;
	}	
	puts("client socket created successfully");

	puts("Binding & Connecting: ");
	puts("Mapping the file descripted with Server's IP & Server Port ( Remote Socket Address)");
	puts("Also mapping With Client's IP & Ephemeral Port (Local Socket Address)");
	puts("Initiating 3-Way Handshake for Connection Establishement With Server...");
	struct sockaddr_in addr;
	int len=sizeof(addr);
	addr.sin_family=AF_INET;
	addr.sin_port=htons(atoi(argv[1]));
	addr.sin_addr.s_addr=inet_addr(argv[2]);
	if(connect(fd,(struct sockaddr *)&addr,len)<0)
	{
		perror("connect");
		return 0;     
	}
	puts("Connection Success With Server");


	puts("Enter some message to send to server...");
	
	fgets(buff,100,stdin);
	buff[strlen(buff)-1]=0;

	send(fd,buff,strlen(buff)+1,0);
	puts("Message Sent");
	
	bzero(buff,100);

	recv(fd,buff,100,0);
	puts(buff);

	puts("Client Terminating Connection With Server");
	close(fd);

}	
