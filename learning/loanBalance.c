#include <stdio.h>

int main(void) {
    
    float loan = 0.0f, interest = 0.0f, payment = 0.0f;
    
    printf("Enter the amount of loan: £");
    scanf("%f", &loan);

    printf("Enter interest interest: %s", "%");
    scanf("%f", &interest);

    printf("Enter monthly payment: £");
    scanf("%f", &payment);

    loan = loan - payment + (loan * interest / 100.0 / 12.0);
    printf("\nBalance after first payment: %.2f\n", loan);

    loan = loan - payment + (loan * interest / 100.0 / 12.0);
    printf("Balance after second payment: %.2f\n", loan);
    
    loan = loan - payment + (loan * interest / 100.0 / 12.0);
    printf("Balance after third payment: %.2f\n", loan);

    return 0;
}
