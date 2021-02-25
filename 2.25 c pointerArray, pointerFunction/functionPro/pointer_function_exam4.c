#include <stdio.h>

void rotate(int*, int*, int*);

//_pointer_function_exam4

int main_pointer_function_exam4()
{
	int num1 = 10, num2 = 20, num3 = 30;
	
	char conf = 0;
	int confirm = 1;

	/*while (confirm)
	{
		printf("%d %d %d", num1, num2, num3);
		scanf_s("%c", &conf,1);;
		
		if (conf == '\n') {}
		else confirm = 0;

		rotate(&num1, &num2, &num3);
	}*/

	//강사님의 코드
	char ch;
	while (1) // 무한으로 실행
	{
		//ch 입력 받을 때 자리수를 명시하는 것을 잊지 말자.
		printf("%d %d %d\n", num1, num2, num3);
		scanf_s("%c", &ch, 1);

		//enter키 이외의 키보드 키가 눌러졌을때 반복문을 빠저나온다.
		if (ch != '\n')
		{
			break;
		}
		rotate(&num1, &num2, &num3);
	}



	return 0;
}

void rotate(int* pnum1, int* pnum2, int* pnum3)
{
	int sub = 0;
	sub = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = *pnum3;
	*pnum3 = sub;
}



