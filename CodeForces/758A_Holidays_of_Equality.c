#include <stdio.h>
int main(){
    int n, i, j=0, max=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>max) max=a[i];
    }
    for(i=0; i<n; i++){
        j = j + (max - a[i]);
    }
    printf("%d", j);
    return 0;
}