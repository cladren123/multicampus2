#include <stdio.h>

int main_examswitch1()
{
	int score = 0;
	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score > 100) 
	{ 
		printf("잘 못 입력했습니다.");
	}
	else
	{
		score = score / 10;
		switch (score) {
		case 10:
		case 9:
			printf("A학점");
			break;
		case 8:
			printf("B학점");
			break;
		case 7:
			printf("C학점");
			break;
		case 6:
			printf("D학점");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("F학점");
			break;
		default:
			printf("잘 못 입력했습니다. ");
		}
	}
	return 0;
}