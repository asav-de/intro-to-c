#include <stdio.h>

int main () {
    int i;
    int j = 0;
    int length = 20;
    int temp;
    int a[length];
    int b[length];

    printf("Array a: \n");
    for (i = 0; i <= 20; i++){
        a[i] = i;
        printf("a[%d] = %d \n", i, a[i]);
    }

    printf("\nArray b: \n");

    for (i = 20; i >= 0; i--) {
        b[j] = a[i];
        printf("b[%d] = %d \n", j,  b[j]);
        j++;
    }

    printf("\nArray a now is: \n");

    j = 0;
    for (i = 20; i > j; i--) {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        j++;
    }

    for (i = 0; i <= length; i++) {
        printf("a[%d] = %d\n",i, a[i]);
    }
}