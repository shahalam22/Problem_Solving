#include <stdio.h>
int main(){
    int i, j, n;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        b[a[i]-1]=i+1;
    }
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    return 0;
}