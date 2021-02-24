#include <stdio.h>

int main_homeworkSort()
{
	int myarr[5] = { 99,88,100,75,77 };
	int i = 0, j = 0;
	int sub = 0;

	//내림차순
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++)
		{
			if (myarr[i] > myarr[j])
			{
				sub = myarr[i];
				myarr[i] = myarr[j];
				myarr[j] = sub;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", myarr[i]);
	}

	printf("\n");

	//오름차순
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (myarr[i] < myarr[j])
			{
				sub = myarr[i];
				myarr[i] = myarr[j];
				myarr[j] = sub;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", myarr[i]);
	}

	return 0;
}