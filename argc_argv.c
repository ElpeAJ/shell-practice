#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print argv and count num of arg
 * @argc: argument count
 * @argv: strings of argument
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(0);
}
