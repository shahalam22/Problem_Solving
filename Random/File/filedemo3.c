#include <stdio.h>
int main(){
    
    FILE *fp;
    char name[20];
    
    fp = fopen("text.txt", "w");
    
    if(fp == NULL){
        printf(" Can't open your desired file.\n");
    }
    else{
        printf("File has opened successfully.\n");
        printf("Enter your first name: \n");
        gets(name);
        
        fputs(name, fp);
        
        printf("File has written successfully.\n");
    }
    
    return 0;
} 