#include <stdio.h>

void inputArray(double*, int );
double getMax1(double*, int);

int main()
{
	double array[5] = {0};  // �迭
	double* parray = array; // ������

	//�迭�� ũ�� ���ϱ�
	
	int size = sizeof(array); // 5(���) * 8(double) = 40;
	//printf("%d\n", size); 
	size = sizeof(array) / sizeof(array[0]);
	//printf("%d\n", size);



	// �Լ��� ���� �� �����ͷ� �־ �ǰ� �迭�� �־ �ȴ�. 
	inputArray(parray, size); 

	/*for (int i = 0; i < 5; i++)
		printf("%.1lf ", array[i]);*/

	//double maxNum = getMax1(parray);
	// printf �ȿ� �ٷ� ������ �ڵ� ���̸� ���� �� �ִ�. 
	printf("�ִ��� : %.1lf�̴�", getMax1(parray,size));

	return 0;
}

void inputArray(double* array, int size)
{
	// printf("%d", sizeof(array)); ������ ������ ������ 4 ����... size�� �޾ƿ;���

	for (int i = 0; i < size; i++)
	{
		printf("�迭�� %d ��Ұ��� �Է�:", i);
		// �Է��� �� 2���� ����� �ִ�. 
		// �迭�� �ޱ� : &array[i]  / �����ͷμ� �ޱ� : (array+i) 
		scanf_s("%lf", (array + i));
	}
}

double getMax1(double* array, int size)
{
	double maxNum = 0.0;
	for (int i = 0; i < size; i++)
	{
		if (maxNum < array[i])
			maxNum = array[i];
	}
	return maxNum;
}
