using System;

namespace lab5
{
    class Hiperbola : Function
    {
        public Hiperbola(double _a, double _x) : base(_a, _x) { }
        public override void FunctionValue()
        {
            try
            {
                if (x == 0)
                {
                    throw new Exception("На 0 делить нельзя!");
                }
                y = a / x;

                Console.WriteLine($"Гипербола: x= {x}  y= {y}");

            }
            catch (Exception exc)
            {

                Console.WriteLine($"Гипербола: {exc.Message}");

            }

        }
    }
}