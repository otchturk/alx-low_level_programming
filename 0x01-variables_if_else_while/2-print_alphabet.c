#include <stdio.h>
#include <stdlib.h>

/** 
 * main - main block
 * Description: Get a random it with 5
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
