#include <stdio.h>
int main(){
    int i, j, ara[25];
    for(i=0; i<25; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<24; i++){
        if(ara[i]==1) break;
    }
    if(i==0 || i==4 || i==20 || i==24) printf("4");
    else if(i==1 || i==3 || i==5 || i==9 || i==15 || i==19 || i==21 || i==23) printf("3");
    else if(i==2 || i==10 || i==14 || i==22 || i==6 || i==8 || i==16 || i==18) printf("2");
    else if(i==7 || i==11 || i==13 || i==17) printf("1");
    else printf("0");
    return 0;
}
