using System;
class HelloWorld {
  static void Main() {
    for(double i = 2; i < 10; i+=0.5) {
        Console.WriteLine(Convert.ToDouble(Math.Pow(3,i)));
    }
  }
}
