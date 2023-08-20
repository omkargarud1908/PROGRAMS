import java.util.*;
public class Emp 
{
    private int id;
    private String name;
    protected int sal;

    public Emp()
    {
        id=0;
        name=" ";
        sal=0;
    }
    public Emp(int id,String name,int sal)
    {
        this.id=id;
        this.name=name;
        this.sal=sal;
    }
    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Employee id ");
        id=sc.nextInt();
        System.out.println("Enter Employee name ");
        name=sc.next();
        System.out.println("Enter Employee Salary ");
        sal=sc.nextInt();
    }
    public void display()
    {
        System.out.println(id+"\t"+name+"\t"+sal);
    }
    public static void main(String args[])
    {
        int i;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter How Many Employee details you want ");
        int n=sc.nextInt();
        Manager a[]=new Manager[n];
        for(i=0;i<a.length;i++)
        {
            a[i]=new Manager();
            a[i].accept();
        }
        for(i=0;i<a.length;i++)
        {
            a[i].display();
        }
        System.out.println("Employee Details with Highest Salary ");
        Manager.displayMax(a);
    }
}
class Manager extends Emp
{
    private int bonus;
    public Manager()
    {
        super();
        bonus=0;
    }
    public Manager(int id,String name,int sal,int bonus)
    {
        super(id,name,sal);
        this.bonus=bonus;
    }
    public void accept()
    {
        super.accept();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Bonus ");
        bonus=sc.nextInt();
        System.out.println("-------------------------------");
    }
    public void display()
    {
        super.display();
        System.out.println("Bonus"+bonus);
        System.out.println("Total Salary is :"+(sal+bonus));
        System.out.println("-------------------------------");
    }
    public float getTotalSalary()
    {
        return sal+bonus;
    }
    public static void displayMax(Manager[] m)
    {
        Manager temp=new Manager();
        for(int i=0;i<m.length;i++)
        {
            if(temp.getTotalSalary()<m[i].getTotalSalary())
            {
                temp=m[i];
            }
        }
        temp.display();
    }
}