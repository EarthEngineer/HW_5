#include <stdio.h>
#include <ctype.h>


int main(){

    char s;
    scanf("%c", &s);
    if (isalpha(s)){

        if (isupper(s)) printf("Uppercase Letter");
        else printf("Lowercase Letter");
    }
    else{

        if (isdigit(s)) printf("Digit");
        else printf("Other");
    }
}
