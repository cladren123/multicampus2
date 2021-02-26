#include <stdio.h>

void printExam(char** myarr, int count);

int main_pointer_test_exam()
{
	// char도 4바이트다
	//문자열의 탈을 쓴 주소
	//myarr = {char*, char*, char*, char*}
	char* myarr[] = { "c programming", "python", "raspberrypi", "android" };
	
	// 배열 요소의 수를 저장
	int count = sizeof(myarr)/sizeof(myarr[0]);  //sizeof(char*)

	printf("%d\n", count);
	printExam(myarr, count);
	
	//char* [] 의 주소

	return 0;
}

// myarr를 매개변수 받아서 값을 출력하기. - 이중포인터로 선언 printExam
// 문자열 출력하기
// 포인터가 배열을 저장하면 배열처럼 쓸 수 있다.
void printExam(char** myarr, int count)
{	
	for (int i = 0; i < count; i++)
	{
		printf("%s\n", myarr[i]); //*(myarr + i)
	}
}





