#include <stdio.h>
#include <math.h>

int main() {
    // Define coefficients of quadratic equation
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    float discriminant = b * b - 4 * a * c;

    // Calculate roots based on discriminant
    if (discriminant > 0) {
        // Real and different roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: \n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } else if (discriminant == 0) {
        // Real and same root
        float root1 = -b / (2 * a);
        printf("Roots are real and same: \n");
        printf("Root 1 = %f\n", root1);
    } else{
        printf("Roots are complex");
    }

    return 0;
}

