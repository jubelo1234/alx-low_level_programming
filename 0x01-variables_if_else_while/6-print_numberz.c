#include <stdio.h>
/**
 * main - printing digits using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
