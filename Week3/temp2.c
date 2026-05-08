#include <stdio.h>

int main(void)

{
    float Celsius;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &Celsius);
    float Fahrenheit= (Celsius*1.8)+32;
    if (Fahrenheit <0) {
        printf("Freezing Temperature ❄️\n");
    }
    else if (Fahrenheit <=10) {
        printf("🥶 Very cold weather\n");
    }
      else if (Fahrenheit <=20) {
        printf("🧥 Chilly weather\n");
    }
          else if (Fahrenheit <=30) {
        printf("🖼️ Normal weather\n");
    }
              else if (Fahrenheit <=40) {
        printf("☀️ Hot weather\n");
    }
    else {
        printf("🔥 Very hot weather\n");
    }

    printf("%.2f°F = %.2f°C \n", Fahrenheit, Celsius);
}
