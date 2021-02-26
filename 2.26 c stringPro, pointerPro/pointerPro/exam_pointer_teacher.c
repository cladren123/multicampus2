#include <stdio.h>

int main_exampointerteacher()
{
	int num = 10;
	int* pdata = &num;
	
	printf("num변경전:%d\n", num);
	*pdata = 100;
	printf("num변경후:%d\n", num);

	return 0;
}
