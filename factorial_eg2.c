#include <stdio.h>

/**
 * factorial - function that prints a factorial
 * @n: first variable for factorial function
 *
 * main - function prototype
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n -1));
}

int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
