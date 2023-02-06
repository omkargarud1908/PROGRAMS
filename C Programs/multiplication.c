#include <stdio.h>
int main() 
{    

    int number1, number2, mul;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    mul = number1 * number2;      
    
    printf("%d * %d = %d\n", number1, number2, mul);
    printf("Multiplication  is:%d",mul);
    return 0;
}