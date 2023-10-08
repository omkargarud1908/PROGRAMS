import java.sql.*;
import java.util.*;

class District
{
	private Statement s;
	private PreparedStatement pstmt;
	private ResultSet rs;
	private Connection oConnect;
	
	public void getConnection()
	{
		try 
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
		}
		catch(ClassNotFoundException e)
		{
			System.out.println(e);
		}
		
		try
		{
			oConnect=DriverManager.getConnection("jdbc:mysql://localhost:3306/omkar","root","010575");
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
	}
	
	public void display()
	{
		try
		{
			s=oConnect.createStatement();
			rs= s.executeQuery("Select * from District");
			while (rs.next())
			{
				System.out.println ("\nNmae- " + rs.getString(1));
				System.out.println ("Area- " + rs.getString(2));
				System.out.println ("Population- " + rs.getInt(3)+"\n");
			}
		}
		catch(Exception ex)
		{
			System.out.println (ex);
		}
	}
	
	public void search(String name)
	{
		String query="select * from District where name=?";
		try
		{
			pstmt= oConnect.prepareStatement(query);
			pstmt.setString(1, name);
			rs=pstmt.executeQuery();
			while(rs.next())
			{
				System.out.println ("\nNmae- " + rs.getString(1));
				System.out.println ("Area- " + rs.getString(2));
				System.out.println ("Population- " + rs.getInt(3)+"\n");
			}
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
	}
	
	public void update(int population,String area)
	{
		String query="update District set population=? where area=?";
		try
		{
			pstmt= oConnect.prepareStatement(query);
			pstmt.setInt(1, population);
			pstmt.setString(2, area);
			int cnt=pstmt.executeUpdate();
			System.out.println(cnt+1 +" Data updated successfully\n");
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
	}
	
	public void delete(String area)
	{
		String query="delete from District where area=?";
		try
		{
			pstmt= oConnect.prepareStatement(query);
			pstmt.setString(1, area);
			int cnt=pstmt.executeUpdate();
			System.out.println(cnt+" Data deleted successfully\n");
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
	}
	
	public void insert(String name,String area,int population)
	{
		String query="insert into District values(?,?,?)";
		try
		{
			pstmt= oConnect.prepareStatement(query);
			pstmt.setString(1, name);
			pstmt.setString(2, area);
			pstmt.setInt(3, population);
			int cnt=pstmt.executeUpdate();
			System.out.println(cnt+" Data inserted successfully\n");
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
	}
	public void closeConnection()
	{
		try
		{
			if(s!=null)
				s.close();
			if(pstmt!=null)
				pstmt.close();
			if(oConnect!=null)
				oConnect.close();
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
	}
	
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		District d=new District();
		d.getConnection();
		
		int ch;
		
		do
		{
			System.out.println("1.Insert");
			System.out.println("2.Modify");
			System.out.println("3.Delete");
			System.out.println("4.Search");
			System.out.println("5.View All Data");
			System.out.println("6.Exit\n");
			System.out.println("Enter Your Choise:");
			ch=sc.nextInt();
			String name;
			String area;
			int population;
			switch(ch)
			{
			
			case 1:	System.out.println("Enter name:");
					name=sc.next();
					System.out.println("Enter Area:");
					area=sc.next();
					System.out.println("Enter Population:");
					population=sc.nextInt();
					d.insert(name,area,population);
					break;
					
					
			case 2: System.out.println("Enter Area :");
					area=sc.next();
					System.out.println("Update Population :");
					population=sc.nextInt();
					d.update(population,area);
					break;
					
					
			case 3: System.out.println("Enter Area you want to delete :");
					area=sc.next();
					d.delete(area);
					break;
					
					
			case 4: System.out.print("Enter name:");
					name=sc.next();
					d.search(name);
					break;
					
					
			case 5: d.display();
					break;
					
					
			case 6: break;

			
			}		
		}while(ch!=6);
		d.closeConnection();
	}	
}