import java.util.*;

public class Point
{
    public int x;
    public int y;

    public Point()
    {
        x=y=0;
    }

    public Point(int x,int y)
    {
        this.x=x;
        this.y=y;
    }

    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First Coordinate X:");
        x=sc.nextInt();
        System.out.println("Enter Second Coordinate Y:");
        y=sc.nextInt();

    }

    public void display()
    {
        System.out.println(x+"\t"+y);
    }

    public static void main(String[] args)
    {
        Point3D p=new Point3D();
        p.accept();
        p.display();
    }
}


