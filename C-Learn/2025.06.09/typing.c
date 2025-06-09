#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void setTextColor(int color) {
    printf("\033[%dm", color);
}
void resetTextColor() {
    printf("\033[0m");
}

int main()
{
    int count = 0;
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    printf("10초 동안 아무 키나 눌러보세요!\n");
    while (clock() < 10000)
    {
        if (_kbhit()) { // clikc check
            _getch();
            count++;
        }
        Sleep(100);
    }
    end = clock();

    printf("시간 종료!\n총 누른 횟수 : %d", count);
}