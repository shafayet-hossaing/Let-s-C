#include <stdio.h>
int main(){
    int num;
    printf("Enter The Num : ");
    scanf("%d", &num);
    printf("Ther number is : %d", num);


    // Namota
    for (int i = 0; i <= 10; i++)
    {
        // (First (%d) is for watching the num's value)
        // (Second (%d) is for watching the i value)
        // (Third (%d) is for watching the calculated number (num*i) value)
        printf("%d X %d = %d\n", num,i, num*i); 
    }
    
    return 0;
}