#include <stdio.h>
int main(){
    int i, n, a=0, b=0;
    scanf("%d", &n);
    char ara[n+1];
    scanf("%s", ara);
    for(i=0; i<n; i++){
        if(ara[i]=='D') a++;
        else if(ara[i]=='A') b++;
    }
    if(a>b) printf("Drake");
    else if(b>a) printf("Anton");
    else printf("Friendship");
    return 0;
}