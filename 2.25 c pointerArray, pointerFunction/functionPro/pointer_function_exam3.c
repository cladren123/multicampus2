#include <stdio.h>

void swap1(double*, double*);
void test_sort(double*, double*, double*);

//_pointer_function_exam3
int main_pointer_function_exam3()
{
	double num1 = 0.0, num2 = 0.0, num3 = 0.0;

	printf("�� ���� ���� �Է��ϼ���. : ");

	scanf_s("%lf %lf %lf", &num1, &num2, &num3);

	printf("�Էµ� �� : %.1lf %.1lf %.1lf\n", num1, num2, num3);

	//������ �����ϴ� �Լ� ȣ��
	test_sort(&num1, &num2, &num3);

	printf("���ĵ� �� : %.1lf %.1lf %.1lf", num1, num2, num3);


	return 0;
}

//�Լ�������  ����Ʈ������ �Ű����� ���� : main�� test_sort�� ���� ������ ����
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
	//pnum1 ��ü�� �����ͺ����̱� ������ �� ��ü�� �ּҰ��� ���� �ֱ� ������ &�� ���� �ʴ´�.
	if (*pnum1 < *pnum2) swap1(pnum1, pnum2);
	if (*pnum1 < *pnum3) swap1(pnum1, pnum3);
	if (*pnum2 < *pnum3) swap1(pnum2, pnum3);
}

void swap1(double* pnum1, double* pnum2)
{
	//��ȯó��
	double sub;
	sub = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = sub;
}