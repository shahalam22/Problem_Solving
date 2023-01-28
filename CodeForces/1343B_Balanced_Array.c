#include <stdio.h>
int main(){
    int n, i, j, k;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]%4==0){
            printf("YES\n");
            for(j=2, k=1; k<=(a[i]/2); j=j+2, k++){
                printf("%d ", j);
            }
            for(j=(a[i]/2)+1, k=1; j<a[i]; j++, k=k+2){
                printf("%d ", k);
            }
            printf("%d\n", (k+(a[i]/2)));
        }
        else printf("NO\n");
    }
    return 0;
}