#include <stdio.h>


void printArr(int* pmyarr);
void printallArr(int* pmyarr, int size);

int main_arrayfunctiontest0111111()
{
	int myarr[5] = { 10,20,30,40,50 };
	int myarr2[7] = { 10,20,30,40,50,60,70 };
	printArr(myarr);

	printf("\n");

	// ��Ұ� �޶� ����� �� �ִ�. 
	printallArr(myarr, 5);

	printf("\n");

	printallArr(myarr2, 7); 

	printf("\n");

	return 0;
}


//�迭�� ���� ����ϴ� �Լ� 5�� ��ҷ� ������ �迭�� ���
void printArr(int* pmyarr) // �Ű������� �����ͺ��� ����
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", pmyarr[i]);
	}
}

void printallArr(int* pmyarr, int size) //sizeof�� �ص� ����. 
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", pmyarr[i]);
	}
}

