import java.util.Scanner;

interface Operation 
{
    float PI = 3.142f;
    void area();
    void volume();
}

class Circle implements Operation 
{
    int r;

    public void accept() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Radius:");
        r = sc.nextInt();
    }
    public void area() 
    {
        System.out.println("Area of Circle : " + (PI * r * r));
    }

    public void volume() 
    {
        System.out.println("Circle does not contain Volume");
    }
}

class Cylinder implements Operation 
{
    int r;
    int h; 

    public void accept() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Radius:");
        r = sc.nextInt();
        System.out.println("Enter height:");
        h = sc.nextInt();
    }

    public void area() 
    {
        System.out.println("Area of Cylinder : " + (2 * PI * r * h + 2 * PI * r * r));
    }

    public void volume() 
    {
        System.out.println("Volume of Cylinder : " + (PI * r * r * h));
    }
}

public class Area {
    public static void main(String args[]) 
    {
        Circle c1 = new Circle();
        c1.accept();
        c1.area();
        c1.volume();

        Cylinder c2 = new Cylinder();
        c2.accept();
        c2.area();
        c2.volume();
    }
}
