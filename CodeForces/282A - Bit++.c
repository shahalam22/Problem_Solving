#include <stdio.h>
int main(){
    int i, n, j, count=0;
    scanf("%d", &n);
    char ara[n][3];
    
    for(i=0; i<n; i++){
        scanf("%s", ara[i]);
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            if(ara[i][j]=='+'){
                count++;
                break;
            }
            else if(ara[i][j]=='-'){
                count--;
                break;
            }
        }
    }
    
    printf("%d", count);
    return 0;
}