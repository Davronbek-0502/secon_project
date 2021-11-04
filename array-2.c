#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int n;
    printf("2 ni darajalari : ");
    scanf("%d", &n);

    int daraja [n], toqson=1;

    for(int i=0; i<n; i++){
        daraja [i] = toqson;
        toqson += pow(2,i);
    }

    for(int j=0; j<n; j++) printf("\ndaraja[%d] = %d", j, daraja [j]);

    return 0;
}