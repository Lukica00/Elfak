#include "stdio.h"
#include "math.h"

int fja(int* b, int n0){
    int s=0;
    for(int i=0; i<n0; i++){
        if(b[i]==1)s+=pow(2,i);
    }
    return s;
}

int main()
{
    int n[100],n0=6,s;
    for(int i=0; i<n0; i++)
    scanf("%d",&n[i]);
    s=fja(n,n0);
    printf("%d",s);
    return 0;
}
