#include <stdio.h>
#include <ctype.h>

int main(){

    char str[100];
    scanf("%100[^\n]", str);
    for(int i=0; i>=0; ++i){

        if (str[i]==' ' && (isalpha(str[i-1])))
            printf("! ");
        else
            printf("%c", str[i]);

        if (str[i+1]==0){
            printf("! ");
            break;
        }
    }
}
