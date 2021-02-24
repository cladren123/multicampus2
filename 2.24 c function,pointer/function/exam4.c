#include <stdio.h>

double calc2(int, int, char);

//_exam4
int main_exam4()
{
	int num1 = 0, num2 = 0;
	char opr = 0;
	double result1 = 0;

	printf("수식을 입력하세요 : ");

	scanf_s("%d %c %d", &num1, &opr,1, &num2);

	//함수의 호출
	result1 = calc2(num1, num2, opr);

	printf("연산결과 : %d %c %d = %f", num1, opr, num2, result1);

	return 0;
}

double calc2(int num1, int num2, char opr)
{
	double result = 0;
	switch (opr)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / (double)num2;
			break;
		default:
			printf("기타");
	}
	return result;
}