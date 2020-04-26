#include "stdio.h"

int main()

{
    int n,a[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]%3==2){
            for (int j = n; j > i+1; j--)
            {
                a[j]=a[j-1];
            }
            a[i+1]=0;
            n++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
       return 0;

}