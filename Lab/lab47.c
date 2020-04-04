#include<stdio.h>
void main()
{

    int a[10][10],b[10][10],c[10][10],d[10][10];
    int i,j,n,m,q=1;
    scanf("%d%d", &n,&m);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            //scanf("%d", &mat[i][j]);
            a[i][j]=q;
            b[i][j]=q;
            c[i][j]=q;
            d[i][j]=0;
            q++;
        }
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
           for (q = 1; q <=n; q++)
                {
                    d[i][j]+=a[i][q]*b[q][j];
                }        
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            d[i][j]+=c[i][j];
        }
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
            printf("%d ", d[i][j]); 
            if (j==m)
            {
                printf("\n");
            }
        }
    }
}