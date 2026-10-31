//using a funsion do the sum of 2 numbers.

int sum(int n1, int n2) {//the funtion is to calculate the sum
    return n1 + n2;//instead of doing the calculation in the fuction, we can just return it doin the sum
}

int main(void) {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = sum(num1, num2);//calling the function by passing the variables entered in the brackets

    printf("The sum of the two numbers is %d\n", result);

    return 0;
}