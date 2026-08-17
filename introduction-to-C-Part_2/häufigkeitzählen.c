#include <stdio.h>

int main () {
    int i;
    int a[] = { 1, 3, 2, 4, 0, 9, 1, 1, 4};
    int length = 9;
    int count[9];
    
    for (i = 0; i < length; i++) {
        printf("a[%d] = %d \n", i, a[i]);
        count[a[i]] += 1;
    }

    for (i = 0; i <= length; i++) {
        printf("count [%d] = %d\n" ,i, count[i]);
    }
}