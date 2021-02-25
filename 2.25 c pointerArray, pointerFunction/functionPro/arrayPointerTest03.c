#include <stdio.h>


int main_arraypointertest03()
{
	int arr[3] = {0}; // 배열 선언

	int* parr = arr; // 포인터에 배열명저장 -> 첫번째 요소 주소 저장

	*parr = 10; // arr의 첫 번째 요소에 10을 대입
	*(parr + 1) = 20;
	parr[2] = 30; // []를 이용하면 배열명처럼 사용할 수 있다. 

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}

	//차이점
	printf("%d\n", sizeof(arr)); // 4 * 3 = 12 
	printf("%d\n", sizeof(parr)); //포인터 변수 4


	return 0;
}


