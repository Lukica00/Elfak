#include "stdio.h"

int main()

{
    int n,k,a[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < k; i++)
    {
        int b=a[0];
        for (int j = 0; j < n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=b;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
       return 0;

}