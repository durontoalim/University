#include <stdio.h>


float fact(int N){

    if(N == 1){
        return 1;
    }
    else{
        return N*fact(N-1);
    }
}


int main()
{
    int N;
    float sum = 0.0;

    printf("Please input number of terms :\n");
    scanf("%d",&N);

    for(int i=1; i<= N; i++){
        sum = sum + ( i/fact(i) );
    }

    printf("%d terms of series is : %.2f",N,sum);

    

    return 0;
}