#include<stdio.h>
int main()
{
    float Fahrenheit,celsius;
    scanf("%f%f",&Fahrenheit);
    celsius=((Fahrenheit-32)*5)/9;
    printf("%0.2f",celsius);
    return 0;
}