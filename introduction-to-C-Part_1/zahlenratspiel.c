#include <stdio.h>

int main() {
    const int GEHEIMZAHL = 4874;
    int pin;
    while (pin != GEHEIMZAHL) {
        printf("Enter the PIN please: \n");
        scanf("%d", &pin);
        if (pin < GEHEIMZAHL) {
            printf("less...");
        } else if (pin > GEHEIMZAHL) {
            printf("more...");
        }
    }
    printf("Congratulations!!!");
    return 0;
}