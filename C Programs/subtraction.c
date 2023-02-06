#include <stdio.h>
int main() 
{    

    int number1, number2, sub;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sub = number1 - number2;      
    
    printf("%d - %d = %d\n", number1, number2, sub);
    printf("Subtractin  is:%d",sub);
    return 0;
}