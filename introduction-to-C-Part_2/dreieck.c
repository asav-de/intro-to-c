#include <stdio.h>

int main () {
    int length = 10;
    int i;
    int j;


    for (i = 0; i < length / 2; i++){
        for (j = length / 2; j > i; j--){
            printf(" ");
        }
        for (j = 1; j <= 2 * i + 1; j++){
            printf("#");
        }
        printf("\n");

    }

    return 0;
}