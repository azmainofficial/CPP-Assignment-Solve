#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Square: %d\n", num * num);
    printf("Cube: %d\n", num * num * num);

    return 0;
}
