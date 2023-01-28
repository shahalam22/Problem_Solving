#include <stdio.h>

int main(){
    int i, a, b, c, d, yr1, yr2;
    scanf("%d", &yr1);
    for(i=1; ; i++){
        yr2=yr1+i;
        a=yr2%10;
        yr2=yr2/10;
        b=yr2%10;
        yr2=yr2/10;
        c=yr2%10;
        yr2=yr2/10;
        d=yr2%10;
        
        if(a==b || b==c || c==d || a==c || a==d || b==d || c==d) continue;
        else{
            printf("%d", yr1+i);
            break;
        }
    }
    return 0;
}