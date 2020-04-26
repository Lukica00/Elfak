#include<stdio.h>

void fja(int a[100][2], int n){
    int g=n/2;
    if(a[g][0]*a[g][1]*a[g-1][0]<a[g][0]*a[g][1]*a[g+1][1]){
        //printf("%d%d sa %d%d \n",a[g][0],a[g][1],a[g-1][0],a[g-1][1]);
        printf("%d%d\n",g,g-1);
        a[g-1][1]=a[g][1];
        for (int i=g; i<n; i++){
            a[i][0]=a[i+1][0];
            a[i][1]=a[i+1][1];
        }
        n--;
    }else{
        //printf("%d%d sa %d%d\n",a[g+1][0],a[g+1][1],a[g][0],a[g][1]);
        printf("%d%d\n",g,g+1);
        a[g][1]=a[g+1][1];
        for (int i=g+1; i<n; i++){
            a[i][0]=a[i+1][0];
            a[i][1]=a[i+1][1];
        }
    n--;
    }
    if(n>2)fja(a,n);
}

int main(){
    int a[100][2],n;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
    }
    fja(a,n);
}
