#include <stdio.h>


int main_arraypointertest03()
{
	int arr[3] = {0}; // �迭 ����

	int* parr = arr; // �����Ϳ� �迭������ -> ù��° ��� �ּ� ����

	*parr = 10; // arr�� ù ��° ��ҿ� 10�� ����
	*(parr + 1) = 20;
	parr[2] = 30; // []�� �̿��ϸ� �迭��ó�� ����� �� �ִ�. 

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}

	//������
	printf("%d\n", sizeof(arr)); // 4 * 3 = 12 
	printf("%d\n", sizeof(parr)); //������ ���� 4


	return 0;
}


