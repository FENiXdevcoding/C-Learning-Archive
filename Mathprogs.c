//too bored to right all but basically smthin similar to a calc
#include <stdio.h>

int main(){
    int choice;
    float num1, num2;

    do{
        printf("\n---Welcome to OSU!---\n");
        printf("1 - Sum two numbers\n");
        printf("2 - Square of a number\n");
        printf("3 - Double of a number\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                printf("Result: %g + %g = %g\n", num1, num2, num1 + num2);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%f", &num1);
                printf("Result: The square of %g is %g\n", num1, num1 * num1);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%f", &num1);
                printf("Result: The double of %g is %g\n", num1, num1 * 2.0);
                break;

            case 0:
                printf("See you next time...\n");
                break;

            default:
                printf("Error: Invalid choice. Please select a valid option.\n");
                break;
        }

    }while(choice != 0);//!= -> when its different frm

    return 0;
}