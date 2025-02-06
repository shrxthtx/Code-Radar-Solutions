#include <stdio.h>



int main() {
   int N;
   scanf("%d",&N);
   if(N/5==0 && N/11==0)
   {
    printf("Divisible");
   }
   else
   {
    printf("Not Divisible");
   }
}