// calc the discount of smthin
#include <stdio.h>

float discprize(float prize, float disc){
    return prize - (prize * (prize / 100.0)); // calc the discount amount and subtract it from the original price
}

int main(void){
    float finalprice = discprize(50.0, 20.0);

    printf("The discounted price is: %.2f\n", finalprice);

    return 0;
}