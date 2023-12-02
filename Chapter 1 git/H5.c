#include <stdio.h>

int main() {
    float length, breadth, radius;
    float rectangleArea, rectanglePerimeter;
    float circleArea, circleCircumference;

    printf("length and breadth");
    scanf("%f %f", &length, &breadth);

    printf("radius: ");
    scanf("%f", &radius);

    rectangleArea = length * breadth;
    rectanglePerimeter = 2 * (length + breadth);

    circleArea = 3.141592 * radius * radius;
    circleCircumference = 2 * 3.141592 * radius;

    printf("Rectangle Area: %.2f\n", rectangleArea);
    printf("Rectangle Perimeter: %.2f\n", rectanglePerimeter);
    printf("Circle Area: %.2f\n", circleArea);
    printf("Circle Circumference: %.2f\n", circleCircumference);

    return 0;
}

