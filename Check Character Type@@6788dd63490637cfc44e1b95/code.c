#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char what;
    scanf("%c",&what);
    if(c=='a' || 'e' || 'i' || 'o' || 'u')
    {
        printf("Vowel");
    }
    else if(what<='A' && what<='z')
    {
        printf("consonant");
    }
    else if(isdigit(what))
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}