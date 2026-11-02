//idk man, im too tired for a intro :)
#include <stdio.h>

int main(){
    int choice;
    int num;

    do{
        printf("\n---Domain Expantion---\n");
        printf("1 - Check if a number is even or odd\n");
        printf("2 - Check if a number is positive or negative\n");
        printf("3 - Calculate the square of a number\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter an numer: ");
                scanf("%d", &num);
                
                //even or odd
                if(num % 2 == 0){
                    printf("Result: %d is Even\n", num);
                }else{
                    printf("Result: %d is Odd\n", num);
                }
                break;

            case 2:
                printf("Enter an number: ");
                scanf("%d", &num);
                
                //positive, negative, or zero
                if(num > 0){
                    printf("Result: %d is Positive\n", num);
                }else if(num < 0){
                    printf("Result: %d is Negative\n", num);
                } else{
                    printf("Result: The number is Zero\n");
                }
                break;

            case 3:
                printf("Enter an number: ");
                scanf("%d", &num);
                
                //the square
                printf("Result: The square of %d is %d\n", num, num * num);
                break;

            case 0:
                printf("See you next time...\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }

    } while (choice != 0); //loop repeats until the user enters 0

    return 0;
}