#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, result = 0;
	char opr = 0;

	printf("연산식을 입력하세요 : ");

	//케릭터를 입력할 때, 몇 개인지 알려주기 위해 옆에 범위를 적어야 한다.
	scanf_s("%d%c%d", &num1, &opr,1, &num2);

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
	default :
		printf("기타");

	}

	printf("연산결과 : %d %c %d = %d", num1, opr, num2, result);
	return 0;
}