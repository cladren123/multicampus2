#include <stdio.h>

int main_arraytest02()
{
	int myarr[5] = { 100,99,88,75,77 };

	// %p (%x) => 16���� ��� -16������ �빮�ڷ� ǥ���ϰ� �� ������ 0���� ä���� ǥ��

	printf("%d, %p, %p, %p \n", myarr[0], myarr, &myarr[0], &myarr[1]);
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", (int)&myarr[i]); // 4����Ʈ��ŭ ������ �ִ� ���� Ȯ���� �� �ִ�. 
	}

	int mydata = 1000;
	printf("%d, %p\n", mydata, &mydata);
		
	return 0;
}