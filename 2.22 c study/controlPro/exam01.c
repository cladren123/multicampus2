//#include <stdio.h>
//
//int main_exam01()
//{
//	//age, gender를 입력받는다.
//	//20이상 성인, 20미만 청소년
//	//성인남자, 성인여자, 청소년남자, 청소년여자
//
//	int age;
//	char gender;
//
//	printf("나이 입력 : ");
//	scanf_s("%d", &age);
//
//	printf("성별 입력 : ");
//	scanf_s(" %c", &gender); //엔터키를 입력으로 받아들이므로 공백을 넣어둔다.
//
//	printf("%c\n", gender);
//
//	if (gender == 'M')
//	{
//		if (age >= 20)
//		{
//			printf("성인남자");
//		}
//		else
//		{
//			printf("청소년남자");
//		}
//	}
//	else if (gender == 'G')
//	{
//		if (age >= 20)
//		{
//			printf("성인여자");
//		}
//		else
//		{
//			printf("청소년여자");
//		}
//	}
//	
//
//
//	return 0;
//}
//
///*
//int age = 0, gender = 0;
//printf("나이를 입력하세요 : ");
//scanf_s("%d", &age);
//printf("성별을 입력하세요 : ");
//scanf_s(" %d", &gender);
//
//	if (gender ==1 || gender == 3)
//	{
//		if (age >= 20)
//		{
//			printf("나이는 %d이고, 성별은 %d로 성인 남자입니다.", age,gender);
//		}
//		else
//		{
//			printf("나이는 %d이고, 성별은 %d로 청소년 남자입니다.", age,gender);
//		}
//	}
//	else if (gender == 2 || gender == 4)
//	{
//		if (age >= 20)
//		{
//			printf("나이는 %d이고, 성별은 %d로 성인 여자입니다.", age,gender);
//		}
//		else
//		{
//			printf("나이는 %d이고, 성별은 %d로 청소년 여자입니다.", age,gender);
//		}
//	}
//
//*/