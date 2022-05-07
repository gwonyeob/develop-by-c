#include<stdio.h>
int add(int num1, int num2) //연산 함수 덧셈
{
	return num1 + num2;
}
int sub(int num1, int num2) //뻴셈
{
	return num1 - num2;
}
int gob(int num1, int num2) //곱셈
{
	return num1 * num2;
}
double div(double num1, double num2) //나눗셈
{
	return num1 / num2;
}
int namaji(int num1, int num2) //나머지 연산
{
	return num1 % num2;
}
void menu();
int add(int num1, int num2);
int sub(int num1, int num2);
int gob(int num1, int num2); 
double div(double num1, double num2);
int namaji(int num1, int num2);

void menu() //첫 실행 화면
{
	printf("---------------------\n");
	printf("menu\n");
	printf("---------------------\n");
	printf("1. 덧셈\n2. 뻴셈\n3. 곱셈\n4. 나눗셈\n5. 나머지\n원하는 연산을 선택하세요(1~5): ");
}
int main()
{
	int input, num1, num2; //input 연산 선택하는 숫자
	char set;
	while (1)
	{
		menu(); //메뉴화면 불러오기
		scanf_s("%d", &input);
		printf("정수 2개를 입력하세요 ex)4 10: ");
		scanf_s("%d %d", &num1, &num2);

		if (input == 1)
		{
			printf("연산 결과: %d\n", add(num1, num2));
		}
		else if (input == 2)
		{
			printf("연산 결과: %d\n", sub(num1, num2));
		}
		else if (input == 3)
		{
			printf("연산 결과: %d\n", gob(num1, num2));
		}
		else if (input == 4)
		{
			printf("연산 결과: %f\n", div(num1, num2));
		}
		else if (input == 5)
		{
			printf("연산 결과: %d\n", namaji(num1, num2));
		}
		else
			printf("아직 미구현 기능입니다.\n");
		printf("계속할까요?(y/n): ");
		getchar();
		scanf_s("%c", &set);
		if (set == 'n')
			break;
		else if (set == 'y')
			continue;
		else
		{
			printf("잘못된 입력입니다\n");
			printf("다시 입력하세요\n");
			printf("계속할까요?(y/n): ");
			getchar();
			scanf_s("%c", &set);
		}
	}
	return 0;
}

