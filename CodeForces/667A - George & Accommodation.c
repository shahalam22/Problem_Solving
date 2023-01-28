#include <stdio.h>
int main(){
    int i, j, n, count=0;
    scanf("%d", &n);
    int ara[n][2];
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    for(i=0; i<n; i++){
        if(ara[i][1]-ara[i][0]>=2) count++;
    }
    printf("%d", count);
    return 0;
}