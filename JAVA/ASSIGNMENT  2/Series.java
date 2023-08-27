import java.util.*;
import Series.Fibonacci;
import Series.Square;
import Series.Cube;
class Series{
public static void main(String args[]){
Scanner sc =new Scanner(System.in);
System.out.print("Enter A Number :");
int n=sc.nextInt();
Fibonacci.fib(n);
Cube.cubeN(n);
Square.squareN(n);
}
}