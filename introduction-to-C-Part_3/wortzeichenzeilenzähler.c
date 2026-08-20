#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        fprintf(stderr, "Usage: %s <datei>\n", argv[0]);
        return (1);
    }
    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        fprintf(stderr, "%s: %s\n", argv[1], strerror(errno));
        return (1);
    }
    int c;
    int zeichen = 0;
    int woerter = 0;
    int zeilen = 0;
    int prev;
    bool separator = true;

    while ((c = fgetc(f)) != EOF) {
        if (isspace(c)){
            separator = true;
            if (c == '\n') {
                zeilen += 1;
            }
        } else {
            if (separator) {
                woerter += 1;
            }
            separator = false;
        }
        prev = c;
        zeichen += 1;
    }
    if (ferror(f)){
        perror("Fehler beim Lesen");
        fclose(f);
        return (1);
    }
    if (zeichen > 0 && prev != '\n'){
        zeilen += 1;
    }
    fclose(f);
    printf("Datei: %s\nZeichen: %d\nWörter: %d\nZeilen: %d\n", argv[1], zeichen, woerter, zeilen);
    return(0);
}