#include <stdio.h>

int main()
{

    double length, breadth, area, perimeter;

    scanf("%lf",&length);
    scanf("%lf",&perimeter);

    area = length * perimeter;
    perimeter = 2* (length + perimeter);

    if(area > perimeter){
        printf("the area of the triangle is greater than the perimeter of the triangle");
    }
    else{
        printf("the area of the triangle is Not greater than the perimeter of the triangle");
    }


    return 0;
}