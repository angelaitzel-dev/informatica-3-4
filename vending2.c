#include <stdio.h>

int main(void)
{
int Quantity_chips = 20;
float Price_chips = 1.50;
char Chips = 'A';

int Quantity_soda = 15;
float Price_soda = 2.00;
char my_little_Soda_pop = 'B';

int Quantity_candy = 30;
float Price_candy = 0.75;
char Candy= 'C';

printf("Vending Machine Stock \n");
printf("---------------------------------- \n");
printf("Item Name: Chips\n" "\t" "Price: %.2f \n", Price_chips);
printf("Quantity Available: %d \n", Quantity_chips);
printf("Selection code: %c \n", Chips);
printf("\n");
printf("Item Name: Soda \n");
printf("Price: %.2f \n",Price_soda);
printf("Selection code: %c \n", my_little_Soda_pop);
printf("\n");
printf("Item Name: Candy \n");
printf("Price: %.2f \n", Price_candy);
printf("Selection code: %c \n", Candy);
}
