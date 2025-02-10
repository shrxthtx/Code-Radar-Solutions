#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n<18)
    {
        printf("Not Eligible");

    }
    else
    {
        printf("Eligible");
    }
}