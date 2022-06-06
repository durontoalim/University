#include <stdio.h>
int main()
{
    int n,first_num, last_num,sum;

    printf("Please input four degit number : \n");
    scanf("%d",&n); 

    last_num = n%10;
    first_num = n/1000;
    sum = first_num + last_num;

    printf("first number %d and last number %d sum = %d\n",first_num,last_num,sum);

    return 0;
}