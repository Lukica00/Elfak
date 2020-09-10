#include "stdio.h"
#include "string.h"
int main()

{
    char a[80];
    fgets(a,80,stdin);
    a[strlen(a)-2]=0;
    int i=strlen(a);
    do{
        i--;
    }
    while (a[i] != ' ');
    printf("%s",&a[i+1]);
    return 0;

}