#include<stdio.h>

void scanm(int mat[100][100], int m, int n, int q){
    scanf("%d%d", &m,&n);
    //int q=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //scanf("%d", &mat[i][j]);
            mat[i][j]=q;
            q++;
        }
    }
}

void printm(int a[100][100], int m, int n){
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; j++)
        {
            if(j==0)printf("ł ");
            printf("%d ",a[i][j]);
            if(j==n-1)printf("ł\n");
        }
        
    }
}

int suma(int a[100][100], int m){
    int s=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i>(m-j-1))s+=a[i][j];
        }
        
    }
    return s;
    
}


int main()
{
        int m=3,n=3,mat[100][100],at[100][100];
        scanm(mat,m,n,0);
        scanm(at,m,n,3);
        if(suma(mat,m)>suma(at,m))printm(mat,m,m);else
        {
            printm(at,m,m);
        }


    return 0;
}