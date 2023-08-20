import java.util.*;
public class Point3D extends ColorPoint
{
    public int z;

    public Point3D()
    {
        super();
        z=0;
    }

    public Point3D(int x,int y,String color,int z)
    {
        super(x,y,color);
        this.z=z;
    }

    public void accept()
    {
        super.accept();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter coordinate z:");
        z=sc.nextInt(); 
    }

    public void display()
    {
        super.display();
        System.out.println("Z coordinaate:"+z);
    }
}