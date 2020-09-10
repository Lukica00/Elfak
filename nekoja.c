#include "stdio.h"
#include "string.h"
int funkcija(char string[80]){
    int i=0;
    while (string[i]!='#' && i<strlen(string))
    {
        i++;
    }
    return i;
}
int main()

{
    char string[80];
    int broj=0;
    scanf("%s",string);
    broj = funkcija(string);
    printf("%d",broj);
    return 0;
}