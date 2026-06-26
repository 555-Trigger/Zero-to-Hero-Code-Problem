//5. Swap two numbers without using a third variable. (Hint: use arithmetic operators)
#include<stdio.h>
int main(void)
{
    int a, b;
    printf("\nEnter the the first number:");
    scanf("%d",&a);
    printf("\nEnter the the second number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n The swapped numbers are now first:%d and Second:%d\n",a,b);
    return 0;
}
