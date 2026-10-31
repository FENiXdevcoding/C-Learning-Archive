//findin the bigger num frm 3 nums
#include <stdio.h>

int big3(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);//first check between a and b, then a/b from c
}
int main(void) {
    int result = big3(15, 42, 8);

    printf("The greatest of the three numbers is: %d\n", result);
    return 0;
}