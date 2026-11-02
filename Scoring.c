//gradin the scores 
#include <stdio.h>

int main() {
    int grade;

    printf("Enter a grade (0-30): ");
    scanf("%d", &grade);

    //first check if the grade is out of valid bounds
    if (grade < 0 || grade > 30){
        printf("Invalid grade\n");
    } 
    else if (grade < 18){
        printf("Insufficient\n");
    } 
    else if (grade >= 18 && grade <= 23){
        printf("Sufficient\n");
    } 
    else if (grade >= 24 && grade <= 27){
        printf("Good\n");
    } 
    else if (grade >= 28 && grade <= 30){
        printf("Excellent\n");
    }
    return 0;
}