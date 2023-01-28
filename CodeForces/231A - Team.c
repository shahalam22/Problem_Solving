#include <stdio.h>
int main(){
    int i, j, n, count, sum=0;
    scanf("%d", &n);
    int ara[n][3];
    
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        count=0;
        for(j=0; j<3; j++){
            if(ara[i][j]==1) count++;
        }
        if(count>=2) sum++;
    }
    
    printf("%d", sum);
    return 0;
}