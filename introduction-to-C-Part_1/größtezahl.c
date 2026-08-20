#include <stdio.h>

int main () {
    int arr[3];
    int i;
    int counter = 0;
    int more = 0;
    for (i = 1; i <= 3; i++) {
        printf("Eingabe %d: \n", i);
        scanf("%d", &arr[i-1]);
        if (arr[i-1] > more) {
            more = arr[i-1];
        } 
        if (i >= 2 && arr[i - 1] == arr[i - 2]) {
            counter++;
        }
    } 
    printf("Die größte Zahl ist: %d\n", more);
    if (counter == 2) {
            printf("Alle drei sind gleich!!!");
        }
}