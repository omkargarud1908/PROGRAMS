import java.sql.*;
public class Person
{
	public static void main(String args[]) 
	//throws SQLException,ClassNotFoundException
	{
		
		Connection c;
		Statement s;
		ResultSet rs;
		try
		{
			Class.forName ("org.postgresql.Driver");
			c = DriverManager.getConnection ("jdbc:postgresql://localhost:5432/postgres","postgres","010575");
			if (c == null)
				System.out.println ("Connection Failed.");
				
			else
			{
				System.out.println ("Connection Successful.");
				s = c.createStatement ();
				rs = s.executeQuery ("Select * from Person");
				while (rs.next())
				{
					System.out.println ("\nPerson ID- " + rs.getInt(1));
					System.out.println ("Person Name- " + rs.getString(2));
					System.out.println ("Person Gender- " + rs.getString(3));
					System.out.println ("Person Birth Year- " + rs.getInt(4)+"\n");
				}
				c.close();
			}
		}
		catch (Exception ex)
		{
			System.out.println (ex);
		}
	}
}
