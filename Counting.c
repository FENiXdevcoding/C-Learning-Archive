//usin a while, stamp out numbers from 1, t n.
#include<stdio.h>

int main(){
    int num, i = 1;

    printf("Enter till which number you wanna count: ");
    scanf("%d", &num);

    printf("Here you go...\n");

    while(i <= num){
        printf("%d ", i);
        i++;
    }
    return 0;
}