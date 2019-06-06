using System;
namespace Marishka {
public class Test {
		public static void Main() {
			int a = 1;
			int b = 4;
			int c = 4;
			double x1; double x2;
			int D;
			
			if(a == 0){
				Console.WriteLine("Коэффицент при второй степени ноль!");
			} else {
				D = b*b - 4*a*c;
				if(D > 0) {
				x1 = ((-1 * b) + (-1 * Math.Sqrt(D))) / 2 * a;
				Console.WriteLine("x1 = " + x1);
				x2 = ((-1 * b) - (-1 * Math.Sqrt(D))) / 2 * a;
				Console.WriteLine("x2 = " + x2); 
					
				} else if (D == 0) {
					x1 = (-1 * b) / (2 * a);
				    Console.WriteLine("x = " + x1);
				} else {
					Console.WriteLine("Дискриминант меньше нуля, корней нет.");
				}
			}
		}
	}
}
