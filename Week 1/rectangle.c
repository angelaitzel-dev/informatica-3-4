#include <stdio.h>

int main(void)

{
    int height;
    int width;
    printf("Enter the Height of the rectangle:");
    printf("Enter the Width of the rectangle:");
    scanf ("%d", &height);
    scanf ("%d", &width);
    int area= width*height;
    int perimeter= (width+height)*2;

    printf("Area: %d \n", area);
    printf("Perimeter: %d \n", height);
}
