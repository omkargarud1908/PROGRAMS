
public class SetA2 {
    public static void main(String [] arg)
    {
        if(arg.length==0)
        {
            System.out.println("please enter a number");
            System.exit(0);
        }
        else
        {
            int num=Integer.parseInt(arg[0]);
            int temp;
            int rev=0;
            while (num!=0)
            {
                temp=num%10;
                rev=rev*10+temp;
                num=num/10;
            }
             System.out.println("Reverse of the entered number is "+rev);
        }
       
    }
}
