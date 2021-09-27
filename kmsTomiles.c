#include <stdio.h>
int main(void){
    float kilometers;
    printf("Enter Your Number : ");
    scanf("%f", &kilometers);
    float miles = kilometers * 0.621371;
    printf("%f miles", miles);
    return 0;
}