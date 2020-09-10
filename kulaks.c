#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *a=(char *) calloc(80,sizeof(char));
    char *b=(char *) calloc(80,sizeof(char));
    fgets(a,80,stdin);
    fgets(b,80,stdin);
    a[strlen(a)-1]=0;
    b[strlen(b)-1]=0;
    int u=0;
    for (int i = 0; i < strlen(a)-strlen(b); i++)
    {
        if(strncmp(&a[i],b,strlen(b))==0){
            i=strlen(a);
            u++;
            printf("si klaro");
        }
    }
    if(u==0){
        printf("no klaro");
    }
    return 0;
}