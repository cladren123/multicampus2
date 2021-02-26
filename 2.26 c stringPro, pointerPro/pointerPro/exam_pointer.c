#include <stdio.h>

int main_exampointer()
{
	int num = 10;
	
	printf("%d\n", num);

	int* pdata = &num;

	*pdata = 100;

	printf("%d\n", num);

	return 0;
}
