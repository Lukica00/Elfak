#include "stdio.h"

int main(){
    int a[10], b, n, k;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d",&b);
        for (int j = 0; j < n-1; j++)
        {
            if(b>=a[j]&&b<a[j+1]){
                for (int m = n; m > j; m--)
                {
                    a[m+1]=a[m];
                }
                n++;
                a[j+1]=b;
                break;
            }
        }   
        if(b>=a[n-1]){
            a[n]=b;
            n++;
            }
        if(b<a[0]){
            for (int m = n; m >= 0; m--)
            {
                a[m+1]=a[m];
            }
            a[0]=b; 
            n++;
        }
    }
    for (int i = 0; i < n; i++)
    {    
        printf("%d",a[i]);
    }   
}