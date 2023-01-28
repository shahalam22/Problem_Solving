#include <stdio.h>
#include <string.h>
int main()
{
    int i, len, j, sum=0;
    char ara[100];
    scanf("%s", ara);
    len = strlen(ara);
    int num[len];
    for(i=0; i<len; i++){
        num[i]=1;
    }
    
    for (i = 0; i < len; i++)
    {
        for (j = i+1; j < len; j++)
        {
            if (ara[i] == ara[j])
                num[j]=0;
            else
                continue;
        }
    }
    
    for(i=0; i<len; i++){
        sum=sum+num[i];
    }
    
    if (sum%2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");    
        
    return 0;
}