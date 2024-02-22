#include<stdio.h>

int main ()
{
int x,y,sum,difference;
printf("Enter the value  of a and b with space between:");
scanf("%i %i",&x,&y);
sum=x+y;
difference=x-y;
printf("The Sum of %i and %i is:%i.\n",x,y,sum);
printf("The difference of %i and %i is:%i.\n",x,y,difference);
printf("The Sum and difference of %i and %i is %i and %i.\n",x,y,sum,difference);

return 0;
}