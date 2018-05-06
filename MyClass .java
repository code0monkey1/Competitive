/*input
3 6
3 2
3 2
2 1
1 3
2 1
2 1
2
2 1
1 2
*/
import java.util.*;

public class MyClass {
	
	public static void main(String[] args){

		Scanner s=new Scanner(System.in);

		while(s.hasNext()){
			int i=s.nextInt();
			System.out.print(i+" ");
		}

		System.out.println("Hello Java");
	}
}