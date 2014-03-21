import java.math.*;
import java.util.*;


public class Main {
	static ArrayList<BigInteger> f = new ArrayList<BigInteger>();
	static void Fibonacci(BigInteger a,BigInteger b,long count,long n){
	    f.add(a);
	    if(count < n)
	        Fibonacci(b,a.add(b),++count,n);
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		BigInteger x = new BigInteger("1");
		BigInteger y = new BigInteger("2");
		Fibonacci(x,y,0,60);
		int n,test;
		test = sc.nextInt();
		for(int i = 1; i <= test; i++){
			n = sc.nextInt();
			System.out.println("Scenario #" + i + ":\n" + f.get(n) + "\n");
		}
		sc.close();
	}
}
