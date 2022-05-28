#include <stdio.h>
int main()
{

    int N = 4;

    for(int i=1; i<=N; i++){
        for(int j= N; j>=i; --j){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}