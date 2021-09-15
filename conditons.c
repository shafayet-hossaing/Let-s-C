#include <stdio.h>
int main(){
    // Voting system with condition
    int age;
    scanf("%d", &age);
    printf("Your age is : %d\n", age);
    if(age>18){
        printf("You can vote");
    }else{
        printf("You can not vote");
    }
    return 0;
}