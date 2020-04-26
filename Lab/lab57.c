#include<stdio.h>

void printm(int a[100][100], int m, int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++)
        {
            if(j==0)printf("|");
            printf("%d",a[i][j]);
            if(j==m-1)printf("|\n");
        }
        
    }
}



int main()
{
    int m,n,q=0,mat[100][100];
    scanf("%d%d", &m,&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //scanf("%d", &mat[i][j]);
            mat[i][j]=q;
            q++;
        }
    }
    printm(mat,m,n);
    return 0;
}