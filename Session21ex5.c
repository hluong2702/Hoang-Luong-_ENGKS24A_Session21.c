#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("bt05.txt","w");
    int current;
    printf("Moi ban nhap so dong: ");
    scanf("%d",&current);
    getchar();

    for(int i = 0;i<= current;i++){
        char myText[100];
        printf("Moi ban nhap noi dung dong %d : ",i+1);
        fgets(myText,100,stdin);
        fprintf(fptr,"%s",myText);
    }
    fclose(fptr);
    fptr = fopen("bt05.txt","r");
    char string[100];
    printf("Du lieu nhap la : \n");
    for(int i =0;i<=current;i++){
        fgets(string,100,fptr);
        printf("%s",string);
    }
    fclose(fptr);

    return 0;

}