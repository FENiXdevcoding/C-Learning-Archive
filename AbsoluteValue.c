//findin the ablsolute value
#include <stdio.h>

int absoluteval(int num) {
    return (num < 0) ? -num : num;//puttin -num is like multiplin the num with -1
}

int main(void) {
    int val = absoluteval(-15);

    printf("The absolute value is: %d\n", val);
    
    return 0;
}