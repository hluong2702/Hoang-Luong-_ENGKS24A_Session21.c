#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sinhvien {
    int id;
    char name[50];
    int age;
};

int main() {
    int n; 
    FILE *file;
    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);
    struct Sinhvien *sinhvien = (struct Sinhvien *)malloc(n * sizeof(struct Sinhvien));
    for (int i = 0; i < n; i++) {
        printf("\nNhập thông tin cho sinh viên thứ %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &sinhvien[i].id);
        printf("Tên: ");
        getchar();
        fgets(sinhvien[i].name, 50, stdin);
        printf("Tuổi: ");
        scanf("%d", &sinhvien[i].age);
    }
    file = fopen("students.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d, %s, %d\n", sinhvien[i].id, sinhvien[i].name,sinhvien[i].age);
    }
    fclose(file);

    return 0;
}
