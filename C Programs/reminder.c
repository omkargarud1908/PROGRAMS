#include <stdio.h>
int main() 
{    

    int number1, number2, rem;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    rem = number1 % number2;      
    
    printf("reminder  is:%d",rem);
    return 0;
}