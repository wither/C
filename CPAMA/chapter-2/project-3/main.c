// Modern C S2.8 sphere volume project
// 03/05/2025

#include <stdio.h>

#define PI 3.14159265358979323846f

int main(void) {
    float r = 0;
   
    printf("Radius (meters): ");
    scanf("%f", &r);

    printf("Volume: %.2fm^3\n", (4.0f / 3.0f * PI * (r*r*r)));
    return 0;
}
