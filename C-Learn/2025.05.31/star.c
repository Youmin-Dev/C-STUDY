#include <stdio.h>

void star()
{
	int time = 1;
	int star = 1;
	while (time <= 5)
	{
		while (star)
		{
			printf("*");
			star--;
		}
		time++;
		star = time;
		printf("\n");
	}
}

int main()
{
	star();
	return 0;
}