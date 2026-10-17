// concurrent_tcp_echo_ server.c (using select())
#include"headers.h"
int sfd,cfd;
struct sockaddr_in saddr,caddr;
int slen=sizeof(saddr),clen=sizeof(caddr);
char buff[100];
int ret,newfd,fd,maxfd,cnt=0;
struct sockaddr_in cliAddr;
fd_set rfds,testfds;
int flag;
char str[512];
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		puts("input: server_exe well_known_port_no");
		return;
	} 

	sfd = socket(AF_INET,SOCK_STREAM, 0);
	if(sfd<0)
	{
		perror("socket");
		return 0;
	}
	puts("server socket created successfully");

	saddr.sin_family = AF_INET;
	saddr.sin_addr.s_addr=INADDR_ANY;
	saddr.sin_port = htons(atoi(argv[1]));
	puts("binding...");
	if(bind(sfd, (struct sockaddr *)&saddr,slen)<0)
	{
		perror("bind");
		close(sfd);
		return 0;
	}
	puts("bind success");

	puts("listen: creating connection queue..");
	if(listen(sfd,1)<0)
	{
		perror("listen");
		close(sfd);
		return 0;
	}
	puts("listen success");

	FD_ZERO(&rfds);
	FD_SET(sfd,&rfds);
	maxfd=sfd;

	system("clear");
	while(1)
	{
	        system("clear");
		testfds=rfds;
		printf("server waiting...\n");
		printf("maxfd : %d\n",maxfd);
		printf("no of clients connected: %d\n",cnt);
		printf("range of file descriptors:%d<%d\n",sfd,maxfd+1);
		ret = select(10,&testfds,NULL,NULL,NULL);
		puts("waiting for clearing screen");
		if(ret < 0)
		{
			perror("select");
			break;
		}
		else if(ret==0)
		{
			puts("time out");
			continue;
		}


		for(fd=3;fd<=maxfd;fd++)
		{
			if(FD_ISSET(fd,&testfds))
			{        
				if((sfd==fd))
				{
					newfd = accept(sfd,(struct sockaddr *)&cliAddr,&clen);
					if(newfd<0)
					{
						perror("accept");
					} 
					FD_SET(newfd,&rfds);
					cnt++;
					maxfd=(newfd>maxfd)?newfd:maxfd;
					puts("new client connected");
				}
				else        
				{
					flag=0;
					ret=recv(fd,buff,100,0);
					if(ret<0)  
					{ 
						perror("recv"); 
						FD_CLR(fd,&rfds);
						close(fd);
						cnt--; 
						if(fd==maxfd)
							maxfd--;
					}
					else if(ret==0) 
					{ 
						printf("client on socket fd %d disconnected,removing\n",fd);
						FD_CLR(fd,&rfds);
						close(fd);
						cnt--;  
						if(fd==maxfd)
							maxfd--;
					} 
					else
					{ 
						flag=0;
						if(strcmp(buff,"quit")==0)
						{
							printf("formally closing connection with client : %d\n",fd-3);
							printf("removing client on socket fd %d\n",fd);
							FD_CLR(fd,&rfds);
							close(fd);
							cnt--;
							flag=1;
							strcpy(buff,"client went offline / left chating.");
							memmove(buff+8,buff+6,strlen(buff+6)+1);
							buff[7]=(fd-3)+48;
							puts(buff);

							if(fd==maxfd)
								maxfd--;
						}
						if(flag==1)
						{
							
							for(int i=4;i<=maxfd;i++)
								if(i!=fd)
									send(i,buff,strlen(buff)+1,0);
						}
						else
						{
							strcpy(str,"client:  :: ");
							str[7]=(fd-3)/10+48;
							str[8]=(fd-3)%10+48;
							strcat(str,buff);

							for(int i=4;i<=maxfd;i++)
								if(i!=fd)
									send(i,str,strlen(str)+1,0);
						}
							
							
					


					}
				}
			}
		}
	} 
	close(sfd);
}


