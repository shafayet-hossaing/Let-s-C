#include <stdio.h>
int sum (int a, int b){
    return a + b;
}
int main(){
    int c;
    // You Can Declare Or Store The Numebr You Want to Add Together || You Can Declare The Direct Number While Calling The Function
    // int a, b, c;
    // a = 5;
    // b = 8;
    c = sum(10, 8);
    printf("The sum is %d", c);
    return 0;
}