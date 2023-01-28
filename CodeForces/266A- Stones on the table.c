#include <stdio.h>
int main(){
    int i, sum=0, n;
    scanf("%d", &n);
    char ara[n];
    int num[n];
    scanf("%s", ara);
    
    for(i=0; i<n; i++){
        num[i]=0;
    }
    for(i=0; i<n; i++){
        if(ara[i]==ara[i+1]) num[i+1]=1;
    }
    for(i=0; i<n; i++){
        sum = sum + num[i];
    }
    printf("%d", sum);
    return 0;
}