#include <stdio.h>
// 1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
 printf("Temperature Converter \n");
 printf("1. Celsius to Fahrenheit \n");
 printf("2. Fahrenheit to Celsius \n");
 printf("Enter your option: ");
  int user_response;
  scanf("%d", &user_response);

  if (user_response ==1){
    //call
    c_to_f();

  }else if (user_response==2){
    f_to_c();
  } else {
    printf("Invalid Option \n");
  }
}

//2.define
void c_to_f(void){
        float Celsius;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &Celsius);
    float Fahrenheit= (Celsius*1.8)+32;
    printf("%.2f°F = %.2f°C \n", Fahrenheit, Celsius);
}
void f_to_c(void){
         float Fahrenheit;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &Fahrenheit);
    float Celcius= ((Fahrenheit-32)/1.8);
    printf("%.2f°F = %.2f°C \n", Fahrenheit, Celcius);
}
