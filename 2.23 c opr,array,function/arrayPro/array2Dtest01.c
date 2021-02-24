#include <stdio.h>

int main_array2dtest01()
{
	//2차원이나 3차원 이상의 배열을 다차원 배열
	//2차원 배열은 해오가열의 개념
	//데이터 타입 변수 
	//2차원배열 => 배열의 배열

	int myarr[3][4] = {
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};

	printf("2차원 배열의 요소 => %d\n", myarr[1][0]);
	printf("2차원 배열의 요소 => %d\n", myarr[2][2]);
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