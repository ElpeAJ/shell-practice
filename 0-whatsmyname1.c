#include <stdio.h>

/**
 * main - prints program name
 * @argc: counts of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
