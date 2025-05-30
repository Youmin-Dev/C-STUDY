#include <stdio.h>
#include <conio.h>
#include <windows.h>

void Talk()
{
	char name[100]; // can saved text max number
	printf("\nWho's coming\n");
	Sleep(1000);
	printf("Nice to meet ya, What about you?\n What's your name?\n");
	printf("What did you say?\n>");
	scanf_s("%s", name, 100); //scanf + _s, last saved max number 
	printf("Oh nice to meet ya, %s", name);
}


int main()
{
	int time = 1;
	char choice;
	printf("Do you want Talk?\ny/n >");
	choice = _getch();

	while (time)
	{
		if (choice == 'y')
		{
			time = 0;
			Talk();
		}
		else if (choice == 'n')
		{
			printf("\nUm.. ok, See you next time :)\n");
			time = 0;
		}
		else
		{
			printf("Sorry? again plese..\n");
			printf("\nDo you want Talk?\ny/n >");
			choice = _getch();
		}
	}
	return 0;
}