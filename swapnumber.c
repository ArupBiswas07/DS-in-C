#include <stdio.h>

int main() {
    float radius, area;
    
    // Radius user pora lobo
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Area formula = πr²
    area = 3.1416 * radius * radius;

    // Result print
    printf("Area of circle = %.2f\n", area);

    return 0;
}
