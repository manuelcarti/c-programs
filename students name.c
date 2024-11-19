//a C program that reads the names and marks of an n number of students
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char name[50];
    int marks, i, n;

    
    fptr = fopen("C:\\Users\\User\\Desktop\\student.txt", "a");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        printf("Enter name of student %d: ", i);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);

        
        fprintf(fptr, "Student %d: Name = %s, Marks = %d\n", i, name, marks);
    }

    fclose(fptr);
    printf("Data written successfully to students.txt.\n");
    return 0;
}

