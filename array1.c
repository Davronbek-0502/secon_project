#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int n;
    printf("Elementlar sonini kiriting: ");
    scanf("%d", &n);

    int natural_toq_sonlar[n], toqson=1;

    for(int i=0; i<n; i++){
        natural_toq_sonlar[i] = toqson;
        toqson += 2;
    }

    for(int j=0; j<n; j++) printf("\nnatural_toq_sonlar[%d] = %d", j, natural_toq_sonlar[j]);

    return 0;
}