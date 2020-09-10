#include <stdio.h>
#include <stdlib.h>
/*
3. Zadatak: Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati strukturnu funkciju
koja niz prenet preko parametara funkcije modifikuje tako što izbacuje sve elemente od elementa sa indeksom p do elementa sa indeksom q,
uključujući i te elemente. Niz, dužinu niza i vrednosti p i q preneti preko parametara. Ukoliko je izbacivanje uspešno,
funkcija treba da vrati vrednost 1. Ukoliko su vrednosti p i q van opsega niza, funkcija ne treba da modifikuje niz i u tom
slučaju vraća 0. U glavnom proogramu uneti dva niza AN i BM i iz niza AN izbaciti sve elemete od p=B[i] do q=B[i+1] za i=0,2,4, …
sve dok su granice p i q ispravno zadate. Primer:
A={3,5,6,4,3,1,9,8,0}, B={2,4,3,-1,3,5}-> A'={3,5,1,9,8,0}*/

int Izbaci(int x[],int N,int p,int q,int* Nn)
{
    int i,j,u,N1;

    N1=N;

    if (p>=0 && q<N && p<=q)
    {
        for(i=q;i>=p;i--)
            {
            for(j=i;j<N-1;j++) x[j]=x[j+1];
            N--;
            }
    }

    if (N1>N) u=1;

    *Nn=N;

    return u;
}

int main()
{
    int Na,Na1,Nb,a[50],b[50],i,u,p,q;

    printf("Unesite duzinu niza A:\n");
    scanf("%d",&Na);

    for(i=0;i<Na;i++) scanf("%d",&a[i]);

    printf("Unesite duzinu niza B:\n");
    scanf("%d",&Nb);

    for(i=0;i<Nb;i++) scanf("%d",&b[i]);

    for(i=0;i<Nb;i=i+2)
    {
        p=b[i];
        q=b[i+1];
        u=Izbaci(a,Na,p,q,&Na1);
        Na=Na1;
    }

    for(i=0;i<Na;i++) printf("%d ",a[i]);

    printf("\n");

    printf("Uspeh je : %d ",u);
}