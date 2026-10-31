//fimdin the area of a triangle
#include<stdio.h>

float areacalc(float base, float height){
    return (base * height) / 2.0;
}
int main(){
    float b, h;

    printf("Enter the base of the triangle: ");
    scanf("%f", &b);
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    float area = areacalc(b, h);

    printf("The area of the triangle is: %.2f", area);

    return 0;
}