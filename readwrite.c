#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // File write koribo
    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    // User pora data lobo
    printf("Enter name and age: ");
    scanf("%s %d", name, &age);

    // File't write koribo
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    // File pora read koribo
    fp = fopen("student.txt", "r");
    printf("\nReading from file:\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}