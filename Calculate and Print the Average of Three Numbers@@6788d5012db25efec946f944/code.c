#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2,n3,avg;
    scanf("%d%d%d",&n1,&n2,&n3);
    avg=(n1+n2+n3)/3;
    printf("Average:%d",avg);
}