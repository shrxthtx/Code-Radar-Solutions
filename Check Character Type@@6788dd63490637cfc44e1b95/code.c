#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char what;
    scanf("%c",&what);
    if(what=='a' || what=='e' || what=='i' || what=='o' || what=='u')
    {
        printf("Vowel");
    }
    else if (what<='a' && what<='z' )
    {
        printf("Consonant");
    }
    else if(isdigit(what))
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}