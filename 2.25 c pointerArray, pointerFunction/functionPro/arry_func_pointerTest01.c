#include <stdio.h>


void printArr(int* pmyarr);
void printallArr(int* pmyarr, int size);

int main_arrayfunctiontest0111111()
{
	int myarr[5] = { 10,20,30,40,50 };
	int myarr2[7] = { 10,20,30,40,50,60,70 };
	printArr(myarr);

	printf("\n");

	// 요소가 달라도 출력할 수 있다. 
	printallArr(myarr, 5);

	printf("\n");

	printallArr(myarr2, 7); 

	printf("\n");

	return 0;
}


//배열의 값을 출력하는 함수 5개 요소로 구성된 배열만 출력
void printArr(int* pmyarr) // 매개변수로 포인터변수 선언
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", pmyarr[i]);
	}
}

void printallArr(int* pmyarr, int size) //sizeof로 해도 좋다. 
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", pmyarr[i]);
	}
}

