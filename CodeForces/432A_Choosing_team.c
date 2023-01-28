#include <stdio.h>
int main(){
    int n, k, i, count=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]<=(5-k)) count++;
    }
    printf("%d", count/3);
    return 0;
}