public class MyNumber
{
    private int num;
    public MyNumber()
    {
        num = 0;
    }
    public MyNumber(int num)
    {
        this.num=num;
    }
    public boolean isNegative()
    {
        if(num<0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public boolean isPositive()
    {
        if(num>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public boolean isZero()
    {
        if(num==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public boolean isOdd()
    {
        if(num%2!=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public boolean isEven()
    {
        if(num%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String[] arg)
    {
        int num=Integer.parseInt(arg[0]);
        MyNumber m = new MyNumber(num);
        if(m.isNegative())
        {
            System.out.println("Entered Number is Negative");
        }
        if(m.isPositive())
        {
            System.out.println("Entered Number is Positive");
        }
        if(m.isOdd())
        {
            System.out.println("Entered Number is Odd");
        }
        if(m.isEven())
        {
            System.out.println("Entered Number is Even");
        }
        if(m.isZero())
        {
            System.out.println("Entered Number is Zero");
        }

    }

}
