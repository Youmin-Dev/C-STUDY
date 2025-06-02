#include <stdio.h>

int main()
{
	for (int a = 1; a <= 10; a++) // Test 1
	{
		printf("%d\n", a);
	}

	for (int a=1; a<=5; a++) // Test 2
	{
		printf("*");
	}

	for (int a=2; a<=100; a=a+2) // Test 3
	{
		printf("%d", a);
	}

	for (int a = 1; a <= 5; a++) // Test 4
	{
		for (int b=1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int a = 1; a <= 5; a++) // Test 5
	{
		for (int b = 5; b >= a; b--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}