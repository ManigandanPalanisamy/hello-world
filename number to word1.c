import java.util.*;
import java.io.*;
public class NumberToWord
{
  public void pw(int n)
  {
    String  one[]={"zero "," one"," two"," three"," four"," five"," six"," seven"," eight"," Nine")};   

     System.out.print(one[n]);
   
  }
  public static void main(String[] args)
  {
    int n=0,t;
    Scanner scanf = new Scanner(System.in);
	NumberToWord a = new NumberToWord();
    System.out.println("Enter an integer number: ");
    n = scanf.nextInt();                
     while(n!=0)
	{
		t=n%10;
		n=n/10;
		a.pw(t);
	}
}