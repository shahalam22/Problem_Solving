#include <stdio.h>
int main(){
    int n, k, w, i, sum=0;
    scanf("%d %d %d", &k, &n, &w);
    for(i=1; i<=w; i++){
        sum = sum + i*k;
    }
    if(sum<=n) printf("0");
    else printf("%d", sum-n);
    return 0;
}