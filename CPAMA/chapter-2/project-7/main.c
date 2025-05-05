#include <stdio.h>

int main(void) {
    int amount;

    printf("Enter a dollar amount: $");
    scanf("%i", &amount);
   
    int twentyBills = (amount / 20);
    int total = (amount - (20 * twentyBills));
    printf("\n$20 bills: %i\n", twentyBills);

    int tenBills = (total / 10);
    total = total - (10 * tenBills);
    printf("$10 bills: %i\n", tenBills);
    
    int fiveBills = (total / 5);
    total = total - (5 * fiveBills);
    printf("$5 bills: %i\n", fiveBills);
    
    int oneBills = (total / 1);
    total = total - (1 * oneBills);
    printf("$1 bills: %i\n", oneBills);
    
    return 0;
}
