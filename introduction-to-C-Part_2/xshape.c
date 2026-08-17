#include <stdio.h>

void main() {
    int i = 0;
    int j = 0;
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++){
            if(i == j || (i + j) == 4) {
                printf("*");
            }else{
                printf("!");
            }
        }
        printf("\n");
    }
}