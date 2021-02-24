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
	printf("*****학사관리시스템*****\n");
	printf("1. 학생등록\n");
	printf("2. 전체학생조회\n");
	printf("3. 학생검색\n");
	printf("4. 과목별평균점수\n");
	printf("5. 학생별평균\n");
	printf("6. 종료\n");
	printf("원하는 메뉴를 선택하세요 : ");
	int inputNum = 0;
	scanf_s("%d", &inputNum);

	return inputNum;
}

// 1. 학생등록
void studentEnrollment(void)
{
	printf("\n1. 학생등록\n");
	int name = 0, python = 0, c = 0, raspberry = 0, mongodb = 0;

	printf("*****학생을 등록하세요*****\n");
	printf("학생명:");
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

// 2. 전체학생조회
void studentLookup(void)
{
	printf("\n2. 전체학생조회\n");
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

// 3. 학생검색
void studentSearch(void)
{
	printf("\n3. 학생검색\n");
	int name = 0, index = 0;
	
	printf("학생명 : ");
	scanf_s(" %c", &name,1);

	printf("%c", name);

	while (student[index][0] != name) index++;

	
	printf("Python : %d\n", student[index][1]);
	printf("C : %d\n", student[index][2]);
	printf("Raspberry : %d\n", student[index][3]);
	printf("MongoDB : %d\n", student[index][4]);
	
	printf("\n");
}

// 4. 과목별 평균점수
void subjectAverage(void)
{
	printf("\n4. 과목별 평균점수\n");
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
	
	printf("Python 평균 : %.1f\n", PythonSum / index);
	printf("C 평균 : %.1f\n", CSum / index);
	printf("Raspberry 평균 : %.1f\n", RaspberrySum / index);
	printf("MongoDB 평균 : %.1f\n", MongoDBSum / index);

	printf("\n");
}

// 5. 학생별 평균
void studentAverage(void)
{
	printf("\n5. 학생별 평균\n");
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
		printf("%c의 평균 : %.1f", student[index][0], StudentSum);
		index++;
		printf("\n");
	}
	printf("\n");
}