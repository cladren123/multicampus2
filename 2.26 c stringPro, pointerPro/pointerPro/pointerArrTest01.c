
#include <stdio.h>

// _pointerArrTest01

int main_pointerArrTest01()
{
	// 같은 유형의 포인터변수를 표현할 때 사용 => 포인터 배열
	// 2차원 배열처럼 활용할 수 있다. 

	char* p_arr[3]; // 포인터 배열
	
	p_arr[0] = "IoT";
	p_arr[1] = "raspberry PI";
	p_arr[2] = "c";
	

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p_arr[i]);
	}


	return 0;
}
