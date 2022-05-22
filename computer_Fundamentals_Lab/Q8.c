#include <stdio.h>

int main()
{
    int n,count;
    scanf("%d", &n);
    for(int i=1; i<n;i++){
        count =0;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%d ",i);
        }
    }
    return 0;
}
