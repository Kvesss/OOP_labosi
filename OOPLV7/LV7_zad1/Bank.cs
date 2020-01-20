using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad1
{
    class Bank:IPayable
    {
        double iznos, maxMinus;
        string ime;

        public Bank(double iznos, double maxMinus, string ime)
        {
            this.iznos = iznos;
            this.maxMinus = maxMinus;
            this.ime = ime;
        }

        public double getIznos()
        {
            return iznos;

        }

        public void uplatiIznos(double x)
        {
            iznos += x;
        }

        public void umanjiIznos(double x)
        {
            if (iznos - x > maxMinus)
                iznos -= x;
            else
                Console.WriteLine("Presli ste limit");
        }
    }
}
