//grading system
#include <stdio.h>

int main() {
    int subject_1, subject_2, subject_3, average;
    
    
    printf("Enter marks for the subjects: ");
    scanf("%d%d%d", &subject_1, &subject_2, &subject_3);
    
    
    average = (subject_1 + subject_2 + subject_3) / 3;
    printf("Average is %d\n", average);
    
    
    if (average >= 70 && average <= 100) {
        printf("Grade: A\n");
    } else if (average >= 60 && average <= 69) {
        printf("Grade: B\n");
    } else if (average >= 50 && average <= 59) {
        printf("Grade: C\n");
    } else if (average >= 40 && average <= 49) {
        printf("Grade: D\n");
    } else if (average < 40) {
        printf("Grade: FAIL\n");
    } else {
        printf("Invalid average score\n"); 
    }
    
    return 0;
}

