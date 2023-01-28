#include <stdio.h>

int main(){
    int i, n, j, d=0, a=0;
    scanf("%d", &n);
    int ara[n][2];
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    for(i=0; i<n; i++){
            a = a + ara[i][1]-ara[i][0];
            if(a>d) d=a;
    }
    printf("%d", d);
    return 0;
}