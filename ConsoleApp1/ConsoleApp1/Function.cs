
namespace lab5
{
    abstract class Function
    {
        protected double a = 0;
        protected double x = 0;
        protected double y = 0;

        public Function(double _a, double _x) // Конструктор
        {
	        a = _a;
	        x = _x;
        }

        abstract public void FunctionValue();

    }
        
 }

  


  
