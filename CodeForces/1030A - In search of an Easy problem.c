#include <stdio.h>
int main(){
    int n, i, flag=0;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++){
        if(ara[i]==1){
            flag=1;
            break;
        }
    }
    if(flag==1) printf("HARD");
    else printf("EASY");
    
    return 0;
}