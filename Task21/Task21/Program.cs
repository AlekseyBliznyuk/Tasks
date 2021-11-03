using System;
using System.Collections.Generic;
using System.Linq;
namespace Task21
{
    class Program
    {
        static List<int> list;
        static void Main(string[] args)
        {
            Random r = new Random();
            list = Enumerable.Range(0, 10).Select(n => r.Next(1, 10)).ToList();

            foreach (int i in list)
                Console.Write(i + " ");
            Console.WriteLine();

            foreach (int i in Procedure())
                Console.Write(i + " ");
            Console.ReadKey();
        }
        static List<int> Procedure() // т.е. метод
        {
            int max = 0, index = 1;
            List<int> longest = new List<int>();
            while (index < list.Count - 1)
            {
                List<int> current = new List<int>();
                for (int i = index; i < list.Count; i++)
                {
                    if (list[i] % list[i - 1] == 0)
                        current.Add(list[i]);
                    else
                    {
                        index = i + 1;
                        if (max < current.Count)
                        {
                            max = current.Count;
                            longest = current;
                        }
                        break;
                    }
                }
            }
            return longest;
        }
    }
}
