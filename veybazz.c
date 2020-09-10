#include "stdio.h"
#include "string.h"
int main()

{
    char a[80],b[80];
    char c[]=" = ";
    char d[]=" != ";
    scanf("%s",a);
    scanf("%s",b);
    if(strcmp(a,b)==0){
        strcat(a,c);
        strcat(a,b);
        printf("%s",a);
    }else{
        strcat(b,d);
        strcat(b,a);
        printf("%s",b);
    }
    return 0;

}