#include <stdio.h>

/**
 * main - function prototype
 *
 * Return: Nothing
 */

void main(void)
{
	int v1, v2;

	printf("\n Enter v1: ");
	scanf("%d", &v1);
	printf("\n Enter v2: ");
	fflush(stdin);
	scanf("%d", &v2);
	printf("\n v1 + v2 = %d\n ", v1 + v2);
}
