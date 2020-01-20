using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad1
{
    class Program
    {
        static void Main(string[] args)
        {
            List<IPayable> lista = new List<IPayable>();
            lista.Add(new Mobilni(0955813033, 55, 0.50));
            lista.Add(new Mobilni(0977655590, 20, 0.35));
            lista.Add(new Bank(3500, -100, "David"));
            lista.Add(new Bank(1500, -200, "Laura"));
            Random generator = new Random();

            foreach (IPayable i in lista)
            {
                Console.WriteLine("Stanje na racunu je: " + i.getIznos() + "\n");
            }
            lista[0].umanjiIznos(generator.Next(1, 11));
            lista[1].umanjiIznos(generator.Next(1, 11));
            lista[2].umanjiIznos(generator.Next(1, 11));
            lista[3].umanjiIznos(generator.Next(1, 11));
            foreach (IPayable i in lista)
            {
                Console.WriteLine("Stanje na racunu je: " + i.getIznos() + "\n");
            }
            lista[0].uplatiIznos(generator.Next(10, 101));
            lista[1].uplatiIznos(generator.Next(10, 101));
            lista[2].uplatiIznos(generator.Next(10, 101));
            lista[3].uplatiIznos(generator.Next(10, 101));
            foreach (IPayable i in lista)
            {
                Console.WriteLine("Stanje na racunu je: " + i.getIznos() + "\n");
            }

            Console.Read();
        }
    }
}
