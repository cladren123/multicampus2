#include <stdio.h>

int main_exam2Darray()
{
	//int�� myarr[6][6] �迭�� �����ϰ� 1���� 25���� �Ҵ��ϱ�
	//�Ҵ�� �迭�� ���� ����ϱ�
	//1 2 3 4 5         15
	//6 7 8 9 10        40
	// .....
	//21 22 23 24 25
	//��� ��� ���� ������ ���ؼ� �����ϰ� ����ϱ�
	//55....

	int myarr[6][6] = {0};

	
	//�迭�� ���� �Ҵ��ϴ� for��
	int row = 0, col = 0;
	int insu = 1;
	for (row = 0; row < 5; row++)
	{
		for (col = 0; col < 5; col++)
		{
			myarr[row][col] = insu;
			insu = insu + 1;
		}
	}

	//������� ���� ���ؼ� �����ϴ� for��
	int rowsum = 0;
	for (row = 0; row < 6; row++)
	{
		for (col = 0; col < 6; col++)
		{
			rowsum = rowsum + myarr[row][col];
			if (col == 5)
			{
				myarr[row][col] = rowsum;
			}
		}
		rowsum = 0;
	}

	//�������� ���� ���ؼ� �����ϴ� for��
	int colsum = 0;
	for (col = 0; col < 6; col++)
	{
		for (row = 0; row < 6; row++)
		{
			colsum = colsum + myarr[row][col];
			if (row == 5)
			{
				myarr[row][col] = colsum;
			}
		}
		colsum = 0;
	}

	//�迭�� ���� ����ϴ� for��
	for (row = 0; row < 6; row++)
	{
		for (col = 0; col < 6; col++)
		{
			printf("%d\t", myarr[row][col]);
		}
		printf("\n");
	}




	return 0;
}


/*
����� �� ���ϱ�
for (row = 0; row < 5; row++)
	{
		for (col = 0; col < 5; col++)
		{
			myarr[row][5] = myarr[row][5]+myarr[row][col];
		}
		rowsum = 0;
	}

������ �ձ��ϱ�
for (col = 0; col < 5; col++)
	{
		for (row = 0; row < 5; row++)
		{
			myarr[5][col] = myarr[5][col]+myarr[5][col];
		}
		rowsum = 0;
	}


*/