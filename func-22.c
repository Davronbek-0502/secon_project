#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int Calc(int A,int B,int op){
     
      
      if(op==1){
            printf("%d",A-B);
      }
       else if(op==2){
            printf("%d",A*B);
      }
       else if(op==3){
            printf("%d",A/B);
      }
       else if(op==4){
            printf("%d",A+B);
      }
      else 
      {
            printf("togri son kiriting\n");
      }
       
}
int main (){

     int A,B,op;

      printf("A=" );
      scanf("%d",&A);

      printf("B=" );
      scanf("%d",&B);

      printf(" 1-ayrish,2-kopaytirish,3-bolish,4-qoshish ");
      printf("\nop=" );
      scanf("%d",&op);
      
      Calc(A,B,op);


      return 0;
}
 