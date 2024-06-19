#include<stdio.h>
#include<string.h>
void oppositename();
int main()
{
  oppositename();
    return 0;
}
void oppositename()
{
   char name [12];


 printf("please enter your name:\t");
 scanf("%s",&name);

     printf("output is :- ");
    for (int i=strlen(name)-1;i>=0;i--)
    {
       printf("%c", name[i]);
       
    }
}