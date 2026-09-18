// Author: Dnyaneshwar Chandrawanshi
// Department: AI & DS, DIEMS (Batch 2026-2030)
// Project: Hostel Mess & Expense Splitter ( lightweight CLI)
// working : helps to split the expenses among roomates and friends.

#include <stdio.h>

int main() {
    int choice;
    int num_roommates;
    float total_bill, per_person_share;
    char payer_name[50];

    printf("ccccccccccccccccccccccccccccccccccccccccc\n");
    printf("   HOSTEL MESS & EXPENSE SPLITTER  \n");
    printf("ccccccccccccccccccccccccccccccccccccccccc\n");
    printf("1. Split a New Bill Equally\n");
    printf("2. Exit\n");
    printf("-----------------------------------------\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nEnter who paid the bill (single word): ");
            scanf("%s", payer_name);

            printf("Enter total bill amount (in Rs): ");
            scanf("%f", &total_bill);

            printf("Enter number of roommates splitting: ");
            scanf("%d", &num_roommates);

            if (num_roommates <= 0) {
                printf("\n[Error] Roommates count must be at least 1.\n");
            } else {
                per_person_share = total_bill / num_roommates;

                printf("\n-----------------------------------------\n");
                printf("             EXPENSE SUMMARY             \n");
                printf("-----------------------------------------\n");
                printf("Total Bill Paid : Rs %.2f by %s\n", total_bill, payer_name);
                printf("Total Members   : %d\n", num_roommates);
                printf("Each Person Owes: Rs %.2f\n", per_person_share);
                printf("-----------------------------------------\n");
                printf("Action: Each roommate must pay Rs %.2f to %s.\n", per_person_share, payer_name);
                printf("=========================================\n");
            }
            break;

        case 2:
            printf("\nExiting. Keep tracking your expenses!\n");
            break;

        default:
            printf("\n[Error] Invalid choice! Run the program again.\n");
    }

    return 0;
}
