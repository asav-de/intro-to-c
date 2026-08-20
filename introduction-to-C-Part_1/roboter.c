#include <stdio.h>
#include <string.h>


int verhaltens (const char *befehl, const char *zustand){
    if (strcmp(zustand, "glücklich") == 0) {
        if (strcmp(befehl, "blink") == 0) {
            printf("Der Roboter blinkt fröhlich bunt\n");
        } else if (strcmp(befehl, "spin") == 0) {
            printf("Der Roboter dreht sich vor Freude im Kreis\n");
        } else if (strcmp(befehl, "beep") == 0) {
            printf("Der Roboter piept ein fröhliches Lied\n");
        }
    } else if (strcmp(zustand, "traurig") == 0) {
        if (strcmp(befehl, "blink") == 0) {
            printf("Der Roboter blinkt trüb und blass\n");
        } else if (strcmp(befehl, "spin") == 0) {
            printf("Der Roboter dreht sich langsam und lustlos\n");
        } else if (strcmp(befehl, "beep") == 0) {
            printf("Der Roboter piept ein trauriges Signal\n");
        }
    } else if (strcmp(zustand, "müde") == 0) {
        if (strcmp(befehl, "blink") == 0) {
            printf("Der Roboter blinkt langsam und schwach\n");
        } else if (strcmp(befehl, "spin") == 0) {
            printf("Der Roboter dreht sich schwerfällig\n");
        } else if (strcmp(befehl, "beep") == 0) {
            printf("Der Roboter piept erschöpft\n");
        }
    } else if (strcmp(zustand, "verwirrt") == 0) {
        if (strcmp(befehl, "blink") == 0) {
            printf("Der Roboter blinkt hektisch durcheinander\n");
        } else if (strcmp(befehl, "spin") == 0) {
            printf("Der Roboter dreht sich planlos hin und her\n");
        } else if (strcmp(befehl, "beep") == 0) {
            printf("Der Roboter piept ratlos\n");
        }
    }
    return 0;
}

int main () {

    const char *zustand[] = {
        "glücklich",
        "traurig",
        "müde",
        "verwirrt"
    };

    int castomZustand;
    char umschalter[10];
    int befehlPointer;

    const char *befehl[] = {
        "blink",
        "spin",
        "beep"
    };

    const char *blink[] = {
        "Der Roboter blinkt fröhlich bunt",
        "Der Roboter blinkt trüb und blass",
        "Der Roboter blinkt langsam und schwach",
        "Der Roboter blinkt hektisch durcheinander"
    };

    const char *spin[] = {
        "Der Roboter dreht sich vor Freude im Kreis",
        "Der Roboter dreht sich langsam und lustlos",
        "Der Roboter dreht sich schwerfällig",
        "Der Roboter dreht sich planlos hin und her"
    };

    const char *beep[] = {
        "Der Roboter piept ein fröhliches Lied",
        "Der Roboter piept ein trauriges Signal",
        "Der Roboter piept erschöpft",
        "Der Roboter piept ratlos"
    };

    printf("Hallo! Wie fühlt sich dein Robot?\nIst er glücklich?\nEnter ja oder nein\n");
    scanf("%9s", umschalter);
    if (strcmp(umschalter, "ja") == 0) {
        printf("Prima!!!\n Wie ist Ihre Befehl für Roboter?\nBlink: 0\nSpin: 1\nBeep: 2\n");
        scanf("%d", &befehlPointer);
        verhaltens(befehl[befehlPointer], zustand[0]);
    } else {
        printf("Schade :( .. Wie geht es ihm eigentlich..?\ntraurig: 1\nmüde: 2\nverwirrt: 3\n");
        scanf("%d", &castomZustand);
        printf("Wie ist Ihre Befehl für Roboter?\nBlink: 0\nSpin: 1\nBeep: 2\n");
        scanf("%d", &befehlPointer);
        verhaltens(befehl[befehlPointer], zustand[castomZustand]);
    }
    return 0;
}

