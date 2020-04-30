#include "stdio.h"

int main(){
    int a=0,i=0;
    float s=0;
    FILE *broj = fopen("brojevi.txt", "r+");
    while (!feof(broj))
    {
        fscanf(broj, "%d", &a);
        s+=a;
        i++;
    }
    s=s/i;
    fprintf(broj,"%.2f",s);
    fclose(broj);
}