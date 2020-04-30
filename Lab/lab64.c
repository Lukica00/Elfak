#include<stdio.h>
#include<string.h>
int main()
{
    char s[80],a[80];
    fgets(s,sizeof(s),stdin);
    int i = strlen(s)-2;
    int k=0;
    /*for (int i = strlen(s)-1; i = 0; i--)
    {
        
    }*/
    while (s[i]!=' ')
    {
        i--;
    }
    int g=strlen(s);
    for (int j = i+1; j < g-1; j++)
    {
        a[k]=s[j];
        s[j]=0;
        k++;
    }
    a[k]=' ';
    a[k+1]=0;
    strcat(a,s);

    printf("%s",a);
    return 0;
}