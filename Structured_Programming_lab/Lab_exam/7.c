#include <stdio.h>
#include <string.h>

int main()
{
    int N;

    scanf("%d",&N);

    int count;

    for (int i = 2; i <= N; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0){
                count++;
            }
        }
        
        if(count == 0){
            printf("%d ",i);
        }
        
    }
    
    


    return 0;
    
}