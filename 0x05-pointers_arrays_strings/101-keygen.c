#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start of function generate a password
 * Return: 0
 */
int main(void)
{
	int kegen[100];
	int a;
	int b;
	int c;

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		kegen[a] = rand() % 78;
		b += (kegen[a] + '0');
		putchar(kegen[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
