#include "main.h"
/**
 * jack_bauer - prints every minutes of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_beauer(void)
{
	int i, j;
	i = 0;
	while (i < 24)
	{
		_putchar((i /10) + '0')
