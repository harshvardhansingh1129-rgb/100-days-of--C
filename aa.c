#include <stdio.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    char month[10];

    printf("Enter month: ");
    scanf("%s", month);

    if (month[0] == 'F' && month[1] == 'E' && month[2] == 'B') {
        printf("28 or 29 days");
    }
    else if (month[0] == 'A' && month[1] == 'P' && month[2] == 'R') {
        printf("30 days");
    }
    else if (month[0] == 'J' && month[1] == 'U' && month[2] == 'N') {
        printf("30 days");
    }
    else if (month[0] == 'S' && month[1] == 'E' && month[2] == 'P') {
        printf("30 days");
    }
    else if (month[0] == 'N' && month[1] == 'O' && month[2] == 'V') {
        printf("30 days");
    }
    else if (month[0] == 'J' && month[1] == 'A' && month[2] == 'N') {
        printf("31 days");
    }
    else if (month[0] == 'M' && month[1] == 'A' && month[2] == 'R') {
        printf("31 days");
    }
    else if (month[0] == 'M' && month[1] == 'A' && month[2] == 'Y') {
        printf("31 days");
    }
    else if (month[0] == 'J' && month[1] == 'U' && month[2] == 'L') {
        printf("31 days");
    }
    else if (month[0] == 'A' && month[1] == 'U' && month[2] == 'G') {
        printf("31 days");
    }
    else if (month[0] == 'O' && month[1] == 'C' && month[2] == 'T') {
        printf("31 days");
    }
    else if (month[0] == 'D' && month[1] == 'E' && month[2] == 'C') {
        printf("31 days");
    }
    else {
        printf("Invalid month");
    }

    return 0;
}