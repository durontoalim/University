#include <stdio.h>
int main()
{
    float unit;
    scanf("%f",&unit);
        if(unit <=200){
            float sum = unit*0.50;
            printf("%.2f TAKA\n",sum);
        }else if(unit <=400){
            float sum = 100 + (unit-200)*0.45;
            printf("%.2f TAKA\n",sum);
        }else if(unit <=600){
            float sum = 270 + (unit-400)*0.75;
            printf("%.2f TAKA\n",sum);
        }else {
            float sum = 380 + (unit-600)*1.20;
            printf("%.2f TAKA\n",sum);
        }
        
    return 0;
}