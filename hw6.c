#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int numbers[5];
    int oddCount = 0;  
    int evenCount = 0; 

    printf("5개의 정수를 입력하세요: \n");

    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

 
    printf("Odd numbers: ");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 1) {
            printf("%d ", numbers[i]);
            oddCount++;
        }
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            evenCount++;
        }
    }

    return 0;
}
