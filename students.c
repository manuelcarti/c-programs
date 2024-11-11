//a C program that reads the names and marks of an n number of students
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char name[50];
    int marks, k, n;

    
    fptr = fopen("C:\\Users\\User\\Desktop\\New folder (2)students.txt", "a");
    if (fptr == NULL) {
        printf("Error this file can't open.\n");
        exit(1);
    }

    // Prompt user for number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Loop to read name and marks of n students and append them to the file
    for (k = 1; k <= n; k++) {
        printf("Enter name of student %d: ", k);
        scanf("%s", name);
        printf("Enter marks of student %d: ", k);
        scanf("%d", &marks);

        // Append the name and marks to the file
        fprintf(fptr, "Student %d: Name = %s, Marks = %d\n", k, name, marks);
    }

    fclose(fptr);
    printf("Data written successfully to students.txt.\n");
    return 0;
}

