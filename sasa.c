#include "stdio.h"
#include "string.h"
int main()

{
    char str1[80],str2[80];
    int p1=0,p2=0;
    fgets(str1,80,stdin);
    fgets(str2,80,stdin);
    for (int i = 0; i < strlen(str1); i++)
    {
        if(str1[i]=='p' || str1[i]=='P')p1++;
    }
    for (int i = 0; i < strlen(str2); i++)
    {
        if(str2[i]=='p' || str2[i]=='P')p2++;
    }
    if(p2>p1){
        printf("1.%s\n2.%s",str2,str1);
    }else{
        printf("1.%s\n2.%s",str1,str2);
    }
    
    
    return 0;

}