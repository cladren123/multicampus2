#include <stdio.h>

//          _stringTets01

int main_stringTest01()
{
	/*
	���ڿ��� char �迭�� ����
	1. ���ڿ��� ������ �������� ù ��° ������ �ּҷ� �ٲ��. 
	2. �����Ϸ��� ���ڿ��� char �迭�� ���� �����ϰ� ���ڿ� ��� 
	3. char������ �ּ� �ٲ�Ƿ� ���� ������ ������ �� �� �ִ�.
	4. �迭ó�� ������ �� �ִ�. ��, �迭ó�� ���� ���ڿ��� �ٲٸ� �ȵȴ�.
		char ch[5]
		ch[0] = 'A' --- XXX �ȵȴ�.
	*/

	//%p�� 16�����̴�.
	printf("�ּҰ� : %p, %s\n", "c programming", "c programming");

	// * �����Ͱ� �ȴ� 
	printf("ù ��° ���� : %c\n", *"c programming");

	// +1�� �ϸ� �����ϴ� ��ġ�� ���Ѵ�.
	printf("�� ��° ���� : %c\n", *("cprogramming"+1));

	printf("�� ��° ���� : %c\n", "cprogramming"[2]);

	// ���ڿ��� �����ϴ� ��� => �ּҸ� �ٲ������.
	// ���ڿ������ ��� �б� ���� �޸� ������ �����ϹǷ� ���� �ٲ� �� ����.
	char* mydata = "c programming";
	printf("mydata:%s\n", mydata);


	mydata = "java programming";
	printf("mydata:%s\n", mydata);

	return 0;
}