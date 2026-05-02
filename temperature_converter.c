#include <stdio.h>
float tempconvert(float n)
{
    float far = n * (9.0/5.0) + 32;
    return far;
}
int main()            // Celcius to Fahrenheit Temperature converter
{
    float temp;

    printf("Enter your temperature in Celcius: ");
    scanf("%f",&temp);

    float farr = tempconvert(temp);

    printf("Your temp in Fahrenheit is %.2f\n",farr);
    return 0;
}