#include <stdio.h>

#define PI 3.1416

int main()
{
    double length,width,radius,perimeter,area_rectangle,area_circle,circumference_circle;

    printf("Please length of a rectangle : \n");
    scanf("%lf",&length);

    printf("Please breadth of a rectangle : \n");
    scanf("%lf",&width);

    printf("Please radius of a circle : \n");
    scanf("%lf",&radius);

    perimeter = length+width;
    area_rectangle = perimeter*2;

    printf("Perimeter of Rectengle : %.2lf\n",perimeter);
    printf("area of Rectengle : %.2lf\n",area_rectangle);

    circumference_circle = 2* PI * radius;
    area_circle = PI* (radius*radius);
    printf("area of circle : %.2lf\n",area_circle);
    printf("cercumference of circle : %.2lf\n",circumference_circle);


    return 0;
}