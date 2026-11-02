//making the user enter a number frm 1 to 10, and loopin till they does so
#include <stdio.h>

int main() {
    int number;

    do{
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &number);

        if (number < 1 || number > 10){//checkin for errors
            printf("Error: The number entered is wrong. Try again.\n\n");
        }
    }while(number < 1 || number > 10);

    printf("Success! You entered: %d\n", number);
    return 0;
}