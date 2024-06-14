#include <stdio.h>
int main()
{
    int num[10];
    printf("enter number");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int k = 0; k < 10; k++)
    {
        printf(" %d", num[k]);
    }
            printf("number is %d", num);

    return 0;
}