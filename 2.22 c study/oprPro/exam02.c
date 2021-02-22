#include <stdio.h>

int main()
{
	int num1, num2, num3, maxNum;

	printf("값을 3개 입력해주세요 : ");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	maxNum = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

	printf("3개의 값 중 최대값 : %d", maxNum);

	return 0;
}


/*
maxnum = num1;
maxnum = num2>maxnum ? num2 : maxnum;
maxnum = num3>maxnum ? num3 : maxnum;

강사님이 푸신 방법.
*/