#include<stdio.h>
#include<string.h>
int main()
{
    char s[80],a[80];
    FILE *f1=fopen("recenice.txt","r");
    FILE *f2=fopen("drg.txt","a");
    int n=0;
    scanf("%d",&n);
    while (!feof(f1))
    {
        fgets(s,sizeof(s),f1);
        if(strlen(s)>n){
            fprintf(f2,"%s",s);
        }
    }
}