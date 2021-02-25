#include <stdio.h>

void inputArray(double*, int );
double getMax1(double*, int);

int main()
{
	double array[5] = {0};  // 배열
	double* parray = array; // 포인터

	//배열의 크기 구하기
	
	int size = sizeof(array); // 5(요소) * 8(double) = 40;
	//printf("%d\n", size); 
	size = sizeof(array) / sizeof(array[0]);
	//printf("%d\n", size);



	// 함수에 넣을 때 포인터로 넣어도 되고 배열로 넣어도 된다. 
	inputArray(parray, size); 

	/*for (int i = 0; i < 5; i++)
		printf("%.1lf ", array[i]);*/

	//double maxNum = getMax1(parray);
	// printf 안에 바로 넣으면 코드 길이를 줄일 수 있다. 
	printf("최댓값은 : %.1lf이다", getMax1(parray,size));

	return 0;
}

void inputArray(double* array, int size)
{
	// printf("%d", sizeof(array)); 포인터 변수라 무조건 4 나옴... size로 받아와야함

	for (int i = 0; i < size; i++)
	{
		printf("배열의 %d 요소값을 입력:", i);
		// 입력할 때 2가지 방법이 있다. 
		// 배열로 받기 : &array[i]  / 포인터로서 받기 : (array+i) 
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
