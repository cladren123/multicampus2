#include <stdio.h>

int main_arrayTest()
{
	//int형 배열을 선언함, 배열을 구성하는 여러 요소 첫 번째 요소이고 이 첫 번째 요소의
	//메모리주소가 반환
	//배열변수명은 첫번째 요소의 주소값을 가지고 있다.
	//int형 데이터를 5개 담을 수 있는 배열을 선언하고 초기값을 0으로 정의

	int myarr[5] = { 0 };

	//배열의 요소에 값을 할당

	myarr[2] = 100;

	printf("첫 번째 요소의 값 => %d\n", myarr[0]); //myarr의 0번 요소에 저장된 값


	//배열을 구성하는 모든 요소에 저장된 값을 출력
	//c언어는 에러를 발생하지 않는다 범위 이상의 값을 주었는데도 대신 쓰레기값이 들어간다.
	//0~배열의 요소의 갯수 -1
	for (int i = 0; i < 5; i++)
	{
		printf("배열의 요소의 값 => %d\n", myarr[i]);
	}

	int myarr2[10]; //크기가 10개인 배열을 선언

	myarr2[0] = 10;
	myarr2[1] = 20;
	myarr2[2] = 30;
	myarr2[3] = 40;
	myarr2[4] = 50;



	printf("%d\n", myarr2[10]);
	printf("%d\n", myarr2[4]);
	printf("%d\n", myarr2[-5]);



	return 0;
}