#include <stdio.h>

int main(void)
{
    Vending Machine Stock
---------------------------
Item name: Chips
Price: $1.50
Quantity available: 20
Selection code: A

Item name: Soda
Price: $2.00
Quantity available: 15
Selection code: B

Item name: Candy
Price: $0.75
Quantity available: 30
Selection code: C

int Quantity_chips = 20;
float Price_chips = 1.50;
char Chips = 'A';

int Quantity_soda = 15;
float Price_soda = 2.00;
char Soda = 'B';

int Quantity_candy = 30;
float Price_candy = 0.75;
char Candy= 'C';

printf("Vending Machine Stock \n");
printf("----------------------------------");
printf("Item Name: Chips\n");
printf("Price: %f \n", Price_chips);
printf("Quantity Available: %d \n", Quantity_chips);
printf("Selection code: %c \n", Chips);
printf("\n");
printf("Item Name: Soda \n");
printf("Price: %f \n",Price_soda);
}
