#include <stdio.h>


int menu(void);
void printParkingdata(int* parkingarray[]);
void parkingInput(int* parkingarray[]);
void parkingOutput(int* parkingarray[]);
void floorEmpty(int* parkingarray[]);



int main()
{
	int firstfloor[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int secondfloor[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int thirdfloor[10] = { 1,2,3,4,5,6,7,8,9,10 };


	int* parkingarray[3] = { firstfloor, secondfloor, thirdfloor };

	int menuIndex = 0;
	while ((menuIndex = menu()) != 0)
	{
		switch (menuIndex)
		{
		case 1 :
			parkingInput(parkingarray);
			break;
		case 2:
			parkingOutput(parkingarray);
			break;
		case 3:
			printParkingdata(parkingarray);
			break;
		case 4:
			floorEmpty(parkingarray);
			break;
		default :
			printf("메뉴 내에서 선택하세요.\n");
		}
	}
	
	return 0;
}

int menu(void)
{
	
	printf("********* 주차관리시스템 *********\n");
	printf("1. 주차\n");
	printf("2. 출차\n");
	printf("3. 주차현황 출력\n");
	printf("4. 층별 빈 주차 공간 확인하기\n");
	printf("0. 종료\n");
	printf("번호 선택 : ");

	int inputNum = 0;
	scanf_s("%d", &inputNum);

	
	return inputNum;
}

void parkingInput(int* parkingarray[])
{
	printf("\n");
	int floorNum[3] = { 0 };
	int j = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (parkingarray[j][i] == i+1) floorNum[j] += 1;
		}
	}
	
	printf("주차 가능 공간 : B1층[%d] B2층[%d] B3층[%d]\n", floorNum[0], floorNum[1], floorNum[2]);
	int inputCarNum = 0;
	printf("주차할 차번 입력(숫자 4자리) : ");
	scanf_s("%d", &inputCarNum);

	int parkingNum = 0;
	int rowNum = 0;

	while (parkingNum == 0)
	{
		rowNum = rowNum + 1;
		if (rowNum == 4) rowNum = 1;

		printf("[B%d층] : \n", rowNum);
		for (int i = 0; i < 10; i++)
		{
			printf("[%d] ", parkingarray[rowNum-1][i]);
		}
		printf("\n");

		printf("주차 번호 입력(다른층 0, 취소 -1) : ");
		scanf_s("    %d", &parkingNum);
	}

	parkingarray[rowNum - 1][parkingNum-1] = inputCarNum;
	printf("주차되었습니다.\n");

	printf("[B%d층] : \n", rowNum);
	for (int i = 0; i < 10; i++)
	{
		printf("[%d] ", parkingarray[rowNum - 1][i]);
	}
	printf("\n");
	

	return 0;
}

void parkingOutput(int* parkingarray[])
{
	printf("\n");
	printParkingdata(parkingarray);
	int outputCarNum = 0;
	printf("출차할 차번 입력 : ");
	scanf_s(" %d", &outputCarNum);

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (outputCarNum == parkingarray[j][i])
			{
				parkingarray[j][i] = i + 1;
			}
		}
	}

	printf("출차되었습니다.\n\n");
	printParkingdata(parkingarray);
}


void printParkingdata(int* parkingarray[])
{
	printf("\n");
	printf("전체 주차장 현황\n");
	for (int j = 0; j < 3; j++)
	{
		printf("[B%d층] : \n ", j+1);
		for (int i = 0; i < 10; i++)
		{
			printf("[%d] ", parkingarray[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}


void floorEmpty(int* parkingarray[])
{
	int floor = 1;
	printf("\n");

	while (floor != 0)
	{
		printf("확인할 층 입력(1~3 선태가능, 종료 0) : ");
		scanf_s(" %d", &floor);
		if (floor != 0)
		{
			printf("B%d층 : \n", floor);
			for (int i = 0; i < 10; i++)
			{

				printf("[%d] ", parkingarray[floor - 1][i]);
			}
			printf("\n");
		}
	}
	printf("\n");
}