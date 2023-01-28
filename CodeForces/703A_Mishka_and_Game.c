#include <stdio.h>
int main(){
    int n, i, j, mis=0, chri=0;
    scanf("%d", &n);
    int a[n][2];
    
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        if(a[i][0]>a[i][1]) mis++;
        else if(a[i][0]<a[i][1]) chri++;
    }
    if(mis>chri) printf("Mishka");
    else if(mis<chri) printf("Chris");
    else printf("Friendship is magic!^^");
    return 0;
}