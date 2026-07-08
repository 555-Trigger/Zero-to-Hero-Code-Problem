//6. Find the average of three numbers. (Hint: sum ÷ count)
#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("\nEnter the first number:");
    scanf("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d", &b);
    printf("\nEnter the third number:");
    scanf("%d", &c);
    d= (a+b+c)/3;
    printf("The average of three numbers is :%d",d);
}
