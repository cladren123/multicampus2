#include <stdio.h>

int main()
{
	int myarr[3][4] = {
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};

	myarr[0][4] = 7777;

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