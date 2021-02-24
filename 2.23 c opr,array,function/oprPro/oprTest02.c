
#include <stdio.h>

//단항증감연산자 

int main_type()
{
	//y = ++x 전위연산자 계산 후 넣기
	//y = x++ 후위연산자 넣은 다음에 계산
	//y = --x 전위
	//y = x-- 후위

	int x = 5, y = 0;
	y = ++x;
	printf("y=%d, x=%d\n", y, x);

	x = 5;
	y = x++;
	printf("y=%d, x=%d\n", y, x);

	x = 5;
	y = --x;
	printf("y=%d, x=%d\n", y, x);

	x = 5;
	y = x--;
	printf("y=%d, x=%d\n", y, x);



	return 0;
}