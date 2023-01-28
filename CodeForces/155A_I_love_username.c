#include <stdio.h>
int main(){
    int i, j, n, flag1, flag2, count=0;
    scanf("%d", &n);
    int a[n];        
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        flag1=0;
        flag2=0;
        for(j=0; j<i; j++){
            if(a[i]>=a[j]) flag1=1;
            if(a[i]<=a[j]) flag2=1;
        }
        if(flag1==0 || flag2==0) count++;
    }
    printf("%d", count-1);
    return 0;
}