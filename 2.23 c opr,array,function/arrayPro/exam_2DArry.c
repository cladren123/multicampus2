#include <stdio.h>

int main_exam2Darray()
{
	//int형 myarr[6][6] 배열을 선언하고 1부터 25까지 할당하기
	//할당된 배열의 값을 출력하기
	//1 2 3 4 5         15
	//6 7 8 9 10        40
	// .....
	//21 22 23 24 25
	//모든 행과 열의 총합을 구해서 저장하고 출력하기
	//55....

	int myarr[6][6] = {0};

	
	//배열에 값을 할당하는 for문
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

	//행방향의 합을 구해서 저장하는 for문
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

	//열방향의 합을 구해서 저장하는 for문
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

	//배열에 값을 출력하는 for문
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
행방향 합 구하기
for (row = 0; row < 5; row++)
	{
		for (col = 0; col < 5; col++)
		{
			myarr[row][5] = myarr[row][5]+myarr[row][col];
		}
		rowsum = 0;
	}

열방향 합구하기
for (col = 0; col < 5; col++)
	{
		for (row = 0; row < 5; row++)
		{
			myarr[5][col] = myarr[5][col]+myarr[5][col];
		}
		rowsum = 0;
	}


*/