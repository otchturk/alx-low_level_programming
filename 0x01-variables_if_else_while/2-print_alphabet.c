#include <stdio.h>
#include <stdlib.h>

/** 
 * main - main block
 * Description: Get a random it with 5
 * Return: 0
 */

int main(void)
{
	char c = 'abcdefghijklmnopqrstuvwxyz';

	while (c <= 'a')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
