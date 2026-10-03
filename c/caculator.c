#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(65001);
	double a, b;
	char op;
	printf("请输入表达式：\n");
	scanf("%lf %c %lf", & a, & op, & b);
	switch (op) {
	case '+':
		printf("%.2f + %.2f = %.2f\n", a, b, a + b);
		break;
	case '-':
		printf("%.2f - %.2f = %.2f\n", a, b, a - b);
		break;
	case'*':
		printf("%.2f * %.2f = %.2f\n", a, b, a * b);
		break;
	case'/':
		if (b == 0)
			printf("除数不能为0\n");
		else
		printf("%.2f / %.2f = %.2f\n", a, b, a / b);
		break;
	default:
		printf("不支持的运算符:%c\n", op);

	}
	return 0;
}