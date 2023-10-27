#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * infinite - a function that runs forever and returns nothing
 * Return: 0 in the end
 */
int infinite(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - the entry to a program that creates 5 zombie process
 * Return: 0 on success
 */
int main(void)
{
	int i;
	pid_t pid;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %d\n", pid);

	}
	if (pid != 0)
		infinite();
	return (0);
}
