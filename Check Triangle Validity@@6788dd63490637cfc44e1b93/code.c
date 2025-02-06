#include <stdio.h>


int main() {
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    if(pow(s3,2)==pow(s1,2)+pow(s2,2))
    {
        printf("Valid");


    }    
    else
    {
        printf("Invalid");
    }
        
}