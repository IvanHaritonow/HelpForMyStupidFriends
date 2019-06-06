using System;
namespace Marishka {
public class Test {
		public static void Main() {
			int numberDays;
			Console.WriteLine("Введите номер дня недели");
			numberDays = Convert.ToInt32(Console.ReadLine());
			if(numberDays < 1 || numberDays > 7) {
				Console.WriteLine("Дней в неделе - семь!");
			} else if(numberDays == 6) {
				Console.WriteLine("Суббота!");
			} else if(numberDays == 7) {
				Console.WriteLine("Воскресенье!");
			} else {
				Console.WriteLine("Рабочий день");
			}
		}
	}
}
