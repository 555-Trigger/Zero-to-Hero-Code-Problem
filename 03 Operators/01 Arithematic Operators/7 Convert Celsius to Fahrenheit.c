//7. Convert Celsius to Fahrenheit. (Hint: formula F = (9*C/5) + 32)
#include<stdio.h>
int main(void)
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius / 5) + 32;
    printf("The temperature in Fahrenheit is: %.2f", fahrenheit);
    return 0;
}
