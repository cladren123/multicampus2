#include <stdio.h>

int main_examarray1()
{
	// 1���� 100������ ���� 5���� ������ �� �ִ� �迭�� �����ϰ� 
	// �迭�� ��� ���ڸ� ���� �հ� ����� ���ؼ� ����ϱ�. 100 99 88 75 78
	
	int array1[5] = { 100,99,88,75,77 };


	/*array1[0] = 100;
	array1[1] = 99;
	array1[2] = 88;
	array1[3] = 75;
	array1[4] = 78;*/

	int sum = 0;
	double aver = 0.0f;

	for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
	{
		sum = sum + array1[i];
	}

	aver = sum / (sizeof(array1) / sizeof(int));

	printf("�迭�� ������ %d �̰� ����� %.1f �̴�.\n", sum, aver);

	printf("�迭�� ������:%d", sizeof(array1)/sizeof(int));

	//sizeof ��Ʈ�� 4����Ʈ * ���/ �� 4����Ʈ�� ������ ���̸� �˼� �ִ�.

	return 0;
}