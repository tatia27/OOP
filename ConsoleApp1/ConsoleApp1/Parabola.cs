using System;

namespace lab5
{
    class Parabola : Function
    {
         double c = 0;
		 double b = 0;

		public Parabola(double _a, double _x, double _b, double _c) :base (_a, _x)
		{
			b = _b;
			c = _c;
		}

		public override void FunctionValue()
		{
			try
			{
				if (a == 0)
				{
					throw new Exception("Первый коэффициент не может равняться 0 !");
				}
				y = a * x * x + b * x + c;
				Console.WriteLine($"Парабола: x= {x}  y= {y}");
			}
			catch (Exception exc) 
			{
				Console.WriteLine($"Парабола: {exc.Message}");

			}
		}
	}
}
