#include <stdio.h>

//    _stringTest02

int main_stringTest0222()
{
	char str[80];
	printf("���ڿ��Է�:");

	//���ڿ��� ũ�⸦ ����
	//������ ���� ���ӵ� ���ڸ� �Է¹޴´�.
	//scanf�� ���۶�� �޸𸮸� ����Ѵ�. ���۴� Ű����� �Է��� ���ڿ��� �����ϴ� �޸��̴�.
	// \n�� ������ ���۰� ���������. �׷��� ���� scanf������ ���ۿ� �����ִ� �޸𸮰� ����. ���۸� ����ִ� �۾��� �ʿ��ϴ�

	// �ּҰ� ������ ������ ������ �ް� ���ϴ´�� �����߰ڴ�. 

	// firstPro, function1. while(getchar() != '\n'); => ���۸� ���� ���

	scanf_s("%s", str,sizeof(str));
	printf("���ڿ��Է� : %s\n", str);
	scanf_s("%s", str, sizeof(str));
	printf("���ڿ��Է� : %s\n", str);

	//���ڿ��� �����ϴ� ���
	char* mydata = "C programming"; // �б� ���� �޸𸮿� ����ȴ�. => ������� �ʴ´�. -> ������ �ٲ� �� ����. -> �׳� ��°�� �ٲ���Ѵ�.
	printf("%s\n", mydata);
	//mydata[1] = 'a'; //�Ұ�


	mydata = "java programming"; // ���ο� �޸𸮷� �Ҵ�޴´�. ���ο� ���ڿ��� �ּҷ� �����ؾ� �Ѵ�. 
	printf("%s\n", mydata);

	//���ڿ��� ����̱� ������ ���� ���� �ٲ� ���� ����. 

	// �ٲٰ� �ʹٸ� �迭�� �־ �ٲٴ� ����� �ִ�. 
	/*char str[100] = "C programming";
	printf("%s\n", str);
	str[0] = 'B';
	printf("%s\n", str);
	char* pstr = str;
	pstr[0] = 'D';
	printf("%s\n", str);
	printf("str�ּ�: %p\n", str);
	printf("���ڿ��ּ�: %p\n", "C programming");*/






	return 0;
}