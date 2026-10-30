// Finding if the number enterted is posotive or negetive.
#include <stdio.h>
int main(){
    int num;

    printf("Eneter a number:");
    scanf("%d", &num);

    printf("%s\n", (num >= 0) ? "Positive" : "Negative");//this type of if is useful if the outocome is simple and has on;ly 2 sides.

    return 0;
}