#include <stdio.h>

int main() {
    float amount, sugar, milk, change;

    printf("Amount: Kes. ");
    scanf("%f", &amount);

    printf("Sugar: Kes. ");
    scanf("%f", &sugar);

    printf("Milk: Kes. ");
    scanf("%f", &milk);

    change = amount - (sugar + milk);

    printf("Change: Kes. %.2f\n", change);

    return 0;
}
