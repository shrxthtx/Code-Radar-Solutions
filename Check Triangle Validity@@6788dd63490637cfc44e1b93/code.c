#include <stdio.h>


int main() {
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s3*s3==s1*s1+s2*s2)
    {
        printf("Valid");
    }    
    else
    {
        printf("Invalid");
    }
        
}