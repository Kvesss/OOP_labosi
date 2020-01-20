using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad1
{
    class Mobilni:IPayable
    {
        int broj;
        double stanje, cijenaPoruke;

        public Mobilni(int broj, double stanje, double cijenaPoruke)
        {
            this.broj = broj;
            this.stanje = stanje;
            this.cijenaPoruke = cijenaPoruke;
        }

        public double getIznos()
        {
            return stanje;
        }

    
        public void uplatiIznos(double x)
        {
            stanje += x;
        }

        public void umanjiIznos(double x)
        {
            stanje -= x;
        }
    }
}
