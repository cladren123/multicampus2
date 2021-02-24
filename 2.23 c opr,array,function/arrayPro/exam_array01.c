#include <stdio.h>

int main_examarray1()
{
	// 1부터 100까지의 숫자 5개를 저장할 수 있는 배열을 정의하고 
	// 배열의 모든 숫자를 더한 합과 평균을 구해서 출력하기. 100 99 88 75 78
	
	int array1[5] = { 100,99,88,75,77 };


	/*array1[0] = 100;
	array1[1] = 99;
	array1[2] = 88;
	array1[3] = 75;
	array1[4] = 78;*/

	int sum = 0;
	double aver = 0.0f;

	for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
	{
		sum = sum + array1[i];
	}

	aver = sum / (sizeof(array1) / sizeof(int));

	printf("배열의 총합은 %d 이고 평균은 %.1f 이다.\n", sum, aver);

	printf("배열의 사이즈:%d", sizeof(array1)/sizeof(int));

	//sizeof 인트의 4바이트 * 요소/ 즉 4바이트를 나누면 길이를 알수 있다.

	return 0;
}