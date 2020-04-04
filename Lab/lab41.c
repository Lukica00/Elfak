#include<stdio.h>
void main()
{

    int mat[10][10];
    int i,j,n,m,q=1,s;
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

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= m; j++) 
        {
            printf("%d ", mat[i][j]); 
            if (j==m)
            {
                printf("\n");
            }
            if(i>j)s+=mat[i][j];
        }
    }
    printf("%d",s);
}