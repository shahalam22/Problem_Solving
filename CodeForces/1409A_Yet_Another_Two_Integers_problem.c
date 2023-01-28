#include <stdio.h>
int main(){
    int n, i, j, c, b;;
    scanf("%d", &n);
    int a[n][2], g[n];
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        if(a[i][0]==a[i][1]) g[i]=0;
        else if(a[i][0]>a[i][1]){
            b = a[i][0]-a[i][1];
            if(b%10==0) g[i]=b/10;
            else g[i]=(b/10)+1;
        }
        else if(a[i][0]<a[i][1]){
            b = a[i][1]-a[i][0];
            if(b%10==0) g[i]=b/10;
            else g[i]=(b/10)+1;
        }
    }
    for(i=0; i<n; i++){
        printf("%d\n", g[i]);
    }
    return 0;
}