#include <stdio.h>

int main(void)
{
    char name[50];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("\n--- Personal Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);

    return 0;
}
