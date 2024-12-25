#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt","r");
    char firstString[100];
    fgets(firstString,100,fptr);
    printf("%s",firstString);
    fclose(fptr);
    
    return 0;
}