#include<stdio.h>
int main()
{
    float length, breadth, radius, area_rectangle, perimeter_rectangle, area_circle, circumference_circle;

    printf("Please input the length =");
    scanf("%f", &length);
    printf("Please input the breadth =");
    scanf("%f", &breadth);
    printf("Please input the radius =");
    scanf("%f", &radius);


    area_rectangle = length * breadth;
    perimeter_rectangle = 2 * (length + breadth);
    area_circle = 3.1416 * radius * radius;
    circumference_circle = 2 * 3.1416 * radius;


    printf("Are of Rectangle =%.2f \nPerimeter of Rectangle =%.2f \nArea of Circle= %.2f\nCircumference of Circle= %.2f\n", area_rectangle, perimeter_rectangle, area_circle, circumference_circle);


}
