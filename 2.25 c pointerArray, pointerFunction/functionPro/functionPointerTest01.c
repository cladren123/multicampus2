#include <stdio.h>

// �����͸� ����ϴ� ���� �����͸� ������� �ʴ� ��츦 �� 

// �ٸ� ������������ �Լ��� �ߺ��Ǿ �Լ����� �ٲ��.

void display1(int);
void change1(int);
void pointerChange(int*); // ����) * ���� �ʾƵ� �� ���ư��� �Ѵ�. ������ ���������Ѵ�.
int main_functionPointerTest01()
{
	//�����Լ����� �ٸ� �Լ��� �����ϰ� ���� ��
	int main_num = 100;

	printf("*********changeȣ����**********\n");
	
	display1(main_num); // Call by Value - �Ű������� ���� ����
	change1(main_num);

	printf("*********changeȣ����**********\n");

	display1(main_num);

	printf("*********pointerChangeȣ����**********\n");

	pointerChange(&main_num);
	display1(main_num);

	return 0;
}

void display1(int num) // num �̶�� �Ű������� display���ο� ����� �������� 
{
	printf("���� : %d\n", num);
	
}

void change1(int num) //num �̶�� �Ű������� change���ο� ����� ��������
{
	num = 200;
}

void pointerChange(int* num)
{
	*num = 300;
}

//������ lvalue ���� *, rvalue ���� & 