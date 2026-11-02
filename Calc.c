//a calc
#include <stdio.h>

int main() {
    double num1, num2;
    int operation;

    //first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    //second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    //operation
    printf("\nSelect an operation:\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            //addition
            printf("Result: %g + %g = %g\n", num1, num2, num1 + num2);//%g is used for remove the useless 0s 
            break;

        case 2:
            //subtraction
            printf("Result: %g - %g = %g\n", num1, num2, num1 - num2);
            break;

        case 3:
            //multiplication
            printf("Result: %g * %g = %g\n", num1, num2, num1 * num2);
            break;

        case 4:
            //division
                printf("Result: %g / %g = %g\n", num1, num2, num1 / num2);
            break;

        default:
            //invalid choices
            printf("Error: Invalid operation choice.\n");
            break;
    }

    return 0;
}