//this time im using a fintion to find the bigger num
#include <stdio.h>

int biggercalc(int n1, int n2) {
    return (n1 > n2) ? n1 : n2;
}

int main(void) {
    int bigger = maggiore(12, 7);

    printf("The greater number is: %d\n", bigger);
    
    return 0;
}