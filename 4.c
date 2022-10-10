#include <stdio.h>


int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    int size1 = sizeof(str1);
    int size2 = sizeof(str2);
    int t=0;
    for (int i = 0; str1[i]*str2[i]; i++) {
        printf("%c%c", str1[i], str2[i]);
        t++;
    }
    if (size1>size2){
        for (int i = t; str1[i]; ++i)
        printf("%c", str1[i]);
    }
    else{
        for (int i = t; str2[i]; ++i)
        printf("%c", str2[i]);
    }
}

