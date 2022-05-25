#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;

    printf("Please x1 & y2 value : ");
    scanf("%d %d",&x1,&y1);

    printf("Please x2 & y2 value : ");
    scanf("%d %d",&x2,&y2);

    printf("Please x3 & y3 value : ");
    scanf("%d %d",&x3,&y3);
    

    int straight_line1 = (x2-x1)/ (y2-y1);
    int straight_line2 = (x3-x2)/ (y3-y2);
    
    if(straight_line1 == straight_line2){
        printf("This is Straight");
    }
    else{
        printf("This is not straight line");
    }

    return 0;
}