#include <stdio.h>


int main_pointertest01()
{
	//1. �迭�� ù ��° ����� �ּ� 
	//2. �迭���� �ּһ��
	int myarr[5] = { 10,20,30,40,50 };

	int* pmyarr = myarr;

	pmyarr + 1; // �����ּ� + ���� => �ɼ��� �ǹ�(��� �ּ� ����)
	
	*(pmyarr + 1) = 5; // �����, ������ ���� ����
	myarr[1] = 6; // �� �� �Ʒ��� ���� �ǹ�, ���� ������ �����Ѵ�.

	printf("%p\n", myarr);
	printf("%p\n", myarr+1); // myarr[1]ù��° ��� 
	printf("%p\n", &myarr[1]); // myarr[1]ù��° ��� 

	return 0;
}


