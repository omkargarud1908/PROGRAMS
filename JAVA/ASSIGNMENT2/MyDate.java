import java.util.*;
public class MyDate
{
	private int dd,mm,yy;
	
	public MyDate()
	{
		dd=mm=yy=0;
	}
	public MyDate(int dd, int mm, int yy)
	{
		this.dd=dd;
		this.mm=mm;
		this.yy=yy;
	}
	public void accept()
	{
		Scanner in = new Scanner(System.in);
		System.out.println("\nEnter the Date- ");
		dd = in.nextInt();
		System.out.println("\nEnter the Month- ");
		mm = in.nextInt();
		System.out.println("\nEnter the Year- ");
		yy = in.nextInt();
	}
	public void display()
	{
		System.out.println("\nDate of Birthday - " + dd + "/" + mm + "/" + yy);
	}
	public static void main(String[] args)
	{
		MyDate d = new MyDate();
		d.accept();
		d.display();
		MyDate d1 = new MyDate(15,10,2003);
		d1.display();
	}
	
}