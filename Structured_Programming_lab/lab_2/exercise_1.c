#include <stdio.h>

int main()
{
    double cost_price, selling_price, profit , loss;

    printf("Please input the cost Price : ");
    scanf("%lf",&cost_price);

    printf("Please input the selling Price : ");
    scanf("%lf",&selling_price);

    profit = selling_price - cost_price;
    loss = cost_price - selling_price;

    if(cost_price>selling_price){
        printf("Loss : %.2lf\n",loss);
    }
    else {
        printf("Profit : %.2lf\n",profit );
    }

    return 0;
}