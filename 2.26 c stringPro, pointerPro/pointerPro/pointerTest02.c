#include <stdio.h>

void print_test(char** p_args1, char** p_args2);

int main_pointerTest02()
{
	//문자열은 readonly 상수라서. 내가 제어하고 싶은것은 p_data1
	char* p_data1 = "c programming"; //문자열 자체가 주소다.
	char* p_data2 = "raspberrypi";

	printf("p_data1:%s, p_data2:%s\n", p_data1, p_data2); // 문자열
	printf("p_data1:%p, p_data2:%p\n", p_data1, p_data2); // 문자열의 주소 오른쪽값
	printf("p_data1:%p, p_data2:%p\n", &p_data1, &p_data2); // p_data1, p_data2의 주소
	printf("p_data1:%c, p_data2:%c\n", *p_data1, *p_data2); // p_data1, p_data2의 주소
	
	print_test(&p_data1, &p_data2);

	printf("p_data1:%s, p_data2:%s\n", p_data1, p_data2);

	return 0;
}


// 주소를 받은 변수의 주소를 가저오니 이중 포인터가 된다
// 문자열을 참고하고 있는 것을 바꾸려고 한다. 
void print_test(char** p_args1, char** p_args2)
{
	// 주소를 교환하는 개념
	char* temp = *p_args1; // p_args1을 임시저장
	*p_args1 = *p_args2;
	*p_args2 = temp;
}