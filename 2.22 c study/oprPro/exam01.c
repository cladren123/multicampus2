#include <stdio.h>

int main_exam01()
{
	int inputSecond = 0;
	int hours = 0, minutes = 0, seconds = 0;
	printf("초 입력 : ");
	scanf_s("%d", &inputSecond);
	hours = inputSecond / 3600;
	minutes = inputSecond % 3600 / 60;
	seconds = inputSecond % 3600 % 60;

	printf("입력 받은 %d초의 변환 결과 => %d시간 %d분 %d초", inputSecond, hours, minutes, seconds);

	return 0;
}