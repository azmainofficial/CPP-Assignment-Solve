#include <stdio.h>

int main() {
    float num1, num2, product, quotient;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);

    product = num1 * num2;
    quotient = num1 / num2;

    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
