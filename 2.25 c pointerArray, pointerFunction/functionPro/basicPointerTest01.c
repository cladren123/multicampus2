#include <stdio.h>

// 다양한 타입의 포인터 변수와 포인터변수의 크기

int main_basicPointerTest0111()
{
	char chdata; // 1byte
	int intdata; // 4
	double doubledata; // 8

	// 메모리 주소 참조

	char* pchardata = &chdata;
	int* pintdata = &intdata;
	double* pdoubledata = &doubledata;

	// 포인터는 4바이트, 첫 번째 주소에 대한 값을 가지고 있기 때문에 

	// 포인터 변수가 가지고 있는 사이즈 
	printf("char*변수의 크기 : %d\n", sizeof(pchardata));
	printf("int*변수의 크기 : %d\n", sizeof(pintdata));
	printf("double*변수의 크기 : %d\n", sizeof(pdoubledata));


	printf("\n");

	// 포인터가 가르키는 주소의 사이즈크기를 나타낸다
	printf("char*변수의 크기 : %d\n", sizeof(*pchardata)); //1
	printf("int*변수의 크기 : %d\n", sizeof(*pintdata)); //4
	printf("double*변수의 크기 : %d\n", sizeof(*pdoubledata)); //8

	printf("\n");

	// 데이터 타입의 변수 크기
	printf("char변수의 크기 : %d\n", sizeof(chdata));
	printf("int변수의 크기 : %d\n", sizeof(intdata));
	printf("double변수의 크기 : %d\n", sizeof(double));
	


	return 0;
}