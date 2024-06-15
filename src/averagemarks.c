#include<stdio.h>
int main()
{
    int history;
    int geography;
    int political;
    int sum = 0;
    int average = 0;
    printf("please enter history number = ");
    scanf("%d",&history);
    printf("please enter geography number = ");
    scanf("%d",&geography);
    printf("please enter political number = ");
    scanf("%d",&political);
    if ((history <=100 && history >=0)&&(geography <=100 && geography >=0)&&(political <=100 && political >0))
    {
        sum = history+geography+political;
        average = sum/3;
        if (average>=60)
        {
            printf("First division");
        }
        else if(average <=40)
        {
            printf("Second division");
        }
        else if(average <=30)
        {
            printf("Third division");
        }
        
    }
    else
    {
        printf("please try again");
    }
    return 0;
    
    
}