#include <stdio.h>

void swap1(int*, int*);
void mycalc(int*, int*);

//_pointer_function_exam2
int main_pointer_function_exam2()
{
	//나머지와 몫을 저장할 변수를 선언
	int share=0, remainder=0;

	mycalc(&share, &remainder);

	if (share == 0 && remainder == 0)
	{
		printf("잘 못 입력하셨습니다.");
	}
	else 
	{
		printf("몫:%d\n", share);
		printf("나머지:%d\n", remainder);
	}
	

	return 0;
}

void mycalc(int* share, int* remainder)
{
	int num1=0, num2=0;
	printf("두 값을 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 >= num2)
	{
		*share = num1 / num2;
		*remainder = num1 % num2;
	}
}

