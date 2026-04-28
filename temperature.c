#include <stdio.h>

int main(void)

{
    float Fahrenheit;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &Fahrenheit);
    float Celcius= ((Fahrenheit-32)/1.8);
    printf("%.2f°F = %.2f°C \n", Fahrenheit, Celcius);
    //the answer is -40 for both
}
