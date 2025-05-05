// Modern C S2.8 tax project
// 03/05/2025

#include <stdio.h>

#define TAX 0.05f

int main(void) {
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", (amount + (amount * TAX)));
}
