#include<stdio.h>
#include<string.h>
int main()
{
    char s[80],a[80];
    fgets(s,sizeof(s),stdin);
    fgets(a,sizeof(a),stdin);
    s[strlen(s)-1]=0;
    a[strlen(a)-1]=0;
    int g=strlen(s);
    for (int i = g; i <= strlen(a)+g; i++)
    {
        s[i]=a[i-g];
    }
    printf("%s",s);
}