#include <stdio.h>
int main_opr5()
{
	int inputNum = 0, result = 0, result2 = 0, result3 = 0, result4=0, result5 = 0;

	printf("�����Է� : ");
	scanf_s("%d", &inputNum);

	// ||������ (or������ - ������ �� ���� �����ϸ� True)
	result = inputNum < 5 || inputNum >= 50;

	// &&������ (and������ - ������ ��� �����ؾ��Ѵ�.)
	result2 = inputNum >= 5 && inputNum < 50;
	
	result3 = 10 < inputNum < 30;
	
	//result4 = !0;
	result4 = !1;
	

	//����?A:B
	//������ �˻��ؼ� ������ ���̸� A��, �����̸� B�� ���� �����Ѵ�.
	result5 = inputNum > 100 ? 1000 : 2000;
	
	
	printf("||������=>%d\n", result);
	printf("&&������=>%d\n", result2);
	printf("�ε�ȣ ������=>%d\n", result3);
	printf("NOT������=>%d\n", result4);
	printf("���׿�����=>%d\n", result5);






	return 0;
}