#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, result = 0;
	char opr = 0;

	printf("������� �Է��ϼ��� : ");

	//�ɸ��͸� �Է��� ��, �� ������ �˷��ֱ� ���� ���� ������ ����� �Ѵ�.
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
		printf("��Ÿ");

	}

	printf("������ : %d %c %d = %d", num1, opr, num2, result);
	return 0;
}