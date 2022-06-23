#include <stdio.h>


int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a > b){
        if(a > c){
            printf("Lergest Number : %d",a);
        }
    }
    else if(b > c){
        if(b > a){
            printf("Lergest Number : %d",b);
        }
    }

    else if(c > a){
        if(c > b){
            printf("Lergest Number : %d",c);
        }
    }
    


    return 0;
}