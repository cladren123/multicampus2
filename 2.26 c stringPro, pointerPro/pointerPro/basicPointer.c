
#include <stdio.h>

int main_basicPointer()
{
	//�����ʹ� ��ǥ���� ���� ���� ����̴�.
	//&data &�� �����ϴ� ���� �߿��� �κ��̴�.
	//�迭�������� ��� �־ �ȴ�.
	int data = 300; // 0x0019FED8
	
	
	

	//�ּҰ����� ã���� �� �� ����ϴ°� �������̴�.

	//300�� �Ҵ�Ǿ� �ִ� �ּҰ��� ������ ���� �ʹ�.
	//&������ -> ������ Ÿ�� ������
	//&data -> �������� data�� ������ �Ҵ�� �޸��� �ּ�
	//�����ͱ�ȣ *�� Ÿ�Ծտ� �ٴ´�.
	
	//pdata�� data������ �ּҸ� ����
	//&pdata  0x0019FECC  d8 fe 19 00  2���� �ڿ������� ����ȴ�.
	
	//�����ͺ����� �޸��� �ּҸ� �����ϱ� ���� �����̴�.
	//�����ͺ����� ����Ǿ� �ִ� ���� �ٸ� ������ �ּ� �׳� �ּ�
	//�ٸ� �޸𸮿� ����Ǿ� �ִ� �����͸� ������ �� �ִ� ����
	

	int* pdata = &data; //0x0019FECC  d8 fe 19 00
	
	//integer2����ŭ �þ��. 8����Ʈ ��ŭ �̵��� �ּ�
	pdata = pdata + 2; //0x0019FECC  e0 fe 19 00 / d8���� 8����Ʈ �������� e0�� �ƴ�. �޸��� ���� ���� 4����Ʈ �������� �������ִ�. �׷��� ���� �޸��� ���� ���� �� �� �ִ�.
	*pdata = 3250;


	//*((int*)0x0019FED8) = 500;

	printf("\n��:%d\n", data);
	printf("\n��:%d\n", *pdata);

	return 0;
}