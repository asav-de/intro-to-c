#include <stdio.h>
#include <stdbool.h>

void main() {
    char input[2];

    bool flag = true;

    
    while(flag){
        
        printf("Such Eingabe aus: a , b, e, f, g, i, l, s, t, r\n");
        scanf("%2s" , input);
        switch(input[0]){
            case ('a'):
                printf("4\n");
                break;
            case ('b'):
                printf("8\n");
                break;
            case ('e'):
                printf("3\n");
                break;
            case ('f'):
                printf("ph\n");
                break;
            case ('g'):
                printf("9\n");
                break;
            case ('i'):
                printf("!\n");
                break;
            case ('l'):
                printf("1\n");
                break;
            case ('s'):
                printf("5\n");
                break;
            case ('t'):
                printf("7\n");
                break;
            case ('r'):
                printf("2\n");
                break;
            default:
                printf("Das ist falshe Eingabe!\n");
                flag = false;
        }
    }
}