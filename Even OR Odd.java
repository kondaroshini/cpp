import java.util.Scanner;
class Main
{
	public static void main(String[] args) 
	{
	    Scanner s=new Scanner(System.in);
	    System.out.println("Enter the number:");
	    int num=s.nextInt();
		if(num%2==0)
		{
		    System.out.println("Number is EVEN");
		}
		else
		{
		    System.out.println("Number is ODD");
		}
	}
}
