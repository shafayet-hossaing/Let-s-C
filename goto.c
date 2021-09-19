#include <stdio.h>
int main(){
    int num;
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 7; j++)
        {
            printf("Enter Your Number To Exit\n");
            scanf("%d", &num);
            if(num == 0){
                goto end;
            }
        }
        
    }
    end:
    return 0;
    
}