#include <stdio.h>

int main(void)
{
    char Item[50];
    printf("Enter the name of your item:");
    scanf("%s", &Item);
    float Price;
    printf("Enter the price for your item: $");
    scanf("%f", &Price);
    int Quantity;
    printf("Enter the quantity of the item you bought:");
    scanf("%d", &Quantity);
    float Total= Price*Quantity;
    printf("Item: \t \t \t %s \n", Item);
    printf("Price: \t \t \t $%.2f \n", Price);
    printf("Quantity bought: \t %d \n", Quantity);
    printf("\n");
    printf("\n");
    printf("**********************************\n");
    printf("The inconvinience store\n");
    printf("**********************************\n");
    printf("Item \t Quantity \t Price\n");
    printf("%s \t %d \t \t $%.2f \n", Item, Quantity, Price);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Total\t \t \t $%.2f \n", Total);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Thank you for your purchase!\n");
}
