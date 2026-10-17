#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,  char *argv[]) 
{
	int i;
	sigset_t mask;


	if ((sigemptyset(&mask) == -1) || (sigaddset(&mask, SIGINT) == -1))
	{
		printf("Failed to initialize the signal mask\n");
		return 1;
	}

	while(1)
	{
		printf("Entering BLOCK state\n");

		if (sigprocmask(SIG_BLOCK, &mask, NULL) == -1)
			break;

		printf("SIGINT signal blocked\n");

		sleep(10);

		printf("Leaving Blocking State & Entering UNBLOCK state\n");
		if (sigprocmask(SIG_UNBLOCK, &mask, NULL) == -1)
			break;
		printf("SIGINT signal unblocked\n");
		sleep(2);
	}
	perror("Failed to change signal mask\n");
	return 1;
}
