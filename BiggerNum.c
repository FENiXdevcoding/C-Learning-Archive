// Finding the bigger number from 2 entered numbers.
#include <stdio.h>
int main(){
    int num1;
    int num2;

    printf("Eneter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("The bigger number is %d\n", (num1 > num2) ? num1 : num2);//by putting %d in the end it selectes the output givien by the if
    
    return 0;
}