#include <stdio.h>
int main(){
    int n, k, i, sum;
    scanf("%d", &n);
    scanf("%d", &k);
    sum = k;
    for(i=1;; i++){
        sum = sum + (i*5);
        if(sum>240 || i>n) break;
    }
    printf("%d", i-1);
    return 0;
}