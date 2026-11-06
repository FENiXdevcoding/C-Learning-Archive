//sum of first N numbers
#include <stdio.h>

int main(){
    int num, tot = 0; 

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        tot = tot + i; 
    }
    printf("The sum of the first %d numbers is: %d\n", num, tot);
    return 0;
}