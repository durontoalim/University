#include <stdio.h>
int main()
{

    int n=200,count;
    int first = 2;

    printf("%d",first);

    for(int i=3; i <= n; i++){
        count = 0;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 0){
            printf(" %d",i);
        }
    }


    return 0;
}