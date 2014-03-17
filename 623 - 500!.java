import java.math.*;
import java.util.*;

public class Main {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		BigInteger a ,r;
		int n;
		while(sc.hasNextInt()){
			n = sc.nextInt();
			a = new BigInteger("1");
			r = new BigInteger("1");
			int i = 1;
			while(i <= n){
				r = r.multiply(a);
				a = a.add(new BigInteger("1"));
				i++;
			}
			System.out.println(n + "!");
			System.out.println(r);
		}
		sc.close();
	}
}
