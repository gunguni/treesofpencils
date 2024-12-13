#include <stdio.h>

int main() {
    float radius = 6.0, perimeter, area;
    perimeter = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;
    printf("Perimeter of the Circle = %.6f inches\n", perimeter);
    printf("Area of the Circle = %.6f square inches\n", area);
    return 0;
}