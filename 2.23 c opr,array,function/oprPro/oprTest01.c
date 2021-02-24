
#include <stdio.h>
//
//int main_type()
//{
//	int a;
//	a = 3;
//	//int a = 3;
//	//L-value = R-value
//	//left, location = right
//
//	/*컨트롤 쉬프트 슬래시*/
//
//	char ch = 'A';
//	printf("%c\n", ch);
//
//
//	/*%c로 출력했기 때문에 문자로 보이지만 내부에서의 연산은??*/
//	//ch+1
//	//char + int의 연산은 서로 타입이 다른 변수의 연산
//	//1byte + 4byte 
//	//다른 타입끼리 연산을 할 경우 표현범위가 큰 형식대로 따라간다. 즉, int로 변환해서 연산이 된다.
//	printf("%c\n", ch + 1);
//	printf("%c\n", 'A' + 2);
//
//
//	// double int의 연산
//	// 8 4 double 형식으로 연산하므로 %d는 사용할 수 없다.
//	// 연산의 결과가 표현범위가 넓은 형식으로 변환되는 현상을 type promotion이라 한다.
//
//	printf("%d\n", 5.0+1);
//	printf("%f\n", 5.0+2);
//
//
//	//곱셈은 *, 나눗셈 / , 나머지연산 %
//
//	int num = 10;
//	printf("%d\n", num * 10);
//
//	// int * double => double 연산하므로 %d로 표현할 수 없다.
//	printf("%d\n", num * 10.0);
//	printf("%f\n", num * 10.0);
//
//	// int/int => int연산 -> 몫을 구하는 것과 동일하다.
//	printf("%d\n", num / 2);
//	printf("%.1f\n", 5.0 / 2);
//	//printf("%.1f\n", 5.0 / 0);
//	printf("몫 : %d\n", 5 / 2);
//	printf("나머지 : %d\n", 5 % 2);
//
//
//	return 0;
//}