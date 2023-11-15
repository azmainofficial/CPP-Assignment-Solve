#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
