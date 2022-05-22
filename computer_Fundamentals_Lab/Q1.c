#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Please Three Enteger Number:\n");
    while(scanf("%d %d %d",&a,&b,&c)){
        if(a>b){
            if(a>c){
                printf("The Greatest Number : %d\n",a);
            }else{
                printf("The Greatest Number : %d\n",c);
            }
        }
        else if (b>a){
            if(b>c){
                printf("The Greatest Number : %d\n",b);
            }
            else{
                printf("The Greatest Number : %d\n",c);
            }
        }
    }

    return 0;
}