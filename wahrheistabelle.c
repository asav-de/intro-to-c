#include <stdio.h>
#include <string.h>

int main() {
    int i,a,b;
    const char *operand[] = {"||","&&","^","!="};
    for (i = 0; i < 4; i++){
        const char *op;
        op = operand[i];
        switch (i)  {
            case 0:
                printf("A | B | A OR B\n");
                break;
            case 1:
                printf("A | B | A AND B\n");
                break;
            case 2:
                printf("A | B | A XOR B\n");
                break;
            case 3:
                printf("A | B | A NOT B\n");
                break;
        }  
        printf("------------\n");
        for (a = 0; a < 2; a++){
            for (b = 0; b < 2; b++){
                if (strcmp(op, "||") == 0) {
                    printf("%d | %d |  %d\n", a, b, a || b);
                } else if (strcmp(op, "&&") == 0) {
                    printf("%d | %d |  %d\n", a, b, a && b);  
                } else if (strcmp(op, "^") == 0) {
                    printf("%d | %d |  %d\n", a, b, a ^ b);
                } else if (strcmp(op, "!=") == 0) {
                    printf("%d | %d |  %d\n", a, b, a != b);
                }
            }
        }
    }
    return 0;
}