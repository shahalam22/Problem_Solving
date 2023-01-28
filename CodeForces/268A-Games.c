#include <stdio.h>

int main(){
    int n, i, j, count = 0;
    scanf("%d", &n);
    int ara[n][2];
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(ara[i][0]==ara[j][1]){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}