#include <stdio.h>

int main_examswitch1()
{
	int score = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score > 100) 
	{ 
		printf("�� �� �Է��߽��ϴ�.");
	}
	else
	{
		score = score / 10;
		switch (score) {
		case 10:
		case 9:
			printf("A����");
			break;
		case 8:
			printf("B����");
			break;
		case 7:
			printf("C����");
			break;
		case 6:
			printf("D����");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("F����");
			break;
		default:
			printf("�� �� �Է��߽��ϴ�. ");
		}
	}
	return 0;
}