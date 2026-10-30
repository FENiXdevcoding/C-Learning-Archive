// Finding if the number enterted is odd or even.
#include <stdio.h>
int main(){
    int num;

    printf("Eneter a number:");
    scanf("%d", &num);
    
    printf("The number %d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");
    return 0;
}