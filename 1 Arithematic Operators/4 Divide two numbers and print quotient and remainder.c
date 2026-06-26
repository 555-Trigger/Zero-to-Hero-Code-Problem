//4. Divide two numbers and print quotient and remainder. (Hint: use / and %)
#include<stdio.h>
int main(void)
{
    int a, b,c,d;
    printf("\nEnter the the first number:");
    scanf("%d",&a);
    printf("\nEnter the the second number:");
    scanf("%d",&b);
    if(b !=0)
    {
        c=a/b;
        printf("\nThe quotient of first and the second numbers are: %d \n",c);
        d=a%b;
        printf("\nThe remainder of first and the second numbers are: %d \n",d);
    }
    else
    {
        printf("\nThe division by zero is not possible");
    }

    return 0;
}
