#include <stdio.h>
#include <stdbool.h>

int main()
{


    double quiz,assignment,presentation,mid,final,attendence,cgpa,mark;

    bool t = true;

    while(t){

        printf("Please Input your quiz 0-15 : ");
        scanf("%lf",&quiz);

        if(quiz < 0.00  || quiz > 15.00){
            printf("Invalid input . \n");
        }
        if( quiz >= 0.00 && quiz <= 15.00 ){
            t = false;
        }
    }

     t = true;

    while(t){
        printf("Please Input your assignment 0 - 7 : ");
        scanf("%lf",&assignment);

        if(assignment < 0.00  || assignment > 7.00){
            printf("Invalid input . \n");
        }
        if( assignment >= 0.00 && assignment <= 7.00 ){
            t = false;
        }
    }

     t = true;

    while(t){
        printf("Please Input your presentation 0 - 8 : ");
        scanf("%lf",&presentation);

        if(presentation < 0.00  || presentation > 8.00){
            printf("Invalid input . \n");
        }
        if( presentation >= 0.00 && presentation <= 8.00 ){
            t = false;
        }

    }

     t = true;

    while(t){
        printf("Please Input your mid 0 - 25 : ");
        scanf("%lf",&mid);

        if( mid < 0.00  ||  mid > 25.00){
            printf("Invalid input . \n");
        }
        if(  mid >= 0.00 &&  mid <= 25.00 ){
            t = false;
        }
    }

     t = true;

    while(t){
        printf("Please Input your final 0 - 40 : ");
        scanf("%lf",&final);

        if(final < 0.00  || final > 40.00){
            printf("Invalid input . \n");
        }
        if( final >= 0.00 && final <= 40.00 ){
            t = false;
        }
    }

     t = true;

    while(t){

        printf("Please Input your attendence 0 - 5 : ");
        scanf("%lf",&attendence);

        if(attendence < 0.00  || attendence > 5.00){
            printf("Invalid input . \n");
        }
        if( attendence >= 0.00 && attendence <= 5.00 ){
            t = false;
        }
    }

    mark = quiz + assignment + presentation + mid + final + attendence;

    printf("\n\n");


    if(mark>= 80 && mark <=100){
        printf("Your Cgpa : 4.00\n");
    }
    else if(mark>= 75 && mark <=79){
        printf("Your Cgpa : 3.75\n");
    }
    else if(mark>= 70 && mark <= 74){
        printf("Your Cgpa : 3.50\n");
    }
    else if(mark>= 65 && mark <=69){
        printf("Your Cgpa : 3.25\n");
    }
    else if(mark>= 60 && mark<= 64){
        printf("Your Cgpa : 3.00\n");
    }
    else if(mark>= 55 && mark<= 59){
        printf("Your Cgpa : 2.75\n");
    }
    else if(mark>= 50 && mark<= 54){
        printf("Your Cgpa : 2.50\n");
    }
    else if(mark>= 45 && mark<= 49){
        printf("Your Cgpa : 2.25\n");
    }else if(mark>= 40 && mark<= 44){
        printf("Your Cgpa : 2.00\n");
    }else if(mark < 40 && mark >= 0){
        printf("Your Cgpa : 0.00\n");
    }

    return 0;
}