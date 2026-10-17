//tcp_server.c
#include "headers.h"
int main(int argc,char **argv)
{
	char buff[100];
	int status;   

	if(argc<2)
	{
		puts("input format @cmdline : server.exe server_port_no");
		return 0;    
	}

	puts("Creating Server Socket...");
	int sfd;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		return 0;
	}	
	puts("server socket created successfully");

	puts("Binding: Mapping the file descripted with Server's IP & Server Port ( Server Socket)");
	struct sockaddr_in saddr;
	int slen=sizeof(saddr);
	saddr.sin_family=AF_INET;
	saddr.sin_port=htons(atoi(argv[1]));
	saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	if(bind(sfd,(const struct sockaddr *)&saddr,slen)<0)
	{
		perror("bind");
		return 0;     
	}
	puts("Bind Success");

	puts("Creating Connection Queue of Size 1");
	if(listen(sfd,1)<0)
	{
		perror("listen");	   
	}
	puts("Connection Queue Created");

	puts("Waiting To Accept 3-Way Handshake Connection Request to be Initiated by any Client...");
	int cfd;
	struct sockaddr_in caddr;
	int clen=sizeof(caddr);
	cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
	if(cfd<0)
	{
		perror("accept");
		close(sfd);
		return 0;      
	}
	puts("Connection From Client Accepted");
	
	//client_info(caddr);
	char *clientIP;
	unsigned short int clientPort;
	clientIP=inet_ntoa(caddr.sin_addr);
	clientPort=ntohs(caddr.sin_port);
	printf("Client's IP address : %s\n",clientIP);
	printf("Client's port No    : %d\n",clientPort);

	puts("Waiting for message/request from connected client...");
	recv(cfd,buff,100,0);
	puts("received MSG:");
	puts(buff);

	send(cfd,"hello client",13,0);


	puts("Server Terminating Connection with Connected Client");
	close(cfd);

	puts("Server Terminating/goind down...");
	close(sfd);
}	
