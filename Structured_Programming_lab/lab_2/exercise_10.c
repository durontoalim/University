#include <stdio.h>
int main()
{

    double cgpa,mark;

    printf("Please Input your mark : ");
    scanf("%lf",&mark);

    if(mark>= 80 && mark <=100){
        printf("Your Cgpa : 4.00");
    }
    else if(mark>= 75 && mark <=79){
        printf("Your Cgpa : 3.75");
    }
    else if(mark>= 70 && mark <= 74){
        printf("Your Cgpa : 3.50");
    }
    else if(mark>= 65 && mark <=69){
        printf("Your Cgpa : 3.25");
    }
    else if(mark>= 60 && mark<= 64){
        printf("Your Cgpa : 3.00");
    }
    else if(mark>= 55 && mark<= 59){
        printf("Your Cgpa : 2.75");
    }
    else if(mark>= 50 && mark<= 54){
        printf("Your Cgpa : 2.50");
    }
    else if(mark>= 45 && mark<= 49){
        printf("Your Cgpa : 2.25");
    }else if(mark>= 40 && mark<= 44){
        printf("Your Cgpa : 2.00");
    }else if(mark < 40 && mark >= 0){
        printf("Your Cgpa : 0.00 ");
    }
    else{
        printf("Wrong Number. Please input correct Your number");
    }



    return 0;
}