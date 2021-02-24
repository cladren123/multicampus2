#include <stdio.h>

int student[50][5] ={ 
	{'A',80,70,60,80},
	{'B',90,50,60,70}
};


int menu(void);
void studentLookup(void);
void studentEnrollment(void);
void studentSearch(void);
void subjectAverage(void);
void studentAverage(void);

int main()
{
	int menuIndex = 0;
	while ((menuIndex = menu()) != 6)
	{
		switch (menuIndex) 
		{
		case 1:
			studentEnrollment();
			break;
		case 2:
			studentLookup();
			break;
		case 3:
			studentSearch();
			break;
		case 4:
			subjectAverage();
			break;
		case 5:
			studentAverage();
			break;
		}
	}

	return 0;
}


int menu(void)
{
	printf("*****�л�����ý���*****\n");
	printf("1. �л����\n");
	printf("2. ��ü�л���ȸ\n");
	printf("3. �л��˻�\n");
	printf("4. �����������\n");
	printf("5. �л������\n");
	printf("6. ����\n");
	printf("���ϴ� �޴��� �����ϼ��� : ");
	int inputNum = 0;
	scanf_s("%d", &inputNum);

	return inputNum;
}

// 1. �л����
void studentEnrollment(void)
{
	printf("\n1. �л����\n");
	int name = 0, python = 0, c = 0, raspberry = 0, mongodb = 0;

	printf("*****�л��� ����ϼ���*****\n");
	printf("�л���:");
	scanf_s(" %c", &name,1);
	printf("Python:");
	scanf_s("%d", &python);
	printf("C:");
	scanf_s("%d", &c);
	printf("Raspberry:");
	scanf_s("%d", &raspberry);
	printf("MongoDB:");
	scanf_s("%d", &mongodb);

	int index = 0;
	while (student[index][0] != 0)
	{
		index++;
	}

	student[index][0] = name;
	student[index][1] = python;
	student[index][2] = c;
	student[index][3] = raspberry;
	student[index][4] = mongodb;
		
	printf("\n");
}

// 2. ��ü�л���ȸ
void studentLookup(void)
{
	printf("\n2. ��ü�л���ȸ\n");
	int row = 0, col = 0;
	int index = 0;

	while (student[index][0] != 0) index++;

	for (row = 0; row < index; row++)
	{
		for (col = 0; col < 5; col++)
		{
			if (col == 0)
			{
				printf("%c\t", student[row][col]);
			}
			else
			{
				printf("%d\t", student[row][col]);
			}
			
		}
		printf("\n");
	}
	printf("\n");
}

// 3. �л��˻�
void studentSearch(void)
{
	printf("\n3. �л��˻�\n");
	int name = 0, index = 0;
	
	printf("�л��� : ");
	scanf_s(" %c", &name,1);

	printf("%c", name);

	while (student[index][0] != name) index++;

	
	printf("Python : %d\n", student[index][1]);
	printf("C : %d\n", student[index][2]);
	printf("Raspberry : %d\n", student[index][3]);
	printf("MongoDB : %d\n", student[index][4]);
	
	printf("\n");
}

// 4. ���� �������
void subjectAverage(void)
{
	printf("\n4. ���� �������\n");
	int index = 0;
	double PythonSum = 0, CSum = 0, RaspberrySum = 0, MongoDBSum = 0;
	while (student[index][0] != 0) index++;
	
	int row = 0;
	for (row = 0; row < index; row++)
	{
		PythonSum = PythonSum + student[row][1];
		CSum = CSum + student[row][2];
		RaspberrySum = RaspberrySum + student[row][3];
		MongoDBSum = MongoDBSum + student[row][4];
	}
	
	printf("Python ��� : %.1f\n", PythonSum / index);
	printf("C ��� : %.1f\n", CSum / index);
	printf("Raspberry ��� : %.1f\n", RaspberrySum / index);
	printf("MongoDB ��� : %.1f\n", MongoDBSum / index);

	printf("\n");
}

// 5. �л��� ���
void studentAverage(void)
{
	printf("\n5. �л��� ���\n");
	int index = 0, count = 0;
	double StudentSum = 0;

	while (student[index][0] != 0)
	{
		for (int col = 1; col < 5; col++)
		{
			StudentSum = StudentSum + student[index][col];
			count++;
		}
		StudentSum = StudentSum / (double)count;
		printf("%c�� ��� : %.1f", student[index][0], StudentSum);
		index++;
		printf("\n");
	}
	printf("\n");
}