#include <stdio.h>
#include <ctype.h>


int main(){

    char s;
    scanf("%c", &s);
    if (isalpha(s))
    {
        if (isupper(s))
            printf("%hhi", s-65);
        else
            printf("%hhi", s-96);
    }
    else
    {
        printf("Not a letter");
    }
}
