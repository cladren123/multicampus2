#include <stdio.h>

void printExam(char** myarr, int count);

int main_pointer_test_exam()
{
	// char�� 4����Ʈ��
	//���ڿ��� Ż�� �� �ּ�
	//myarr = {char*, char*, char*, char*}
	char* myarr[] = { "c programming", "python", "raspberrypi", "android" };
	
	// �迭 ����� ���� ����
	int count = sizeof(myarr)/sizeof(myarr[0]);  //sizeof(char*)

	printf("%d\n", count);
	printExam(myarr, count);
	
	//char* [] �� �ּ�

	return 0;
}

// myarr�� �Ű����� �޾Ƽ� ���� ����ϱ�. - ���������ͷ� ���� printExam
// ���ڿ� ����ϱ�
// �����Ͱ� �迭�� �����ϸ� �迭ó�� �� �� �ִ�.
void printExam(char** myarr, int count)
{	
	for (int i = 0; i < count; i++)
	{
		printf("%s\n", myarr[i]); //*(myarr + i)
	}
}





