
#include <stdio.h>

int main_switchtest()
{
	int num1 = 0, num2 = 0;
	char oper = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d %c %d", &num1, &oper,1, &num2);

	switch (oper)
	{
		case '+' :
			printf("������ : %d %c %d = %d", num1, oper, num2, num1 + num2);
			break;
		case '-':
			printf("������ : %d %c %d = %d", num1, oper, num2, num1 - num2);
			break;
		case '*':
			printf("������ : %d %c %d = %d", num1, oper, num2, num1 * num2);
			break;
		case '/':
			printf("������ : %d %c %d = %d", num1, oper, num2, num1 / num2);
			break;
	}
	return 0;
}