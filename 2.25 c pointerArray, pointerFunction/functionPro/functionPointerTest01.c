#include <stdio.h>

// 포인터를 사용하는 경우와 포인터를 사용하지 않는 경우를 비교 

// 다른 페이지에서도 함수가 중복되어서 함수명을 바꿨다.

void display1(int);
void change1(int);
void pointerChange(int*); // 깨알) * 넣지 않아도 잘 돌아가긴 한다. 하지만 명시해줘야한다.
int main_functionPointerTest01()
{
	//메인함수에서 다른 함수에 공유하고 싶은 값
	int main_num = 100;

	printf("*********change호출전**********\n");
	
	display1(main_num); // Call by Value - 매개변수로 값을 전달
	change1(main_num);

	printf("*********change호출후**********\n");

	display1(main_num);

	printf("*********pointerChange호출전**********\n");

	pointerChange(&main_num);
	display1(main_num);

	return 0;
}

void display1(int num) // num 이라는 매개변수는 display내부에 선언된 지역변수 
{
	printf("숫자 : %d\n", num);
	
}

void change1(int num) //num 이라는 매개변수는 change내부에 선언된 지역변수
{
	num = 200;
}

void pointerChange(int* num)
{
	*num = 300;
}

//포인터 lvalue 에는 *, rvalue 에는 & 