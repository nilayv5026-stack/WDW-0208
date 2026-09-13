#include <stdio.h>
#include <stdbool.h>

int main() {
    double balance = 1000;
    int choice;
    double amount;

    printf("============================\n");
    printf("     MINI BANKING SYSTEM\n");
    printf("============================\n");

    while (true) {
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nYour balance is: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: Rs. ");
                scanf("%lf", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful!");
                    printf("\nNew balance: Rs. %.2f\n", balance);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: Rs. ");
                scanf("%lf", &amount);

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful!");
                    printf("\nRemaining balance: Rs. %.2f\n", balance);
                } else {
                    printf("Insufficient balance or invalid amount!\n");
                }
                break;

            case 4:
                printf("\nThank you for using the Mini Banking System!\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}