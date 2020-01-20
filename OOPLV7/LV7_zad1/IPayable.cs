using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad1
{
    interface IPayable
    {
        double getIznos();
        void uplatiIznos(double x);
        void umanjiIznos(double x);
    }
}
