#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * main - prototype function
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int numChildren = 5;
	int i;

	for (i = 0; i < numChildren; i++)
	{
		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork");
			exit(1);
		}
		else if (pid == 0)
		{
			printf("Child process %d:\n", i + 1);
			execlp("ls", "ls", "-l", "/tmp", NULL);
			perror("execlp");
			exit(1);
		}
		else
		{
			int status;

			wait(&status);

			if (WIFEXITED(status))
			{
				printf("Child %d exited with status: %d\n", pid, WEXITSTATUS(status));
			}
			else
			{
				printf("Child %d exited abnormally\n", pid);
			}
		}
	}

	return (0);
}

