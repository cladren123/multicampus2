#include <stdio.h>

// �پ��� Ÿ���� ������ ������ �����ͺ����� ũ��

int main_basicPointerTest0111()
{
	char chdata; // 1byte
	int intdata; // 4
	double doubledata; // 8

	// �޸� �ּ� ����

	char* pchardata = &chdata;
	int* pintdata = &intdata;
	double* pdoubledata = &doubledata;

	// �����ʹ� 4����Ʈ, ù ��° �ּҿ� ���� ���� ������ �ֱ� ������ 

	// ������ ������ ������ �ִ� ������ 
	printf("char*������ ũ�� : %d\n", sizeof(pchardata));
	printf("int*������ ũ�� : %d\n", sizeof(pintdata));
	printf("double*������ ũ�� : %d\n", sizeof(pdoubledata));


	printf("\n");

	// �����Ͱ� ����Ű�� �ּ��� ������ũ�⸦ ��Ÿ����
	printf("char*������ ũ�� : %d\n", sizeof(*pchardata)); //1
	printf("int*������ ũ�� : %d\n", sizeof(*pintdata)); //4
	printf("double*������ ũ�� : %d\n", sizeof(*pdoubledata)); //8

	printf("\n");

	// ������ Ÿ���� ���� ũ��
	printf("char������ ũ�� : %d\n", sizeof(chdata));
	printf("int������ ũ�� : %d\n", sizeof(intdata));
	printf("double������ ũ�� : %d\n", sizeof(double));
	


	return 0;
}