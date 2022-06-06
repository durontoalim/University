#include <stdio.h>
int main()
{
    int N;
    N = 10;

    while(N--){
        double total_hour, overtime, office_hour=40;
        printf("Please full Hour work : ");
        scanf("%lf",&total_hour);

        if(total_hour > office_hour ){
            overtime = total_hour - office_hour;
            printf("Your overtime sallary %.2lf Taka\n",overtime*12.00);
        }
        else{
            printf("No overtime . No Extra sallary\n");
        }
        

    }
    return 0;
}