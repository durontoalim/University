#include <stdio.h>


int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    int sum = a+b+c;

    if(sum == 180){
        printf("Its a Triangle\n");
    }
    else{
        printf("Not triangle\n");
    }


    return 0;
}