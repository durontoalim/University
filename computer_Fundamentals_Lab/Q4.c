#include <stdio.h>

#define n 0<=n<=100

int main()
{
    int marks;
    scanf("%d",&marks);

    if(marks>=45 && marks<=49){
        printf("2.25");
    }else if(marks>=50 && marks<=54){
        printf("2.5");
    }else if(marks>=55 && marks<=59){
        printf("2.75");
    }else if(marks>=60 && marks<=64){
        printf("3");
    }else if(marks>=65 && marks<=69){
        printf("3.25");
    }else if(marks>=70 && marks<=74){
        printf("3.5");
    }else if(marks>=75 && marks<=79){
        printf("3.75");
    }else if(marks>=80 && marks<=100){
        printf("4.00");
    }
    return 0;
}
