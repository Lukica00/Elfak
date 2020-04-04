#include<stdio.h>

int del(int b, int* n){
    int j=0;
    for(int i=1; i<=b; i++){
        if(b%i==0){
            n[j]=i;
            j++;
            }
    }
    return j;
}

int main()
{
    int b, n[100];
    scanf("%d",&b);
    for(int i=0; i<del(b,n); i++)printf("%d",n[i]);
return 0;
}