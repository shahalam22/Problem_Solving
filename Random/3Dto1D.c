#include <stdio.h>
int main(){
    int a[5][6][2]={{{1,2},{3,4},{5,6},{7,8},{9,10},{11,12}},{{13,14},{15,16},{17,18},{19,20},{21,22},{23,24}},{{25,26},{27,28},{29,30},{31,32},{33,34},{35,36}},{{37,38},{39,40},{41,42},{43,44},{45,46},{47,48}},{{49,50},{51,52},{53,54},{55,56},{57,58},{59,60}}};
    int i, j, k, b[60];
    
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            for(k=0; k<2; k++){
                printf("%d  ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    
    printf("\n\n");
    
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            for(k=0; k<2; k++){
                b[k+j*2+i*12]=a[i][j][k];
            }
        }
    }
    
    for(i=0; i<60; i++){
        printf("%d\n", b[i]);
    }
    
    return 0;
}





