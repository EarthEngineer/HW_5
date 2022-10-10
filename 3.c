#include <stdio.h>
#include <string.h>

int main(){

    char str[20];
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; n>i ; i++){

        for (int j = 0; j <= i; j++)
            printf("%c", str[j]);

        printf("\n");
    }
}
