#include <stdio.h>

int main_arraytest02()
{
	int myarr[5] = { 100,99,88,75,77 };

	// %p (%x) => 16진수 출력 -16진수를 대문자로 표현하고 빈 공간은 0으로 채워서 표현

	printf("%d, %p, %p, %p \n", myarr[0], myarr, &myarr[0], &myarr[1]);
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", (int)&myarr[i]); // 4바이트만큼 떨어져 있는 것을 확인할 수 있다. 
	}

	int mydata = 1000;
	printf("%d, %p\n", mydata, &mydata);
		
	return 0;
}