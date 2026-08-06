#include <stdio.h>

int main () {
    int jahr;
    printf("Jahr eingeben: \n");
    scanf("%d", &jahr);

    if (jahr % 100 == 0) {
        printf("%d ist ein Schaltjahr\n", jahr);
    } else {
        printf("%d ist kein Schaltjahr\n", jahr);
    }
} 