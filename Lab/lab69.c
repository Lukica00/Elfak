#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    fgets(s,sizeof(s),stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if('Z'>=s[i] && s[i]>='A'){
            s[i]=s[i]+'a'-'A';
        }
    }
    printf("%s",s);
}