#include <stdio.h>
int main(){
    int a;
    float b;
    a = 20;
    b = 2.3333;

    // After % setting a number means the number has to be 10 digits including main numbers and rest numbers will be filled with white spaces.
    printf("The value of a is: %d & The value of b is \a %10.3f", a, b); // The way of taking decimal number(after point)
    return 0;
}