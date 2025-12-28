#include <stdio.h>

int main() {
    // Step 1: Declare a variable for balance and give it an initial value
    float balance = 1000.0;  // Example starting balance

    // Step 2: Ask the user to enter the withdrawal amount
    float withdrawal;
    printf("Enter withdrawal amount: ");
    
    // Step 3: Take the withdrawal amount as input using scanf
    scanf("%f", &withdrawal);

    // Step 4: Check if the entered amount is greater than zero
    if (withdrawal > 0) {
        // Step 5: Compare the amount with the balance
        if (withdrawal <= balance) {
            // Step 6: Allow the withdrawal
            balance -= withdrawal;  // Step 7: Subtract withdrawal from balance

            // Step 8: Print updated balance
            printf("Withdrawal successful!\n");
            printf("Updated balance: %.2f\n", balance);
        } else {
            // Step 9: Insufficient balance
            printf("Insufficient balance! Your current balance is %.2f\n", balance);
        }
    } else {
        // Step 10: Invalid amount
        printf("Invalid withdrawal amount! Please enter a positive value.\n");
    }

    return 0;
}