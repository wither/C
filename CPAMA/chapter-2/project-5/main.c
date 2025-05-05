#include <stdio.h>

int main(void) {
    float x;

    printf("3𝑥⁵ + 2𝑥⁴ - 5𝑥³ - 𝑥² + 7𝑥 - 6\n");
    
    printf("𝑥 = ");
    scanf("%f", &x);
    printf("  = %f\n", (3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6));

    return 0;
}
