
import java.util.*;
import java.math.*;

public class Main{

	
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int t=s.nextInt();
		while(t-->0){
			BigInteger b=BigInteger.ONE;

			
			int n=s.nextInt();

			for(int i=2;i<=n;i++){
				b.multiply(BigInteger.valueOf(i));
			}
			System.out.println(b);
		}
	}
}