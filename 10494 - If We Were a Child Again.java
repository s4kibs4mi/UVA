import java.math.*;
import java.util.*;
import java.io.*;

public class Main {
	public static void main(String args[]){
		BigInteger x , y;
		String s;
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			x = sc.nextBigInteger();
			s = sc.next();
			y = sc.nextBigInteger();
			if(s.equals("/"))
				System.out.println(x.divide(y));
			else System.out.println(x.mod(y));
		}
		sc.close();
	}
}
