
#include <stdio.h>


// ���������� �Լ��� ���� ���� 

//�̷� �Լ��� �������� ����Ǿ��ִ� ������ ������� - xxx.h
int add2(int, int);//�Լ��� �������� - �����Ϸ����� �˷��ִ� �۾�


int main_functionTest03() 
{
	int result = add2(10, 20);
	printf("%d\n", result);
	return 0;
}

int add2(int num1, int num2)
{
	int result = 0;
	result = num1 + num2;
	return result;
}
