#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Enter your name:");
    scanf("%s", &name);
    printf("Hello %s!\n", name);
    int age[50];
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You are %d years old!\n", age);

}
