#include<stdio.h>
#include<string.h>

int main()
{
    FILE *reci=fopen("reci.txt","w+");
    char s[80];
    int i=0;
    int j=0;
    fgets(s,sizeof(s),stdin);
    printf("%s",s);
    while (s[i]!=0)
    {
        j=i;
        while(s[j+1]!=' ' && s[j+1]!=0 ){
            j++;
        }
        for (int k = i; k <= j; k++)
        {
            fprintf(reci,"%c", s[k]);
        }
        fprintf(reci,"\n");
        i=j;
        i++;
        i++;
    }
    return 0;
}