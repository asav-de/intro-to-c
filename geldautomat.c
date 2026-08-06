#include <stdio.h>

int main () {
    int balance = 1000;
    const int TAGES_LIMIT = 500;
    int sum;
    int amount;
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter the amount please: \n");
        scanf("%d", &amount);
        if (amount > balance) {
            printf("Not enough money on balance..");
        } else if (amount > TAGES_LIMIT) {
            printf("Daily limit 500 € ...");
        } else {
            sum = amount;
            balance = balance - amount;
            printf("Your summ: %d\nNew balance: %d\n", sum, balance);
            break;
        }
    }
}
