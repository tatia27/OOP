using System;

namespace lab5
{
    class ConsoleInteractor
    {
        public void Run()
        {
            int start, finish, flag = 1;

            while (flag == 1)
            {


                Console.WriteLine("Введите интервал");
                start = Convert.ToInt32(Console.ReadLine());
                finish = Convert.ToInt32(Console.ReadLine());


                if (finish < start)

                {
                    int temp1 = finish;
                    finish = start;
                    start = temp1;
                }

                else if (finish == start)

                {
                    Console.WriteLine("Некорректный интервал. Если хотите ввести интервал заново нажмите 1. Если завершить - 0.");

                    flag = Convert.ToInt32(Console.ReadLine());

                }

                if (finish > start)
                {
                    Series s = new(start, finish);
                    Console.WriteLine("Если хотите продолжить нажмите 1. Если завершить - 0.");
                    flag = Convert.ToInt32(Console.ReadLine());
                }
            }
        }
    }
}
