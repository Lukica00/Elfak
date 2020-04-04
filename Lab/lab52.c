#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    zamena(&a,&b);
    zamena(&b,&c);
    printf("%d%d%d",a,b,c);
}

void zamena(int* a, int* b){
    int c;
    c=(*a);
    (*a)=(*b);
    (*b)=c;
}