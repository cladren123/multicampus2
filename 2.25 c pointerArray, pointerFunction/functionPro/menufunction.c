#include <stdio.h>

//������ �������α׷��� �ۼ��ϱ� ���� ��ų
//UI + ����
//�޴� ����

int printMenu(void)
{
	int inputValue = 0; // ������ �޴��� ���� ����
	system("cls"); // ȭ��Ŭ����
	printf("**************�л�����ý���****************\n");
	printf("1. �����ۼ�\t2. ��ȸ\t3. �׸�˻�\t4. ����\n");
	scanf_s("%d", &inputValue);

	return inputValue;
};

int main_menufunction()
{
	//�޴� �̺�Ʈ ����
	//������� ���ÿ� ���� �ݺ��ؼ� �����ϴ� ������ �̺�Ʈ ������� �Ѵ�.
	//����ڰ� �Է��� ���� ���� Ư�� ����� �ݺ��ؼ� �����ϵ��� ����
	//4���� �Է��ϸ� ����, �������� �۾�
	int menuIndex = 0;
	while ((menuIndex = printMenu())!=4)
	{
		switch (menuIndex)
		{
		case 1: // �����ۼ��� ����
			//1�� ��ɿ� �˸��� �Լ��� ȣ���ؼ� �۾�
			printf("1. �����ۼ�\n");
			break;
		case 2:
			printf("2. ��ȸ\n");
			break;
		case 3:
			printf("3. �׸�˻�\n");
			break;
		default :
			printf("�� �� ����");
			break;
		}
	}

	return 0;
}