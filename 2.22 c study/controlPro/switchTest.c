#include <stdio.h>

int main_switch()
{
	int gender = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &gender);

	//�Ǵܱ����� �Ǵ� �������̳� ��
	//switch ()�ȿ� �� �� �ִ� ���� �ݵ�� ���������� ���!!

	switch (gender) {
		case 1: //gender�� �� case�� ������ ���� == ������ ����
		case 3:
			printf("����");
			break;
		case 2 :
		case 4:
			printf("����");
			break;
		default :
			printf("��Ÿ");
	}

	return 0;
}