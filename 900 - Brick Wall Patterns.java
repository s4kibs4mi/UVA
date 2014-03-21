import java.math.*;
import java.util.*;


public class Main {
	static ArrayList<BigInteger> f = new ArrayList<BigInteger>();
	static void Fibonacci(BigInteger a,BigInteger b,long count,int n){
	    f.add(a);
	    if(count < n)
	        Fibonacci(b,a.add(b),++count,n);
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		BigInteger x = new BigInteger("1");
		BigInteger y = new BigInteger("2");
		Fibonacci(x,y,0,60);
		int n;
		while(sc.hasNext()){
			n = sc.nextInt();
			if(n == 0) break;
			
			System.out.println(f.get(n-1));
		}
		sc.close();
	}
}
