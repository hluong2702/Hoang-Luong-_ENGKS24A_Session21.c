#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Sinhvien{
    int id;
    char name[50];
    int age;
};
int main(){
    struct Sinhvien sinhvien[100]; 
    int count = 0;
    FILE *file;                   
    file = fopen("students.txt", "r");
    for (count = 0; count < 100; count++) {
        if (fscanf(file, "%d, %s, %d\n", &sinhvien[count].id, sinhvien[count].name, &sinhvien[count].age) != 3) {
            break;
        }
    }
    fclose(file);
    printf("Danh sách sinh viên đọc từ file:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Tên: %s, Tuổi: %d\n", sinhvien[i].id, sinhvien[i].name, sinhvien[i].age);
    }
    return 0;
}