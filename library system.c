//library system
#include <stdio.h>


int calculateFine(int daysOverdue) {
    if (daysOverdue <= 7) {
        return 20 * daysOverdue;
    } else if (daysOverdue <= 14) {
        return 50 * daysOverdue;
    } else {
        return 100 * daysOverdue;
    }
}

int main() {
    int bookID;
    int dueDate, returnDate;
    int daysOverdue;
    int fineAmount, fineRate;

    
    printf("Enter book ID: ");
    scanf("%d", &bookID);

    printf("Enter due date : ");
    scanf("%d", &dueDate);

    printf("Enter return date : ");
    scanf("%d", &returnDate);

    
    daysOverdue = returnDate - dueDate;

    if (daysOverdue > 0) {
        
        fineAmount = calculateFine(daysOverdue);

        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
    } else {
        fineAmount = 0;
        fineRate = 0;
        daysOverdue = 0;  
    }

   
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
