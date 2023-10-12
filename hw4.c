
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num, j = 1;
    printf("Please enter a number:");
    scanf("%d", &num);
    if (num <= 1) {
        j = 0;
    }
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                j = 0;
                break;
            }
        }
    }
    if (j) {
        printf("It is a prime number.");
    }
    else {
        printf("It is not a prime number.");
    }
    return 0;
}