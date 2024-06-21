#include <stdio.h>
int main()
{
    int rollno[3];
    char name[3][10];
    char address[3][10];
    
    for (int i = 0; i < 3; i++)
    {
        printf("\n*****%d student details*****\n",i+1);

        printf("Enter Student Rollno: ");
        scanf("%d", &rollno[i]);

        printf("Enter Student Name: ");
        scanf("%s", &name[i]);

        printf("Enter Student Address: ");
        scanf("%s", &address[i]);
    }
    for (int k = 0; k < 3; k++)
    {
        
        printf("\n\n*****%d student details*****",k+1);

        printf("\nStudent Rollno:  %d", rollno[k]);
        printf("\nStudent Name: %s", name[k]);
        printf("\nStudent Address %s", address[k]);
    }

    return 0;
}