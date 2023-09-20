#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int andresult, orresult, xorresult;
	int num1, num2;

	printf("2개의 정수 입력: ");
	scanf("%d %d", &num1, &num2); // & \ ^

	andresult = num1 & num2;
	orresult = num1 | num2;
	xorresult = num1 ^ num2;
	printf("%d & %d = %d \n", num1, num2, andresult);
	printf("%d | %d = %d \n", num1, num2, orresult);
	printf("%d ^ %d = %d \n", num1, num2, xorresult);
	return 0;
}
