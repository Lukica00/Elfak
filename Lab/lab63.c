#include<stdio.h>
#include <string.h>
int main()
{
    char s[80], a[80];
    int k,g,c=0,h;
    fgets(s,sizeof(s),stdin);
    scanf("%d", &k);
    for (int j = 0; j < strlen(s); j++){
        g=0;
        for (int i = 0; i < strlen(s); i++)
        {
            if(s[j]==s[i]){                
                    g++;               
            }
        }
        if(g==k){
            h=0;
                for (int k = 0; k <= c; k++)
                {
                    if(s[j]==a[k])h++;
                }
            if(h==0){
                printf("%c",s[j]);
                a[c]=s[j];
                c++;
            }
        }
    }
    
    return 0;
}