#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;

    for(int i=100 ; i <= 200 ; i++){
        if(i%9 == 0){
            sum += i;
            printf("%d ",i);
        }
    }

    printf("\nSum : %d\n",sum);
    
    
    return 0;
}