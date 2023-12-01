
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    struct City cities[3];

    for (int i = 0; i < 3; ++i) {
        printf("Input for City %d:\n", i + 1);

        printf("Name> ");
        scanf("%s", cities[i].name);

        getchar(); 

        printf("Country> ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        cities[i].country[strcspn(cities[i].country, "\n")] = '\0'; // 개행 문자 제거

        printf("Population> ");
        scanf("%d", &cities[i].population);
        getchar(); 
    }

    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
