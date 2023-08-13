
import java.io.*;
public class SetA1
{
    public static void main(String[] args) throws IOException
    {
            int i;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number:");
        int a=Integer.parseInt(br.readLine());
        for(i=1;i<=10;i++)
            {
                System.out.println(a+"*"+i+"="+a*i);
            }
    }
}

