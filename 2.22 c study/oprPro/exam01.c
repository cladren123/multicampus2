#include <stdio.h>

int main_exam01()
{
	int inputSecond = 0;
	int hours = 0, minutes = 0, seconds = 0;
	printf("�� �Է� : ");
	scanf_s("%d", &inputSecond);
	hours = inputSecond / 3600;
	minutes = inputSecond % 3600 / 60;
	seconds = inputSecond % 3600 % 60;

	printf("�Է� ���� %d���� ��ȯ ��� => %d�ð� %d�� %d��", inputSecond, hours, minutes, seconds);

	return 0;
}