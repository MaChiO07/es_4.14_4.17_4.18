#include<stdio.h>

int main(void) {

    printf("--DIVISORI-- \n");

    int num;
    int i;


    printf("Inserire numero intero: ");
    scanf("%d", &num);

    printf("I divisori del numero %d sono: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }


    return 0;
}