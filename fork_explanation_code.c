#include <stdio.h>
#include <unistd.h>

/**
 * main - function
 * Error Handling
 *
 * Return: 1 upon error and 0 if child
 *
 */

int main(void)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return (1);
	}
	else if (pid == 0)
	{
		printf("Child process\n");
	}
	else
	{
		printf("Parent process, child PID: %d\n", pid);
	}
	return (0);
}

