import java.util.*;
public class ColorPoint extends Point
{
    public String color;

    public ColorPoint()
    {
        super();
        color="";
    }

    public ColorPoint(int x,int y,String color)
    {
        super(x,y);
        this.color=color;
    }

    public void accept()
    {
        super.accept();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Color:");
        color=sc.next();
    }

    public void display()
    {
        super.display();
        System.out.println("Color is:"+color);
    }
}
