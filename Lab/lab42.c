#include<stdio.h>
void main()
{

    int mat[10][10];
    int i,j,n,m,q=1,l,s,c;
    scanf("%d%d", &n,&m);
    scanf("%d%d", &l,&s);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            //scanf("%d", &mat[i][j]);
            mat[i][j]=q;
            q++;
        }
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

    for(int j=1; j<=m; j++){
        if(mat[l][j]<0)mat[l][j]==0;
        if(mat[s][j]<0)mat[s][j]==0;
        c=mat[l][j];
        mat[l][j]=mat[s][j];
        mat[s][j]=c;
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
}