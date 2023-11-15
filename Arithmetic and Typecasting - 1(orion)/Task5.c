#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
  
    //The M_PI constant, which is specified in the <math.h> header file can be used to represent Pi in C programs.
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}

