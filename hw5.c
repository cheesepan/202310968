#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f(int n) {
	if (n > 1) 
		f(n / 2);
		printf("%d", n % 2);
}

#include <stdio.h>
int main(void)
{
	int n;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	printf("2진수로 변환한 값: ", n);
	f(n);
	return 0;
}