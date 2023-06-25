#include <stdlib.h>
#include <time.h>
/* main - Entry point */

/* Return: 0 for success always */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n < 0)
	{
		printf("%d is negative\n");
	}
	else
	{
		printf("%d is zero\n");
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
