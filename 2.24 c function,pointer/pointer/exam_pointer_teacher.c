#include <stdio.h>

int main_exampointerteacher()
{
	int num = 10;
	int* pdata = &num;
	
	printf("num������:%d\n", num);
	*pdata = 100;
	printf("num������:%d\n", num);

	return 0;
}
