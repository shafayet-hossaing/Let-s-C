#include <stdio.h>
int main(){
    int age;
    int marks;
    printf("Enter you age ");
    scanf("%d", &age);
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("Your age is 3 \n");
        switch (marks)
        {
        case 45:
            printf("Yor marks are 45");
            break;
        
        default:
            printf("Yor marks are not 45");
            break;
        }
        break;
    case 23:
        printf("Your age is 23");
        break;
    case 33:
        printf("Your age is 33");
        break;
    default:
        printf("This is not your expected age");
    }
    return 0;
}