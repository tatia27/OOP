using System;

namespace lab5
{
    class Ellipse: Function
    {
        double b;
		public Ellipse(double _a, double _x, double _b) : base (_a, _x)
		{
			b = _b;
		}

		public override void FunctionValue()
		{
			try
			{
				if (a == 0)
				{
					throw new Exception ("На 0 делить нельзя!");
				}

				y = (b * (Math.Sqrt(Math.Abs(1 - ((x * x) / (a * a))))));
				Console.WriteLine($"Эллипс: x= {x}  y= {y}");
			}
			catch (Exception exc)
			{
				Console.WriteLine($"Эллипс: {exc.Message}");

			}

		}
	}
}
