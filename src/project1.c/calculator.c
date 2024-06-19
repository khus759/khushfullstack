#include <stdio.h>
#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    while (1)
    {
        printf("Enter an oprator(+,-,*,/),if want to exit press x: ");
        scanf(" %c", &operator);

        if (operator == 'x'|| operator =='X')
        {
            break;
        }

        printf("Please enter the Two Number\n");
        scanf("%d %d", &num1, &num2);

        switch (operator)
        {
        case '+':

            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':

            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':

            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':

            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("This is invalid Number");
            break;
        }
    }

    return 0;
}
