#include <stdio.h>
int main(){
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            if(i%4==0){
                if(j==1) printf("#");
                else printf(".");
            }
            else if(i%2==0){
                if(j==m) printf("#");
                else printf(".");
            }
            else printf("#");            
        }
        printf("\n");
    }
    return 0;
}