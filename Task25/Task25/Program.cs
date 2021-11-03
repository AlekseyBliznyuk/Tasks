using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task25
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y, X, Y, i = 0, j = 0, rest = 1, resta = 1;
            Console.WriteLine("Введите две бинарные последовательности: ");
            x = Convert.ToInt32(Console.ReadLine());
            y = Convert.ToInt32(Console.ReadLine());


            X = x;
            Y = y;
            while (X >= 1 && rest <= 1 && Y >= 1 && resta <= 1)
            {
                rest = X % 10;
                X = X / 10;
                i = i + 1;
                resta = Y % 10;
                Y = Y / 10;
                j = j + 1;
                if (resta > 1 || rest > 1)
                {
                    Console.WriteLine("Одна или несколько из последовательностей не бинарны!");
                }
            }

            x.ToString();
            y.ToString();
            

            if (x == y)
            {
                Console.WriteLine("Бинарные последовательности: ");
                Console.WriteLine(x);
                Console.WriteLine(y);

            }
            Console.ReadKey();
        }
    }
}
