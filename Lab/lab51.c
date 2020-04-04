#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=2; i<=n; i++)if(prost(i)==1)printf("%d",i);
}

int prost(int a){
    int e=1;
    for(int i=2; i<=a/2; i++){
        if(a%i==0)e=0;
    }
    if(e==1)return 1; else
    {
         return 0;
    }
    
}