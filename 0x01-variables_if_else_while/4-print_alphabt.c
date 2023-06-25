#include <stdio.h>
/**
 * main -prints alphabet in lower case excluding letters q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
