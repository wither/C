#include <stdio.h>

int main(void) {
    float x;

    printf("((((3𝑥 + 2)𝑥 - 5)𝑥 - 1) + 7)𝑥 - 6\n");
    
    printf("𝑥 = ");
    scanf("%f", &x);
    printf("  = %f\n", (((((3*x + 2)*x - 5)*x - 1) + 7)*x - 6));

    return 0;
}
