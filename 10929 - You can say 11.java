import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		BigInteger x;
		String y;
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine()){
			y = sc.nextLine();
			x = new BigInteger(y);
			if(x.equals(BigInteger.ZERO))
				break;
			if(x.mod(new BigInteger("11")).equals(BigInteger.ZERO))
				System.out.println(y + " is a multiple of 11.");
			else System.out.println(y + " is not a multiple of 11.");
		}
	}
}
