#include <stdio.h>

int calc(int num1, int num2, char opr);


int main_functionexam()
{
	int num1 = 0, num2 = 0;
	char opr = 0;
	int result = 0;

	printf("������ �Է��ϼ��� : ");

	scanf_s("%d %c %d", &num1, &opr,1, &num2);

	result = calc(num1, num2, opr);

	printf("������ : %d %c %d = %d", num1, opr, num2, result);

	return 0;
}

int calc(int num1, int num2, char opr)
{
	int result = 0;
	switch (opr)
	{
	case '+' : 
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	}

	return result;

}