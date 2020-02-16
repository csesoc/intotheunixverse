#include<stdio.h>

#define MAXLEN 1000
#define NUMREP 10

int main(void) {
    char string[MAXLEN];
    scanf("%s", string);
    for (int i = 0; i < NUMREP; i++) {
        printf("%s\n", string);
    }
    return 0;
}