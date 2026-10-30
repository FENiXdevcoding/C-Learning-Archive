//Saying the temperature entered is Cold or Hot amd then converting teh temp into Fahrenheit.
#include <stdio.h>

int main() {
    float temp;

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    printf("%s\n", (temp >= 25.0) ? "Hot" : "Cold");
    
    printf("Temperature in Fahrenheit: %.2f\n", temp * 9.0 / 5.0 + 32.0);

    return 0;
}