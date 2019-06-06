using System;

public class Test {
	public static void Main() {
		double n1;
		double buffered = 0;

		for(int i = 1; i < 6; i++) {
		    n1 = Convert.ToDouble(Console.ReadLine());
		    buffered += n1;
		    Console.WriteLine(buffered / i);
		}
	}
}
