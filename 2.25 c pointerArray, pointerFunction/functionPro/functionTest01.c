
#include <stdio.h>

//매개변수로 전달되는 num1과 num2에 대한 유효성 검증??
//main에서 할까? 아니면 add에서 할까? 
//add는 제품을 주는 쪽, main은 제품을 받는 쪽, 즉 납품하는데에서 검증 add에서 검증

//리턴값이 있고 매개변수가 있는 함수
int add(int num1, int num2) // Callee
{
	int result = 0;
	result = num1 + num2;
	return result;
}

//리턴값이 없고 매개변수가 없는 함수
void display()
{
	for (int i = 1; i <= 5; i++)
	{
		printf("*");
	}
	printf("\n");
}

// 리턴값이 없고 매개변수가 있는 함수
void display2(int count)
{
	for (int i = 1; i <= count; i++)
	{
		printf("*");
	}
	printf("\n");

}

//_functionTest01



int main_functionTest01() //add함수를 호출하는 Caller
{
	//함수의 호출
	//매개변수가 있고 리턴값이 있는 함수
	//리턴값이 있는 경우 호출하는 곳에서 리턴타입과 동일한 타입의 변수를 선언하고 사용
	int result = add(10, 20);
	printf("%d\n", result);

	//리턴값이 없고 매개변수가 없는 함수
	display();

	//리턴값이 없고 매개변수가 있는 함수
	display2(10);

	return 0;
}