#include <stdio.h>
int main(){
    
    FILE *fp;
    char name[20]="Shah Alam";
    
    fp = fopen("text.txt", "w");
    
    if(fp == NULL){
        printf(" Can't open your desired file.\n");
    }
    else{
        printf("File has opened successfully.\n");
        
        fputs(name, fp);
        
        printf("File has written successfully.\n");
    }
    
    return 0;
} 