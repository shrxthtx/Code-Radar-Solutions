#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2==s3)
    {
        printf("Equilateral ");
    }
    else if(s3>s2==s1)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
}