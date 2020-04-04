#include<stdio.h>
void main()
{

    int mat[10][10],tam[10][10],pro[10][10];
    int i,j,n,m,r=1,p,q;
    scanf("%d%d", &n,&m);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            //scanf("%d", &mat[i][j]);
            pro[i][j]=0;
            mat[i][j]=r;
            r++;
        }
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
            tam[j][i]=mat[i][j];
            printf("%d ", mat[i][j]); 
            if (j==m)
            {
                printf("\n");
            }
        }
    }
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
            printf("%d ", tam[i][j]); 
            if (j==m)
            {
                printf("\n");
            }
        }
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
           for (q = 1; q <=n; q++)
                {
                    pro[i][j]+=mat[i][q]*tam[q][j];
                }        
        }
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
            printf("%d ", pro[i][j]); 
            if (j==m)
            {
                printf("\n");
            }
        }
    }


}