#include<stdio.h>
#include<math.h>

float nigga(float x, float e){
    float nig=1,ex=1,nig0,nig1=1;
    int j=1;
    while(ex>e){
        nig0=nig1;
        nig*=x/j;
        nig1+=nig;
        j++;
        ex=abs(nig1-nig0);
    }
    return nig1;
}


int main()
{
    float x,e;
    scanf("%f%f",&x,&e);
    printf("%f",nigga(x,e));

    return 0;
}