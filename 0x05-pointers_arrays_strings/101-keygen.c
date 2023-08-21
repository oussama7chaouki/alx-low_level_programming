#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - generate randome password for crackme
 * Return: 0 succes
 */
int main(void)
{
	int pass[64], i, sum = 0, last;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		pass[i] = rand() % 78;
		sum += pass[i] + '0';
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			last = (2772 - sum) - '0';
			putchar(last + '0');
			break;
		}
	}
	return (0);
}
