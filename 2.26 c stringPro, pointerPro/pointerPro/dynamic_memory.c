#include <stdio.h>
#include <stdlib.h>



int main()
{
	int* plist = NULL;
	//malloc리턴값 - 힙에 할당된 메모리영역 중 첫 번째 바이트의 주소 void*
	//malloc매개변수 - 요청할 메모리의 사이즈(바이트단위)
	//동적할당이므로 실행할때마다 주소가 바뀐다.
	
	plist = malloc(sizeof(int)*3); //12 - 3개를 받아서 작업하겠다.
	
	plist[0] = 10;
	plist[1] = 20;
	plist[2] = 10;
	
	//fd fd 바운더리로 묶여있는 곳이 메모리이다.

	//첫 실행 : 0x006855B8
	//두번째 실행 : 0x00825520 계속 변한다. 


	// fd에 경계에 값이 들어가버렸다.
	// 동적으로 할당받은 메모리 범위를 벗어나게 프로그래밍이됨.

	//*(((char*)plist) + 12) = 'A'; 


	//메모리 반납  fd 경계를 벗어나면 에라메세지가 나타난다. 
	//메모리를 잘 못 사용하면 반납하는 free 시점에서 에러가 난다.
	free(plist);
	
	return 0;
}






