#include <stdio.h>

int main() {
    char c;

    printf("Input> ");

    while ((c = getchar()) != '\n') {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            
            if (c >= 'A' && c <= 'Z') {
                putchar(c + 32); 
            }
            else {
                putchar(c - 32); 
            }
        }
        else {
            putchar(c);
        }
    }

    printf("\n");
    return 0;
}
