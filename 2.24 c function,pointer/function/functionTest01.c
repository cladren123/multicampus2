
#include <stdio.h>

//�Ű������� ���޵Ǵ� num1�� num2�� ���� ��ȿ�� ����??
//main���� �ұ�? �ƴϸ� add���� �ұ�? 
//add�� ��ǰ�� �ִ� ��, main�� ��ǰ�� �޴� ��, �� ��ǰ�ϴµ����� ���� add���� ����

//���ϰ��� �ְ� �Ű������� �ִ� �Լ�
int add(int num1, int num2) // Callee
{
	int result = 0;
	result = num1 + num2;
	return result;
}

//���ϰ��� ���� �Ű������� ���� �Լ�
void display()
{
	for (int i = 1; i <= 5; i++)
	{
		printf("*");
	}
	printf("\n");
}

// ���ϰ��� ���� �Ű������� �ִ� �Լ�
void display2(int count)
{
	for (int i = 1; i <= count; i++)
	{
		printf("*");
	}
	printf("\n");

}

//_functionTest01



int main_functionTest01() //add�Լ��� ȣ���ϴ� Caller
{
	//�Լ��� ȣ��
	//�Ű������� �ְ� ���ϰ��� �ִ� �Լ�
	//���ϰ��� �ִ� ��� ȣ���ϴ� ������ ����Ÿ�԰� ������ Ÿ���� ������ �����ϰ� ���
	int result = add(10, 20);
	printf("%d\n", result);

	//���ϰ��� ���� �Ű������� ���� �Լ�
	display();

	//���ϰ��� ���� �Ű������� �ִ� �Լ�
	display2(10);

	return 0;
}