#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float num1; // num1 = km
	float result; // result = miles
	printf("please enter kilometers: ");
	scanf("%f", &num1); 
	result = num1 * 0.6215040398;
	printf("%.1f km is equal to %.1f miles \n", num1, result);
	return 0;

}
