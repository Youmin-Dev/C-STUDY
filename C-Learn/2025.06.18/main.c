#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void gotoXY(int x, int y) {
	printf("\033[%d;%dH", y, x);
}
void setTextColor(int color) {
	printf("\033[%dm", color);
}
void resetTextColor() {
	printf("\033[0m");
}

void typing()
{
	int times = 1;
	int typing[] = { 'L', 'O', 'V', 'E', '!' };
	printf("LOVE!\n");

	while (times)
	{
		if (times == 1)
		{
			char ch = _getch();
			if (ch == typing[0])
			{
				resetTextColor();
				printf("%c", ch);
			}
			else
			{
				setTextColor(31);
				printf("%c", ch);
			}
			times++;
		}

		if (times == 2)
		{
			char ch = _getch();
			if (ch == typing[1])
			{
				resetTextColor();
				printf("%c", ch);
			}
			else
			{
				setTextColor(31);
				printf("%c", ch);
			}
			times++;
		}

		if (times == 3)
		{
			char ch = _getch();
			if (ch == typing[2])
			{
				resetTextColor();
				printf("%c", ch);
			}
			else
			{
				setTextColor(31);
				printf("%c", ch);
			}
			times++;
		}

		if (times == 4)
		{
			char ch = _getch();
			if (ch == typing[3])
			{
				resetTextColor();
				printf("%c", ch);
			}
			else
			{
				setTextColor(31);
				printf("%c", ch);
			}
			times++;
		}

		if (times == 5)
		{
			char ch = _getch();
			if (ch == typing[4])
			{
				resetTextColor();
				printf("%c", ch);
			}
			else
			{
				setTextColor(31);
				printf("%c", ch);
			}
			times++;
		}

		if (times <= 6)
		{
			break;
		}
	}
	
}

int main()
{
	typing();
	return 0;
}