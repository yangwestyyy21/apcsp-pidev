#include <stdio.h>


int main()
	{
	int div = 3;
	for (int i = 0; i < 100; i++)
		{
		div = div + 3;
		if (div % 3 == 0)
			{
			printf ("%d", div);
			printf ("\n");
			}
		else 
			{
			printf ("_ \n");
			}
		}
	}
