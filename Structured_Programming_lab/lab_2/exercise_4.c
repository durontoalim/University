#include <stdio.h>
#include <string.h>

int main()
{

    int i,N=5,count = 0;
    char num[N];

    printf("Please Five degit Number : ");
    scanf("%s",&num);


    char reserve_num[N];

    int t = 0;

    for(i= strlen(num)-1 ; i>=0;i--){

        reserve_num[t] = num[i];
        t++;

    }

    for(int i=0; i<N; i++){

        if(reserve_num[i] == num[i]){
            count++;
        }

    }

    if(count == N){
        printf("reversed numbers are equal\n");
    }
    else{
        printf("reversed numbers are not equal\n");
    }

    return 0;
}