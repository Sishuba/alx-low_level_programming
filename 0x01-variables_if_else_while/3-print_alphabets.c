#include <stdio.h>
/**
 * main - prints the alphabet in lower case then in upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a = 0;

	while (a < 52)
	{
		putchar(alphabet[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
