#include <stdio.h>
    void Addition (void);
    void Substraction (void);
    void Multiply (void);
    void Divide (void);

int main(void) {
    char User_response;
printf("Basic Calculator \n");
printf("Type in your equation: \n");
scanf("%c", &User_response);
    if (User_response == "+") {
        Addition();
    } else if (User_response == "-"){
        Substraction ();
    } else if (User_response == "*") {
        Multiply ();
    } else if (User_response == "/") {
        Divide ();
    } else {
        printf("Invalid Response\n");
    }
}

void Addition (void){
    float Num1;
    float Num2;
    printf("Enter your numbers");
    scanf("%f", &Num1);
    printf("Enter your second number:");
    scanf("%f", &Num2);
    float Num3= Num1 + Num2;
    printf("%.2f + %.2f = %.2f \n", Num1, Num2, Num3);
}
void Substraction (void){
    float Num1;
    float Num2;
    printf("Enter your first number:");
    scanf("%f", &Num1);
    printf("Enter your second number:");
    scanf("%f", &Num2);
    float Num3= Num1 - Num2;
    printf("%.2f - %.2f = %.2f \n", Num1, Num2, Num3);
}
void Multiply (void){
    float Num1;
    float Num2;
    printf("Enter your first number:");
    scanf("%f", &Num1);
    printf("Enter your second number:");
    scanf("%f", &Num2);
    float Num3= Num1 * Num2;
    printf("%.2f x %.2f = %.2f \n", Num1, Num2, Num3);
}
void Divide (void){
    float Num1;
    float Num2;
    printf("Enter your first number:");
    scanf("%f", &Num1);
    printf("Enter your second number:");
    scanf("%f", &Num2);
    if(Num2 == 0) {
        printf("Math Error\n");}
    else {
        float Num3= Num1 / Num2;
    printf("%.2f / %.2f = %.2f \n", Num1, Num2, Num3);
    }
}
