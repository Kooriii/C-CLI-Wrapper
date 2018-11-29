using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using KooriCLI;

namespace KooriScript
{
    class Program
    {
        static void PrintNumber(int num)
        {
            Console.WriteLine("Number: " + num);
        }


        static void Main(string[] args)
        {
            Entity e = new Entity("Test Object", 20, 15);
            e.Move(5, 10);
            Console.WriteLine(e);
            Console.WriteLine(e.name);
            Console.WriteLine(e.x_position + "  " + e.y_position);

            PrintNumber(1000);

            Console.ReadLine(); // "getchar()"
        }
    }
}
