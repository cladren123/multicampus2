#include <stdio.h>

void rotate(int*, int*, int*);

//_pointer_function_exam4

int main_pointer_function_exam4()
{
	int num1 = 10, num2 = 20, num3 = 30;
	
	char conf = 0;
	int confirm = 1;

	/*while (confirm)
	{
		printf("%d %d %d", num1, num2, num3);
		scanf_s("%c", &conf,1);;
		
		if (conf == '\n') {}
		else confirm = 0;

		rotate(&num1, &num2, &num3);
	}*/

	//������� �ڵ�
	char ch;
	while (1) // �������� ����
	{
		//ch �Է� ���� �� �ڸ����� ����ϴ� ���� ���� ����.
		printf("%d %d %d\n", num1, num2, num3);
		scanf_s("%c", &ch, 1);

		//enterŰ �̿��� Ű���� Ű�� ���������� �ݺ����� �������´�.
		if (ch != '\n')
		{
			break;
		}
		rotate(&num1, &num2, &num3);
	}



	return 0;
}

void rotate(int* pnum1, int* pnum2, int* pnum3)
{
	int sub = 0;
	sub = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = *pnum3;
	*pnum3 = sub;
}



