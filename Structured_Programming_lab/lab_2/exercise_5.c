#include <stdio.h>
int main()
{

    int a,b,c;

    printf("Please input three age : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c){
        printf("%d is youngest\n",a);
    }
    else if(b<a && b<c){
        printf("%d is youngest\n",b);
    }
    else printf("%d is youngest\n",c);

    return 0;
}