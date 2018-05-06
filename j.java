import java.util.*;
import java.math.*;


class j{

	public static void main(String[] args){

		BigInteger br=BigInteger.ONE;

		for(int i=1;i<=25;i++)br=br.multiply(BigInteger.valueOf(i));

			System.out.println(br);

	}
}