#include <stdio.h>
int main()
{
    int num[8] = {50, 33, 40, 90, 20, 100, 55, 109};
    int temp=0;
    printf("total numbers are : ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", num[i]);
    }

    for (int j = 0; j < 8; j++)
    {
        for (int k = 1 + j; k < 8; k++)
        {
            if (num[j] > num[k])
            {
                temp = num[j];
                num[j] = num[k];
                num[k] = temp;
            }
        }
    }
    printf("\nacending order :- ");
    for(int x=0;x<8;x++)
    {
        printf("%d ",num[x]);
    }
}