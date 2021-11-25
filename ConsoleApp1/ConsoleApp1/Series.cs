using System;

namespace lab5
{
	class Series
	{
		 int _start;
		 int _finish;

		Function[] f;

        public Series(int start, int finish)
		{
			_start = start;
			_finish = finish;
		
			f = new Function[(finish - start + 1) * 3];//массив указателей на обЪекты Function

			int a, b, c, a1, b1, a2; // коэффициенты

			Console.WriteLine("Введите коэффициенты для фунции Эллипс:");
			a1 = Convert.ToInt32(Console.ReadLine());
			b1 = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine($"y={b1}*sqrt(1-(x^2/{a1}^2)");
		

			Console.WriteLine("Введите коэффициенты для фунции Парабола:");
			a2 = Convert.ToInt32(Console.ReadLine());
			b = Convert.ToInt32(Console.ReadLine());
			c = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine($"y={a2}x^2 + {b}x + {c}");
			

			Console.WriteLine("Введите коэффициент для фунции Гипербола:");
			a = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine($"y={a}/x \n");
	

			for (int i = 0; i<(finish - start + 1) * 3; i++)
			{
				Console.WriteLine();

				f[i] = new Ellipse(a1, _start, b1);
                f[i].FunctionValue();
				i++;

				f[i] = new Parabola(a2, _start, b, c);
				f[i].FunctionValue();
				i++;

				f[i] = new Hiperbola(a, _start);
				f[i].FunctionValue();

				Console.WriteLine();

				_start++;
			}
		}
    }
}
