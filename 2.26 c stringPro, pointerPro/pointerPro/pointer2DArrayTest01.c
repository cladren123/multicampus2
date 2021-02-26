
#include <stdio.h>

// _pointer2DArrayTest01

int main_pointer2DArrayTest01()
{
	// 배열은 곧 주소, 주소상수 즉 자체가 포인터변수가 된다.
	int myarr1[4] = { 10,20,30,100 };
	int myarr2[4] = { 40,50,60,70 };
	int myarr3[4] = { 80,90,100,110 };

	// int형 주소를 참조하는 포인터배열 3개
	int* p_arr[3] = { myarr1, myarr2, myarr3 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", p_arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
