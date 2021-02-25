#include <stdio.h>

void swap1(double*, double*);
void test_sort(double*, double*, double*);

//_pointer_function_exam3
int main_pointer_function_exam3()
{
	double num1 = 0.0, num2 = 0.0, num3 = 0.0;

	printf("세 개의 수를 입력하세요. : ");

	scanf_s("%lf %lf %lf", &num1, &num2, &num3);

	printf("입력된 값 : %.1lf %.1lf %.1lf\n", num1, num2, num3);

	//정렬을 실행하는 함수 호출
	test_sort(&num1, &num2, &num3);

	printf("정렬된 값 : %.1lf %.1lf %.1lf", num1, num2, num3);


	return 0;
}

//함수에서는  포인트변수로 매개변수 선언 : main과 test_sort가 같은 변수를 참조
void test_sort(double* pnum1, double* pnum2, double* pnum3)
{
	/*if (*pnum1 < *pnum2)
	{
		swap1(&*pnum1, &*pnum2);
		if (*pnum1 < *pnum3)
		{
			swap1(&*pnum1, &*pnum3);
			swap1(&*pnum2, &*pnum3);
		}
		else
		{
			if(*pnum2 < *pnum3)
			swap1(&*pnum2, &*pnum3);
		}
	}
	if (*pnum1 > *pnum2)
	{
		if (*pnum1 < *pnum3)
		{
			swap1(&*pnum1, &*pnum3);
			swap1(&*pnum2, &*pnum3);
		}
		else
		{
			if (*pnum2 < *pnum3)
				swap1(&*pnum2, &*pnum3);
		}
	}*/
	//pnum1 자체가 포인터변수이기 때문에 이 자체가 주소값을 갖고 있기 때문에 &가 붙지 않는다.
	if (*pnum1 < *pnum2) swap1(pnum1, pnum2);
	if (*pnum1 < *pnum3) swap1(pnum1, pnum3);
	if (*pnum2 < *pnum3) swap1(pnum2, pnum3);
}

void swap1(double* pnum1, double* pnum2)
{
	//교환처리
	double sub;
	sub = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = sub;
}