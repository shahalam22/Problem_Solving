#include <stdio.h>
int main(){
    int i, j, n, count=1;
    scanf("%d", &n);
    int ara[n];
    
    for(i=0; i<n; i++){
            scanf("%d", &ara[i]);
    }
    for(i=0; i<n-1; i++){
        if(ara[i]!=ara[i+1]) count++;
    }
    printf("%d", count);
    return 0;
}