
#include <stdio.h>

// _pointer2DArrayTest01

//int *numPtr[4] = { &num1, &num2, &num3, &num4 };    

void inputdata(int array1[], int* parray[], int* count);
void printdata(int* parray[]);


int main_pointer2DArray_exam01()
{
	// 포인터 변수에 int 변수의 주소를 저장. main에서 멀쩡한 놈, 함수에서 포인터를 집어넣는다.
	int* parray[10];

	int array1[4] = { 0,0,0,0 };
	int array2[4] = { 0,0,0,0 };
	int array3[4] = { 0,0,0,0 };
	int array4[4] = { 0,0,0,0 };
	int array5[4] = { 0,0,0,0 };
	int array6[4] = { 0,0,0,0 };
	int array7[4] = { 0,0,0,0 };
	int array8[4] = { 0,0,0,0 };
	int array9[4] = { 0,0,0,0 };
	int array10[4] = { 0,0,0,0 };
	
	int count = 0;
	
	inputdata(array1, parray, &count);
	inputdata(array2, parray, &count);
	inputdata(array3, parray, &count);
	inputdata(array4, parray, &count);
	inputdata(array5, parray, &count);
	inputdata(array6, parray, &count);
	inputdata(array7, parray, &count);
	inputdata(array8, parray, &count);
	inputdata(array9, parray, &count);
	inputdata(array10, parray, &count);

	printdata(parray);
	return 0;
}



void inputdata(int array1[], int* parray[], int* count)
{
	printf("추가할 배열 입력 : ");
	scanf_s(" %d %d %d %d", &array1[0], &array1[1], &array1[2], &array1[3]);
	parray[*count] = array1;
	
	*count = *count + 1;	
}

void printdata(int*  parray[])
{
	int count = 0;
	printf("\n전체 배열 출력\n");
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			printf("%d ", parray[j][i]);
		}
		count++;
		printf("\n");
	}
}