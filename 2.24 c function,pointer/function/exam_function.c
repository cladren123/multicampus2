#include <stdio.h>

//������ �������α׷��� �ۼ��ϱ� ���� ��ų
//UI + ����
//�޴� ����

int getMax(int, int, int);

int main_exam_function()
{
	int num1 = 0, num2 = 0, num3 = 0;
	int result = 0;
	printf("3���� �Է��ϼ��� : ");

	scanf_s("%d %d %d", &num1, &num2, &num3);
	//%c - ����, %d %i - 10����, %f - float, double, %ld - long
	//%s - ���ڿ�, %lf - long double, %p - �ּ�(�������� �ּ�,16����)


	result = getMax(num1, num2, num3);

	printf("�Է¹��� ������ �� �� �ִ밪 : %d", result);

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