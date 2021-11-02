#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>



int main () {
    // n va counter o'zgaruvchisini e'lon qilish
    int n, counter=0;

    // har safar dastur ishga tushganda tasodifiy sonlarni tanlashga buyruq berish.
    srand(time(NULL));

    // n ni so'rab olish
    printf("n= ");
    scanf("%d", &n);

    // massiv, toqlari va saqlab_turuvchi
    long int massiv[n], toqlari[n], saqlab_turuvchi;

    // massiv ni tasodifiy sonlar bilan to'ldirish
    printf("Massiv:");
    for(int i=0; i<n; i++){
        massiv[i] = rand()%11+1;
        printf(" %ld", massiv[i]);
    }

    // massiv ichida toqlarini ajratib olish va sanab chiqish
    for(int k=0; k<n; k++){
        if(massiv[k]%2){
            toqlari[counter] = massiv[k];
            counter++;
        }
    }

    // saralanmagan toqlarini consolega chiqarish 
    printf("\nSaralanmagan natija:");
    for(int k=0; k<counter; k++){
        printf(" %ld", toqlari[k]);
    }

    // sorting algorithm [bubble sort]
    for(int j=0; j<counter; j++){
        for(int m=1; m<counter-j; m++){
            if(toqlari[m-1]>toqlari[m]){
                saqlab_turuvchi = toqlari[m-1];
                toqlari[m-1] = toqlari[m];
                toqlari[m] = saqlab_turuvchi;
            }
        }
    }

    // saralangan toqlarini consolega chiqarish
    printf("\nSaralangan natija:");
    for(int k=0; k<counter; k++){
        printf(" %ld", toqlari[k]);
    }

    // toqlarini sonini chiqarish
    printf("\nToqlari soni: %d\n", counter);

    // dasturni yakunlash
    return 0;
}