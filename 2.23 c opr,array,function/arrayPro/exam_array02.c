#include <stdio.h>

int main_examarray02()
{
	int myarr[5] = { 100,99,88,75,77 };

	int i = 0;
	//max������ �����ϰ� �迭 ����� �� �� �ִ밪�� �����ϱ�.
	//�ִ밪 : ___

	int max = 0;
	//max = myarr[0];
	
	for (i = 0; i < 5; i++)
	{
		if (max < myarr[i]) max = myarr[i];
	}

	printf("�ִ밪:%d\n", max);

	//�迭�� ��Ҹ� �������� ����ϱ�
	for (i = sizeof(myarr)/sizeof(int)-1; i >= 0; i--)
	{
		printf("���:%d\n", myarr[i]);
	}

	return 0;
}