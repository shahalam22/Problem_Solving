#include <stdio.h>
int main(){
    long int n, i, j;
    scanf("%d", &n);
    long long a[n], b[n];
    for(i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]==0 || a[i]==1 || a[i]==2) b[i] = 0;
        else if(a[i]%2==0){
            b[i]=(a[i]-2)/2;
        }
        else if(a[i]%2==1){
            b[i]=(a[i]-1)/2;
        }
    }
    for(i=0; i<n; i++){
        printf("%lld\n", b[i]);
    }
    
    return 0;
}