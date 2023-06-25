#include <stdio.h>
#include <stdlib.h>

/**
 * main - prototype being used
 * @ac: parameter 1
 * @av: parameter 2
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 0;

	if (av[i])
	{
		printf("%s \n", av[i]);
		i++;
	}
	return (0);
}
