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

void printm(int a[2][3], int m, int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++)
        {
            if(j==0)printf("|");
            printf("%d",a[i][j]);
            if(j==m-1)printf("|\n");
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
    int a[2][3]={1,2,3,4,5,6},b[100][100],m=3,n=2;
    printm(a,m,n);
    return 0;
}