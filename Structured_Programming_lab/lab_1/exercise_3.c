#include <stdio.h>


int main()
{
    int sub1,sub2,sub3,sub4,sub5,sum = 0;

    float percentage;

    char ch = '%';

    printf("Please five sub mark : \n\n");

    printf("sub1 mark : \n");
    scanf("%d",&sub1);

    printf("sub2 mark : \n");
    scanf("%d",&sub2);

    printf("sub3 mark : \n");
    scanf("%d",&sub3);

    printf("sub4 mark : \n");
    scanf("%d",&sub4);

    printf("sub5 mark : \n");
    scanf("%d",&sub5);

    sum = sub1+sub2+sub3+sub4+sub5;

    printf("aggregate marks : %d\n",sum);

    percentage = (sum*100.00) / 500.00;

    printf("percentage marks : %.2f%c\n",percentage,ch);

    //maximum num

    if(sub1> sub2 && sub1>sub3 && sub1 > sub4 && sub1 > sub5){
        printf("Maximum Marks : %d\n",sub1);
    }
    else if(sub2> sub1 && sub2>sub3 && sub2 > sub4 && sub2 > sub5){
        printf("Maximum Marks : %d\n",sub2);
    }
    else if(sub3> sub1 && sub3>sub2 && sub3 > sub4 && sub3 > sub5){
        printf("Maximum Marks : %d\n",sub3);
    }
    else if(sub4> sub1 && sub4>sub3 && sub4 > sub2 && sub4 > sub5){
        printf("Maximum Marks : %d\n",sub4);
    }
    else printf("Max Marks : %d\n",sub5);



    return 0;
}