#include <stdio.h>

void swap1(int*, int*);
void mycalc(int*, int*);

//_pointer_function_exam2
int main_pointer_function_exam2()
{
	//�������� ���� ������ ������ ����
	int share=0, remainder=0;

	mycalc(&share, &remainder);

	if (share == 0 && remainder == 0)
	{
		printf("�� �� �Է��ϼ̽��ϴ�.");
	}
	else 
	{
		printf("��:%d\n", share);
		printf("������:%d\n", remainder);
	}
	

	return 0;
}

void mycalc(int* share, int* remainder)
{
	int num1=0, num2=0;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 >= num2)
	{
		*share = num1 / num2;
		*remainder = num1 % num2;
	}
}

