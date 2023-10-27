#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int infinite_while(void);

/**
 * main -  program that creates 5 zombie processes.
 * @argc: args count
 * @argv: list of args
 * Return: 0 or 1
 */

int main(int argc, char const *argv[])
{
	int i;
	pid_t pid, pid1, pid2, pid3, pid4;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid < 0)
		{
			perror("fork");
			return (1);
		}
		else if (pid == 0)
		{
			sleep(10);
			return (0);
		}
		else
		{
			printf("Child process created, PID: %d\n", pid);
			wait(NULL);
		}
	}

infinite_while();
}

/**
 * infinite_while -  infinite while loop
 * Return: 0 or 1
 */
int infinite_while(void)
{

	while (1)
		sleep(1);

	return (0);
}
