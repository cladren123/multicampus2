#include <stdio.h>

int main_examarray02()
{
	int myarr[5] = { 100,99,88,75,77 };

	int i = 0;
	//max변수를 선언하고 배열 요소의 값 중 최대값을 저장하기.
	//최대값 : ___

	int max = 0;
	//max = myarr[0];
	
	for (i = 0; i < 5; i++)
	{
		if (max < myarr[i]) max = myarr[i];
	}

	printf("최대값:%d\n", max);

	//배열의 요소를 역순으로 출력하기
	for (i = sizeof(myarr)/sizeof(int)-1; i >= 0; i--)
	{
		printf("요소:%d\n", myarr[i]);
	}

	return 0;
}