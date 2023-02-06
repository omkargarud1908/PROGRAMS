#include <stdio.h>
int main() 
{    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);
    printf("Sum is:%d",sum);
    return 0;
}