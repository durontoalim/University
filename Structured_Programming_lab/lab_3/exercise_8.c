#include <stdio.h>

int main()
{
    

    int N,count;

    N = 5;
    count = 1;
    for(int i=1; i<=N; i++){
        for(int j=i; j>0; --j){

            if(count == 1){
                printf("%d",j);
            }
            else{
                printf(" %d",j);
            }
        }
        count++;
        printf("\n");
    }


    return 0;
}