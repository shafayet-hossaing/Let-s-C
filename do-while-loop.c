#include <stdio.h>
int main(){
    int num, i = 0;
    printf("Enter your number \n");
    scanf("%d", &num);

    do{
        printf("%d", i+1);
        i+=1;
    }while(i<num);
}