#include <stdio.h>

/**
 * main - prototype
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i;
	printf("Number of cla: %d\n", ac);
	
	for (int i = 0; i < ac; i++)
	{
		printf("Argument %d: %s\n", i, av[i]);
	}
	return 0;
}
