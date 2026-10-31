//findin the mean of 3 numbers
#include<stdio.h>

float meancalc(float n1, float n2, float n3){
    return (n1 + n2 + n3)/3;
}
int main(){
    float mean = meancalc(6.0, 8.0, 10.0);

    printf("The mean of the 3 numbers is: %.1f", mean);
    return 0;
}