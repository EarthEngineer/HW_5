#include <stdio.h>
#include <ctype.h>

int main(){

    char str[100];
    int t=0;
    scanf("%s", str);

    for(int i=0; str[i]; ++i)
    {
        if (str[i]=='('){
            t+=1;
        }
        else if (str[i]==')')
            t-=1;
        else
            break;
        if (t==-1)
            break;
    }
    if (t!=0)
        printf("No");
    else
        printf("Yes");
}
