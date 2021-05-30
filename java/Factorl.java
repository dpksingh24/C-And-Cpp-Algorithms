import java.util.Scanner;

class Factorl {
	public static void main(String arg[]) {
		long n, fact = 1;

		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number:");

		n = sc.nextLong();

		int i = 1;
		while (i <= n) {
			fact = fact * i;
			i++;
		}
		System.out.println("fact is  = " + fact);
	}
}