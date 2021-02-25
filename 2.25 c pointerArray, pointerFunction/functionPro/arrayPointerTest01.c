#include <stdio.h>


int main_pointertest01()
{
	//1. 배열은 첫 번째 요소의 주소 
	//2. 배열명은 주소상수
	int myarr[5] = { 10,20,30,40,50 };

	int* pmyarr = myarr;

	pmyarr + 1; // 기준주소 + 정수 => 옵셋을 의미(상대 주소 개념)
	
	*(pmyarr + 1) = 5; // 저장된, 지정된 값을 변경
	myarr[1] = 6; // 위 와 아래는 같은 의미, 같은 역할을 수행한다.

	printf("%p\n", myarr);
	printf("%p\n", myarr+1); // myarr[1]첫번째 요소 
	printf("%p\n", &myarr[1]); // myarr[1]첫번째 요소 

	return 0;
}


