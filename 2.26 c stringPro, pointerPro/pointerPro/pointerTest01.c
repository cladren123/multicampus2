#include <stdio.h>

int main_pointertest01()
{
	int num = 100; // int형변수
	int* p_num; // 포인터 변수
	
	// ** 의 의미 => 1번 *의 의미는 현재 내가 선언하려는 변수에 타입을 의미
	//               p_p_num 변수에 할당될 변수의 타입이 int* 
	//               2번 *의 의미는 p_p_num 변수가 포인터변수임을 의미
	int** p_p_num; // 2중 포인터 - 포인터 변수의 주소를 저장

	p_num = &num; // 포인터 변수에 int변수의 주소를 저장
	p_p_num = &p_num; // 포인터 변수 ㅜ소를 이중포인터변수에 저장

	printf("num:%d, num의 주소 : %p\n", num, &num); 
	// num:10, num의 주소 : 0019FED8
	
	printf("p_num에 할당된 주소 : %p, p_num에 저장된 주소에 있는 값 : %d, p_num의 주소 : %p\n", p_num, *p_num, &p_num);
	// p_num에 할당된 주소 : 0019FED8, p_num에 저장된 주소에 있는 값 : 100, p_num의 주소 : 0019FECC

	printf("p_p_num에 할당된 주소 : %p, p_p_num에 저장된 주소에 있는 값 : %p, p_p_num의 주소 : %p, 참조하는 값 : %d\n", p_p_num, *p_p_num, &p_p_num, **p_p_num);
	// p_p_num에 할당된 주소 : 0019FECC, p_p_num에 저장된 주소에 있는 값 : 0019FED8, p_p_num의 주소 : 0019FEC0
	// * 주소를 따라갔을 때 나오는 값 -> num의 주소가 나옴
	// &  본인의 주소 -> p_p_num의 주소
	

	return 0;
}