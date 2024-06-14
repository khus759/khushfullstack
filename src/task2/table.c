#include <stdio.h>
int main()
{
    int table;
    printf("please enter number of table = ");
    scanf("%d", &table);

    for (int j = 1; j <= 10; j++)
    {

        printf("%d*%d=%d\n", table, j, table * j);
    }
    return 0;
}