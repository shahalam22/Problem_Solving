#include <stdio.h>
int main(){
    int n, k, i, count=0;
    int j[50];
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", &j[i]);
    }
    for(i=0; i<k; i++){
        if(j[i]!=0) count++;
    }
    for(i=k; i<n; i++){
        if(j[i]>=j[k-1] && j[i]!=0) count++;
    }
    
    printf("%d", count);
    return 0;
    
}