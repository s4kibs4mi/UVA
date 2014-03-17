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
			int sum = 0;
			BigInteger resultAndRemainder[];
			do {
		        resultAndRemainder = r.divideAndRemainder(BigInteger.TEN);
		        sum += Math.abs(resultAndRemainder[1].intValue());
		        r = resultAndRemainder[0];
		    } while (r.compareTo(BigInteger.ZERO) != 0);
			System.out.println(sum);
		}
		sc.close();
	}
}
