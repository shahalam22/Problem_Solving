#include <stdio.h>

int main(){
    
    FILE *fp;
    
    fp = fopen("text.txt", "w");
    
    if(fp == NULL){
        printf("Can't find that file you wanted.\n");
    }
    else{
        printf("File has been opened.\n");
        fclose(fp);
    }
    
    return 0;
}