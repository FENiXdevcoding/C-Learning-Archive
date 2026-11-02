//asking the user for the price of the product, and then giving them a dicount dependin on the price
#include <stdio.h>

int main(){
    float price, finalprice;

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    if(price < 0){
        printf("Invalid price\n");
        return 1;//halts the program from progressin
    } 
    else if(price < 50.0){
        finalprice = price;
        printf("No discount applied.\n");
    } 
    else if(price >= 50.0 && price < 100.0){
        finalprice = price - (price * 0.10);// 10 discount
        printf("10%% discount applied.\n");
    } 
    else{
        finalprice = price - (price * 0.20);// 20 discount
        printf("20%% discount applied.\n");
    }
    printf("Final price: $%.2f\n", finalprice);//final price 2 decimal places
    return 0;
}