#include <stdio.h>
int main(){
    int n, i, crime=0, assign=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>0){
            assign = assign + a[i];
        }
        else if(assign>0 && a[i]==-1) assign--;        
        else if(assign==0 && a[i]==-1) crime++;
    }
    printf("%d", crime);
    return 0;
}