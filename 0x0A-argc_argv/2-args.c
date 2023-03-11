#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguements a program receives.
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: 0 successful
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
