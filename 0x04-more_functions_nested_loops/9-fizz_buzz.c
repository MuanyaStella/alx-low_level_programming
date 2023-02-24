#include <stdio.h>

/**
 * main - prints numbers 1-100. print Fizz for multiples of three
 * Buzz for multiples of five
 * FizzBuzz for multiples of three and five
 *
 * Return: 0 successful
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
			printf("FizzBuzz");
		else if ((x % 3) == 0)
			printf("Fizz");
		else if ((x % 5) == 0)
			printf("Buzz");
		else
			printf("%d", x);
		if (x == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

