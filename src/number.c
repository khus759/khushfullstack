#include <stdio.h>
int main()
{
    int num[10];
    int sum =0 ;
    printf("enter number");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int k = 0; k < 10; k++)
    {
        sum += num[k];
    }
    printf("sum of number is %d",sum);
        
           


    return 0;
}