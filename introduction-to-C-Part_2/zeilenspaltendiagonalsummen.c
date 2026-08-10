#include <stdio.h>

int main () {
    int i;
    int j;
    int zeilen = 0;
    int spalten = 0;
    int diagonalsummen1 = 0;
    int diagonalsummen2 = 0;

    int matrix[4][4] = {
        { 2, 3, 5, 7},
        {11,13,17,19},
        {23,29,31,37},
        {41,43,47,53}
    };

    int k = 0;
    for (i = 0; i < 4; i++){
        zeilen = 0;
        spalten = 0;
        for (j = 0; j < 4; j++){
            zeilen += matrix[i][j];
            spalten += matrix[j][k];
            if (j == 3) {
                printf("spalten [%d][%d] = %d\n",i, k, spalten);
                k++;
            }
            if (i == j) {
                diagonalsummen1 += matrix[i][j];
            }
            if ((i + j) == 3) {
                diagonalsummen2 += matrix[i][j];
            }
        }
        printf("zeilen[%d] = %d\n",i, zeilen);
    }
    printf("diagonalsummen1 1 = %d\n", diagonalsummen1);
    printf("diagonalsummen2 = %d\n", diagonalsummen2);
}