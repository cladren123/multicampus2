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
			printf("�޴� ������ �����ϼ���.\n");
		}
	}
	
	return 0;
}

int menu(void)
{
	
	printf("********* ���������ý��� *********\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ������Ȳ ���\n");
	printf("4. ���� �� ���� ���� Ȯ���ϱ�\n");
	printf("0. ����\n");
	printf("��ȣ ���� : ");

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
	
	printf("���� ���� ���� : B1��[%d] B2��[%d] B3��[%d]\n", floorNum[0], floorNum[1], floorNum[2]);
	int inputCarNum = 0;
	printf("������ ���� �Է�(���� 4�ڸ�) : ");
	scanf_s("%d", &inputCarNum);

	int parkingNum = 0;
	int rowNum = 0;

	while (parkingNum == 0)
	{
		rowNum = rowNum + 1;
		if (rowNum == 4) rowNum = 1;

		printf("[B%d��] : \n", rowNum);
		for (int i = 0; i < 10; i++)
		{
			printf("[%d] ", parkingarray[rowNum-1][i]);
		}
		printf("\n");

		printf("���� ��ȣ �Է�(�ٸ��� 0, ��� -1) : ");
		scanf_s("    %d", &parkingNum);
	}

	parkingarray[rowNum - 1][parkingNum-1] = inputCarNum;
	printf("�����Ǿ����ϴ�.\n");

	printf("[B%d��] : \n", rowNum);
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
	printf("������ ���� �Է� : ");
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

	printf("�����Ǿ����ϴ�.\n\n");
	printParkingdata(parkingarray);
}


void printParkingdata(int* parkingarray[])
{
	printf("\n");
	printf("��ü ������ ��Ȳ\n");
	for (int j = 0; j < 3; j++)
	{
		printf("[B%d��] : \n ", j+1);
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
		printf("Ȯ���� �� �Է�(1~3 ���°���, ���� 0) : ");
		scanf_s(" %d", &floor);
		if (floor != 0)
		{
			printf("B%d�� : \n", floor);
			for (int i = 0; i < 10; i++)
			{

				printf("[%d] ", parkingarray[floor - 1][i]);
			}
			printf("\n");
		}
	}
	printf("\n");
}