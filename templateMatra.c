#include<stdio.h>

void scanm(int mat[100][100], int* m, int* n){
    scanf("%d%d", m,n);
    int q=0;
    for (int i = 0; i < (*n); i++)
    {
        for (int j = 0; j < (*m); j++)
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

void tran(int a[100][100], int b[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[j][i]=a[i][j];
        }
        
    }
    
}


int main()
{   
    int a[100][100],b[100][100],m,n;
    scanm(a,&m,&n);
    printm(a,m,n);
    tran(a,b,m,n);
    printm(b,n,m);

    return 0;
}