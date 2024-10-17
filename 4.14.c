#include<stdio.h>

int main(void) {

    int i;
    int t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int day_fisrt = 5;
    int hot_days_count = 0;
    int cold_days_count = 0;

    printf("--Calcolo delle temperature-- \n");

    printf("Inserire la temperatura del giorno 1: ");
    scanf("%d", &t0);
    printf("Inserire la temperatura del giorno 2: ");
    scanf("%d", &t1);
    printf("Inserire la temperatura del giorno 3: ");
    scanf("%d", &t2);
    printf("Inserire la temperatura del giorno 4: ");
    scanf("%d", &t3);
    printf("Inserire la temperatura del giorno 5: ");
    scanf("%d", &t4);
    printf("Inserire la temperatura del giorno 6: ");
    scanf("%d", &t5);
    printf("Inserire la temperatura del giorno 7: ");
    scanf("%d", &t6);
    printf("Inserire la temperatura del giorno 8: ");
    scanf("%d", &t7);
    printf("Inserire la temperatura del giorno 9: ");
    scanf("%d", &t8);
    printf("Inserire la temperatura del giorno 10: ");
    scanf("%d", &t9);


    for(i = 0; i <= 9; i++) {
        if(t0 > day_fisrt || t1 > day_fisrt || t2 > day_fisrt || t3 > day_fisrt || t4 > day_fisrt || t5 > day_fisrt || t6 > day_fisrt || t7 > day_fisrt || t8 > day_fisrt || t9 > day_fisrt) {
            hot_days_count++;
        }

        // else if(t0 < day_fisrt || t1 < day_fisrt || t2 < day_fisrt || t3 < day_fisrt || t4 < day_fisrt || t5 < day_fisrt || t6 < day_fisrt || t7 < day_fisrt || t8 < day_fisrt || t9 < day_fisrt) {
        //     cold_days_count++;
        // }

        else {
            cold_days_count++;
        }
    }


    // il programma NON funziona corretamente! 
    printf("La temperatura durante 10 giorni aiumentata %d volte e diminuita %d volte", hot_days_count, cold_days_count);


    return 0;
}