package Series;
public class Fibonacci{
public static void fib(int count){
int n1=0,n2=1,n3;
System.out.println("Fibonacci Series :");
System.out.println(n1);
System.out.println(n2);
for(int i=3;i<=count;i++){
n3=n1+n2;
n1=n2;
n2=n3;
System.out.println(n3);
}
}
}
