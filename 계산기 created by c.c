#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	char c;
	printf("사칙연산을 할까요?(y/n): ");
	scanf_s("%c", &c);
	rewind(stdin);
	if (c == 'y')
	{
		int num1, num2;
		char op = { 0 }; //연산자
		printf("계산식을 입력하세요(ex 4 + 3): ");
		scanf_s("%d %c %d", &num1, &op, &num2);
		getchar();
		if (op == '+')
			printf("%d %c %d=%d", num1, op, num2, num1 + num2);
		else if (op == '-')
			printf("%d %c %d=%d", num1, op, num2, num1 - num2);
		else if (op == '*')
			printf("%d %c %d=%d", num1, op, num2, num1 * num2);
		else if (op == '/')
			printf("%d %c %d=%d", num1, op, num2, num1 / num2);
		else
			printf("잘못된 입력입니다");

	}
	else if (c == 'n')
	{
		printf("아직 미구현 기능입니다");
		return 0;
	}
}