#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char what;
    scanf("%c",&what);
    if( what=='a' || what=='e' || what=='i' ||what=='o' || what=='u'|| what=='A' || what=='E' || what=='I' ||what=='O' || what=='U')
    {
        printf("Vowel");
    }
    else if (what>='a' && what<='z' || what>='A' && what<='Z' )
    {
        printf("Consonant");
    }
    else if(what>=0 && what<=9)
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}