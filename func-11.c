#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void minmax(int x,int y){
    if (x<y)
    {
      printf(" kattasi= %d\n",y);
    }if (x<y)
    {
        printf(" kichigi= %d\n",x);
    }

    printf("\n");
}

int main (){

     int a=5,b=6,c=7,d=8;

     minmax(a,b);
     minmax(c,d);
     
    return 0;
}