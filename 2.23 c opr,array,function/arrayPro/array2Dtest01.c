#include <stdio.h>

int main_array2dtest01()
{
	//2�����̳� 3���� �̻��� �迭�� ������ �迭
	//2���� �迭�� �ؿ������� ����
	//������ Ÿ�� ���� 
	//2�����迭 => �迭�� �迭

	int myarr[3][4] = {
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};

	printf("2���� �迭�� ��� => %d\n", myarr[1][0]);
	printf("2���� �迭�� ��� => %d\n", myarr[2][2]);
	//for(int col=0; col<)

	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			printf("%d\t", myarr[row][col]);
		}
		printf("\n");
	}
	

	return 0;
}