#include <stdio.h>
#include <ctype.h>

int main () {
    int i;
    int j = 0;
    char res[50];
    char str[] = {"Das it a car or a cat i saw?"};
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            res[j] = tolower(str[i]);
            j++;
        }
    }
    res[j] = '\0';

    int left;
    int right = j - 1;

    for (left = 0; left < right; left++) {
        if(res[left] != res[right]) {
            printf("%s \nkein Palindrom\n", str);
            return 0;
        }
        right--;
    }
    printf("%s \nPalindrom!\n", str);
}