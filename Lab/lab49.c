#include<stdio.h>
void main()
{

    int mat[10][10],a[10];
    int i,j,n,m,q=9,s=0,s0;
    scanf("%d%d", &n,&m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            //scanf("%d", &mat[i][j]);
            mat[i][j]=q;
            q--;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        a[i]=mat[1][i];
        s+=a[i];
    }

    for (int i = 1; i <=n; i++)
    {
        s0=s;
        s=0;
        for (int j = 1; j <= m; j++) 
        {
            s+=mat[i][j];
        }
        if(s<s0){
        for (int j = 1; j <= m; j++) 
        {
            a[j]=mat[i][j];
        } 
        }
    }

    for(int i=1; i<=n; i++){
        printf("%d",a[i]);
    }
}