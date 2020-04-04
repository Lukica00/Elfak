#include<stdio.h>
void main()
{

    int mat[10][10];
    int i,j,n,m,q=1,a,max;
    scanf("%d%d", &n,&m);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            //scanf("%d", &mat[i][j]);
            mat[i][j]=q;
            q++;
        }
    }

    for (i = 1; i <= n; i++)
    {
        a=mat[i][m];
        for (j = m; j > i+1; j--)
        {
            mat[i][j]=mat[i][j-1];
        }
        mat[i][i+1]=a;
    }

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
            printf("%d ", mat[i][j]); 
            if (j==m)
            {
                printf("\n");
            }
        }
    }
    max=mat[i][j];
    for (i = n; i >0; i--)
    {
        for (j = i-1; j >0; j--) 
        {
            if (mat[i][j]>max)
            {
                max=mat[i][j];
            }
        }
    }
    printf("%d",max);
}