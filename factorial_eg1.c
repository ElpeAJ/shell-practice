#include <stdio.h>

/** 
 * factorial - function that prints a factorial
 * @n: variable for the the factorial function
 *
 * Return: Always 0
 * main - funtion prototype
 */

int factorial(int n)
{
	int res;
	int i;

	res = 1;
	i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int main(void)
{
	int f;

	f = factorial(6);
	printf("6! = %d\n", f);
	return (0);
}
