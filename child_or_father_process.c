#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: 0 Always
 */

int main(void)
{
	pid_t father_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	father_pid = getpid();
	printf("My pid is %u\n", father_pid);
	if (child_pid == 0)
	{
		printf("(%u) Noooooooooooo!\n", father_pid);
	}
	else
	{
		printf("(%u) %u, I am your father\n", father_pid, child_pid);
	}
	return (0);
}
