#include <stdio.h>
int main(){
    int k, r, i;
    scanf("%d", &k);
    scanf("%d", &r);
    for(i=1; ; i++){
        if(k*i%10==r || k*i%10==0) break;
    }
    printf("%d", i);
    return 0;
}