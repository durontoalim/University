#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void factorial();
void primeNum();
void odd();
void even();

int main()
{
    bool t = true;

    while(t){

        int N;

        printf("Please find your result input num 1: Factorial, 2: Prime , 3: Odd , 4: even , 5: exit \n");
        scanf("%d",&N);

        if(N == 5){
            break;
        }

        switch (N)
        {
            case 1:
                factorial();
                break;
            
            case 2:
                primeNum();
                break;
            
            case 3:
                odd();
                break;
            case 4:
                even();
                break;

            default:
                printf("Your num is wrong. please try again right number\n");
                break;
        }

    }
   
    
    
    return 0;
}

// Factorial

void factorial(){
    int n;
    printf("Please find factorial num : \n");
    scanf("%d",&n);


    long long int fact = n;

    while(n--){
        fact *= n;
        if(n == 1){
            break;
        }
    }

    printf("%lld\n",fact);
}

// Prime or not

void primeNum(){

    int N;
    printf("Please find Prime or not so input num : \n");
    scanf("%d",&N);

    int count = 0;

    if(N == 1 || N == 0){
        count = 1;
    }

    for(int i=2; i<= sqrt(N); i++){
        if(N%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("%d is a Prime Number.\n",N);
    }
    else{
        printf("%d is Not a Prime Number.\n",N);
    }
}


// Odd or not

void odd(){

    int N;
    printf("Please check Odd num so input num : \n");
    scanf("%d",&N);

    if(N%2 == 1){
        printf("This number is Odd\n");
    }
    else{
        printf("This number is not Odd\n");
    }
}


// Even or not

void even(){

    int N;
    printf("Please check Even num so input num : \n");
    scanf("%d",&N);

    if(N%2 == 0){
        printf("This number is Even\n");
    }
    else{
        printf("This number is not Even\n");
    }
}