#include<stdio.h>
void main()
{

    int mat[10][10];
    int i,j,n,m,q=1,e=1;
    scanf("%d%d", &n,&m);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &mat[i][j]);
            //mat[i][j]=q;
            q++;
        }
    }

    for (i = 1; i <= n; i++)
    {
        e=1;
        while(e==1){
            e=0;
        for (j = 1; j < m; j++)
        {
            if(mat[i][j]>mat[i][j+1]){
                int a=mat[i][j];
                mat[i][j]=mat[i][j+1];
                mat[i][j+1]=a;
                e=1;
            }            
        }
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
}