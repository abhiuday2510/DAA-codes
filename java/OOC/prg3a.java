package OOC;
import java.util.*;
public class prg3a {
	public static void main(String[] args)
	{
		int a,b;
		float res;
		try
		{
			Scanner inn=new Scanner(System.in);
			System.out.println("Input Dividend (a) \n");
			a=inn.nextInt();
			System.out.println("Input Divisor (b) \n");
			b=inn.nextInt();
			res=a/b;
			System.out.println("Quotient is="+res);
			inn.close();
		}
		catch(ArithmeticException e)
		{
			System.out.println("Divide by zero error "+e);
		}
	}
}
