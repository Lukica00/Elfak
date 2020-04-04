#include<stdio.h>

void minmax(int* min, int* max, int* n, int n0){
    for(int i=0; i<n0; i++){
        if(n[i]<n[*min])(*min)=i;
        if(n[i]>n[*max])(*max)=i;
    }
}


int main()
{
    int min=0,max=0,n0,n[100];
    scanf("%d",&n0);
    for(int i=0; i<n0; i++)
    scanf("%d",&n[i]);
    minmax(&min,&max,n,n0);
    printf("%d%d",min,max);

return 0;
}