#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt","r");
    char firts = fgetc(fptr);
    printf("Ki tu dau tien trong file %c",firts);
    return 0;
}