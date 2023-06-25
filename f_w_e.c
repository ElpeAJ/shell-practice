#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - function to execute ls -l/tmp command
 *
 *
 * Return: 0 upon success
 */
int main(void)
{
	char *argv[] = {"ls -l /tmp", NULL};

	int i;
	int status;

	pid_t child_process;
	pid_t father_process;

	child_process = fork();

	if (child_process == -1)
	{
		perror("Error");
	}
	for (i = 0; i < 5; i++)
	{
		execve(argv[0], argv, NULL);
		wait(&status);
	}
	return (0);
}
