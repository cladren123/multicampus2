#include <stdio.h>

int main_examPointer222()
{
	int num1 = 0, num2 = 0, total = 0;
	double average = 0.0;

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	int* pnum1 = &num1;
	int* pnum2 = &num2;
	int* ptotal = &total;
	double* paverage = &average;

	*ptotal = *pnum1 + *pnum2;
	*paverage = *ptotal / 2.0;

	printf("num1:%d  num2:%d\n", *pnum1, *pnum2);
	printf("����:%d\n", *ptotal);
	printf("���:%.1f\n", *paverage);

	printf("\n***************************************\n");

	printf("num1:%d  num2:%d\n", num1, num2);
	printf("����:%d\n", total);
	printf("���:%.1f\n", average);

	//�� ������ �ٲ� ���� Ȯ���� �� �ִ�.
	return 0;
}
