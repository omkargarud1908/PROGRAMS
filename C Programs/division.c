#include <stdio.h>
int main() 
{    

    int number1, number2, div;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    div = number1 / number2;      
    
    printf("%d / %d = %d\n", number1, number2, div);
    printf("Division is:%d",div);
    return 0;
}