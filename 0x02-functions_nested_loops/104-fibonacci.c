#include <stdio.h>
/**
 * main - start of program to finds and prints the first 98 Fibonacci numbers
 * Return: nothing
 */
int main(void)
{
	int count;
	unsigned long bacci1 = 0, bacci2 = 1, sum;
	unsigned long hold11, hold12, hold21, hold22;
	unsigned long hold1, hold2;

	for (count = 0; count < 92; count++)
	{
		sum = bacci1 + bacci2;
		printf("%lu, ", sum);

		bacci1 = bacci2;
		bacci2 = sum;
	}

	hold11 = bacci1 / 10000000000;
	hold21 = bacci2 / 10000000000;
	hold12 = bacci1 % 10000000000;
	hold22 = bacci2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		hold1 = bacci11 + bacci21;
		hold2 = bacci12 + bacci22;
		if (bacci12 + bacci22 > 9999999999)
		{
			hold1 += 1;
			hold2 %= 10000000000;
		}

		printf("%lu%lu", hold1, hold2);
		if (count != 98)
			printf(", ");

		bacci11 = bacci21;
		bacci12 = bacci22;
		bacci21 = hold1;
		bacci22 = hold2;
	}
	printf("\n");
	return (0);
}
