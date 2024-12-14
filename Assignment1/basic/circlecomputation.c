#include <stdio.h>

int main() {
    float radius = 6.0, perimeter, area;     //having all in float types.
    perimeter = 2 * 3.1416 * radius;         // 2*pi*r     : PARAMETER
    area = 3.1416 * radius * radius;         // pi * r'sqr : AREA
    printf("Perimeter of the Circle = %.6f inches\n", perimeter);
    printf("Area of the Circle = %.6f square inches\n", area);
    return 0;
}
