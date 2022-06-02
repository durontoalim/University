#include <stdio.h>


int main()
{
    int N,count,i,j;
    
    scanf("%d",&N);

    printf("2");
    
    for(i=3; i<= N; i++){
        count = 0;
        for(j = 2; j < i; j++){
            if(i%j == 0){
                count++;
                break;
            }
        }

        if(count == 0){
            printf(" %d",i);
        }
    }

    
    return 0;
}