#include <stdio.h>
int main(){
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        scanf("%d", &age);
        if(age>10){
            // break;
            continue;
        }
        printf("Hello there");
        printf("Hello there");
        printf("Hello there");
        printf("Hello there");
        printf("Hello there How is it going?");
    }
    return 0;
}