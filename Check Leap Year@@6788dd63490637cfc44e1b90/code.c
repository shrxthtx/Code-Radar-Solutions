#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int yr;
   scanf("%d",&yr);
   if(yr%4==0 && yr%100!=0)|| (yr%400==0)
   {
    printf("Leap Year");

   }
   else
   {
    printf("Not a Leap Year");
   }
}