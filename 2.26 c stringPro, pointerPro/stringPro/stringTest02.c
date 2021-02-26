#include <stdio.h>

//    _stringTest02

int main_stringTest0222()
{
	char str[80];
	printf("문자열입력:");

	//문자열은 크기를 지정
	//공백이 없는 연속된 문자를 입력받는다.
	//scanf는 버퍼라는 메모리를 사용한다. 버퍼는 키보드로 입력한 문자열을 저장하는 메모리이다.
	// \n이 들어오면 버퍼가 끊어버린다. 그래서 다음 scanf에서도 버퍼에 남아있는 메모리가 들어간다. 버퍼를 비워주는 작업이 필요하다

	// 주소가 들어오니 포인터 변수로 받고 원하는대로 만들어야겠다. 

	// firstPro, function1. while(getchar() != '\n'); => 버퍼를 비우는 방법

	scanf_s("%s", str,sizeof(str));
	printf("문자열입력 : %s\n", str);
	scanf_s("%s", str, sizeof(str));
	printf("문자열입력 : %s\n", str);

	//문자열을 수정하는 경우
	char* mydata = "C programming"; // 읽기 전용 메모리에 저장된다. => 변경되지 않는다. -> 원본을 바꿀 수 없다. -> 그냥 통째로 바꿔야한다.
	printf("%s\n", mydata);
	//mydata[1] = 'a'; //불가


	mydata = "java programming"; // 새로운 메모리로 할당받는다. 새로운 문자열을 주소로 지정해야 한다. 
	printf("%s\n", mydata);

	//문자열은 상수이기 때문에 절대 값을 바꿀 수가 없다. 

	// 바꾸고 싶다면 배열에 넣어서 바꾸는 방법이 있다. 
	/*char str[100] = "C programming";
	printf("%s\n", str);
	str[0] = 'B';
	printf("%s\n", str);
	char* pstr = str;
	pstr[0] = 'D';
	printf("%s\n", str);
	printf("str주소: %p\n", str);
	printf("문자열주소: %p\n", "C programming");*/






	return 0;
}