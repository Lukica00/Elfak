#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    FILE * f=fopen("binaran.txt","r");
    char s[80];
    fscanf(f,"%s",s);
    int g=0;
    for (int i = 0; i < strlen(s); i++)
    {
        g+=(s[i]-48)*pow(2,i);
    }
    
    printf("%d",g);
    return 0;
}