//checking if the weather entered by the user is from hot, cold or mild
#include <stdio.h>

int main(){
    int temperature;

    printf("Enter a temperature: ");
    scanf("%d", &temperature);

    if (temperature < 10){
        printf("Cold\n");
    }
    else if (temperature >= 10 && temperature <= 24) {
        printf("Mild\n");
    } 
    else{
        printf("Hot\n");
    }
    return 0;
}