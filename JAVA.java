

public class JAVA{

	public static void main(String[] args) {


		Person p1= new Person();
		Person p2= new Person();
		p1.setAge(12);
		p2.setAge(2);
		System.out.println( p1.compare(p2));

		System.out.println("Hello this is a test");
	}
}

class Person {
	private int  age;

	boolean compare(Person p){
		return p.age>this.age;
	}
	void setAge(int age){
		this.age=age;
	}

}
