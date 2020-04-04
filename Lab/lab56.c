#include<stdio.h>
void sortadzija(int* a, int n, int s){
    int e=0;
    while(e==0){
        e=1;
        for (int i = 0; i < n-1; i++)
        {
            if(s==0 && a[i]>a[i+1]){
                int c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
                e=0;
            }
            if(s==1 && a[i]<a[i+1]){
                int c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
                e=0;
            }
        }
        
    }
}


int main()
{
    int n,a[100],s;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //scanf("%d",&s);
    s=0;
    sortadzija(a,n,s);
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    //scanf("%d",&s);
    s=1;
    sortadzija(a,n,s);
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}