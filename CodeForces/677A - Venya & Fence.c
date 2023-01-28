#include <stdio.h>
int main(){
    int n, h, i, count=0;
    scanf("%d %d", &n, &h);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++){
        if(ara[i]<=h){
            count = count + 1;
        }
        else{
            count = count + 2;
        }
    }
    printf("%d", count);
    return 0;
}