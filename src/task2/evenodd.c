#include <stdio.h>
int main()
{
    int num[5];
    int odd[5];
    int even[5];
    int arrayo = 0;
    int arraye = 0;
    printf("please enter the number = ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int k = 0; k < 5; k++)
    {
        if (num[k] % 2 == 0)
        {
            even[arraye] = num[k];
            arraye++;
        }
        else
        {
            odd[arrayo] = num[k];
            arrayo++;
        }
    }

    printf("\n\nEven Number :- ");
    for (int x = 0; x < arraye; x++)
    {
        printf("%d ", even[x]);
    }

    printf("\n\nOdd Number :- ");
    for (int v = 0; v < arrayo; v++)
    {
        printf("%d ", odd[v]);
    }

    return 0;
}