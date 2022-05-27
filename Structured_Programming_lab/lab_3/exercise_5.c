#include <stdio.h>

int main()
{
    int count;
    long long int N;
    scanf("%lld",&N);

    count = 0;

    for(int i =2; i<=(N/2)-1; i++){
        if(N%i == 0){
            count++;
        }
    }

    if(count == 0){
        printf("This is prime Number : %lld",N);
    }
    else{
        printf("This is not Prime Number : %lld",N);
    }
    
    
    
    
    return 0;


}