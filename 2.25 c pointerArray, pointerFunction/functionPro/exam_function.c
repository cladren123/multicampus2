#include <stdio.h>

//간단한 관리프로그램을 작성하기 위한 스킬
//UI + 로직
//메뉴 구성

int getMax(int, int, int);

int main_exam_function()
{
	int num1 = 0, num2 = 0, num3 = 0;
	int result = 0;
	printf("3수를 입력하세요 : ");

	scanf_s("%d %d %d", &num1, &num2, &num3);
	//%c - 문자, %d %i - 10진수, %f - float, double, %ld - long
	//%s - 문자열, %lf - long double, %p - 주소(포인터의 주소,16진수)


	result = getMax(num1, num2, num3);

	printf("입력받은 세개의 수 중 최대값 : %d", result);

	return 0;
}

int getMax(int num1, int num2, int num3)
{
	int max = 0;
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			max = num1;
		}
		else
		{
			max = num3;
		}
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			max = num2;
		}
		else
		{
			max = num3;
		}
	}
	return max;
}

/*
int max = num1
if(num2>max)
{
max = num2;
}
if(num3 > max)
{
max=num3;
}
*/