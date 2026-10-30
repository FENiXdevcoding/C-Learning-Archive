//if the price fo the product goes beyond 100m the product gets a 10% discount
#include <stdio.h>

int main() {
    float price;

    printf("Enter the price: ");
    scanf("%f", &price);

    if (price > 100.0) {
        printf("Your product got a discount and the final price is %.2f\n", price * 0.90);
    } else {
        printf("Your product did not get a discount");
    }
    return 0;
}