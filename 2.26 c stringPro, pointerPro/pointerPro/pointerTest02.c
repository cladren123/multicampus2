#include <stdio.h>

void print_test(char** p_args1, char** p_args2);

int main_pointerTest02()
{
	//���ڿ��� readonly �����. ���� �����ϰ� �������� p_data1
	char* p_data1 = "c programming"; //���ڿ� ��ü�� �ּҴ�.
	char* p_data2 = "raspberrypi";

	printf("p_data1:%s, p_data2:%s\n", p_data1, p_data2); // ���ڿ�
	printf("p_data1:%p, p_data2:%p\n", p_data1, p_data2); // ���ڿ��� �ּ� �����ʰ�
	printf("p_data1:%p, p_data2:%p\n", &p_data1, &p_data2); // p_data1, p_data2�� �ּ�
	printf("p_data1:%c, p_data2:%c\n", *p_data1, *p_data2); // p_data1, p_data2�� �ּ�
	
	print_test(&p_data1, &p_data2);

	printf("p_data1:%s, p_data2:%s\n", p_data1, p_data2);

	return 0;
}


// �ּҸ� ���� ������ �ּҸ� �������� ���� �����Ͱ� �ȴ�
// ���ڿ��� �����ϰ� �ִ� ���� �ٲٷ��� �Ѵ�. 
void print_test(char** p_args1, char** p_args2)
{
	// �ּҸ� ��ȯ�ϴ� ����
	char* temp = *p_args1; // p_args1�� �ӽ�����
	*p_args1 = *p_args2;
	*p_args2 = temp;
}