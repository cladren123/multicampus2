#include <stdio.h>

int main()
{
	int num1, num2, num3, maxNum;

	printf("���� 3�� �Է����ּ��� : ");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	maxNum = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

	printf("3���� �� �� �ִ밪 : %d", maxNum);

	return 0;
}


/*
maxnum = num1;
maxnum = num2>maxnum ? num2 : maxnum;
maxnum = num3>maxnum ? num3 : maxnum;

������� Ǫ�� ���.
*/