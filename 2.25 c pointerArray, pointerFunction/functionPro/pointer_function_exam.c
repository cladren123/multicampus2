#include <stdio.h>

void swap(int*, int*);


int main_pointer_function_exam()
{
	int num1 = 100, num2 = 200;

	printf("********** swap �ϱ� �� ************\n");

	printf("num1:%d num2:%d\n", num1, num2);

	printf("********** swap �� �� ************\n");
	swap(&num1, &num2);

	printf("num1:%d num2:%d\n", num1, num2);


	return 0;
}

void swap(int* pnum1, int* pnum2)
{
	//��ȯó��
	int sub;
	sub = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = sub;
}

