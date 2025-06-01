#include <stdio.h>
#include <windows.h>
#include <conio.h>

void number() // lowercase alphabet loop
{
	int number = 97;
	while (number <= 97 + 25)
	{
		printf("%c\n", number);
		number++;
		Sleep(100);
	}
}

void Number()
{
	int number = 65;
	while (number <= 65 + 25)
	{
		printf("%c\n", number);
		number++;
		Sleep(100);
	}
}

int main()
{
	int time = 1;
	char choice;
	printf("What do you want to alphabet?\n(A/a)\n>");
	choice = getchar();
	
	while (time)
	{
		if (choice == 'A')
		{
			Number(); // uppercase alphabet loop
			time--;
		}
		else if (choice == 'a')
		{
			number(); // lowercase alphabet loop
			time--;
		}
		else
		{
			choice = getchar();
			printf("again to choice\n(A/a)\n>");
		}
	}

	return 0;
}