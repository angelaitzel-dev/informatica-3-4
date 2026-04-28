#include <stdio.h>

int main(void)

{
    float Farenheit;
    printf("Enter the temperature in Farenheit:");
    scanf("%f", &Farenheit);
    float Celcius= ((Farenheit-32)/1.8);
    printf("%.2f°F = %.2f°C \n", Farenheit, Celcius);
    //the answer is -40 for both
}
