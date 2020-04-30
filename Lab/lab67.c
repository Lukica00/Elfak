#include<stdio.h>
#include<string.h>
int main()
{
    char s[80],a[80];
    int k=0,h=0;
    //fgets(s,sizeof(s),stdin);
    //s[strlen(s)-1]=0;
    FILE *f=fopen("textex.txt","r");
    fgets(s,sizeof(s),f);
    scanf("%s", a);
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]==a[k] && (i==0 || k>0 || s[i-1]==' ')){
            k++;
        }else k=0;
        if(k==strlen(a) && (s[i+1]==' ' || s[i+1]==0)){
            h++;
            k=0;
        }
    }
    //printf("%d",h);
    if(h)printf("ima");else printf("nema");
    return 0;
}