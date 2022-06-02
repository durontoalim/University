#include <stdio.h>
int main()
{
    double distance,meters,feet,inches,centimeters;

    printf("Please input your distance km : ");
    scanf("%lf",&distance);

    meters = distance*1000;
    feet = distance*3280.84;
    inches = distance*39370.1;
    centimeters = distance*100000;

    printf("distance km to %.2lf  meters\n",meters);
    printf("distance km to %.2lf  feet\n",feet);
    printf("distance km to %.2lf  inches\n",inches);
    printf("distance km to %.2lf  centimeters\n",centimeters);








    return 0;
}