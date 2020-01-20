using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LV6.Geometry
{
    class Trokut
    {
        private double a;
        private double b;
        private double c;

        public double A
        {
            get
            {
                return a;
            }

            set
            {
                a = value;
            }
        }

        public double B
        {
            get
            {
                return b;
            }

            set
            {
                b = value;
            }
        }

        public double C
        {
            get
            {
                return c;
            }

            set
            {
                c = value;
            }
        }

        public Trokut()
        {
            A = 0; B = 0; C = 0;
        }
        public Trokut(double a, double b, double c)
        {
            if (IsLegal())
            {
                this.a = a;
                this.b = b;
                this.c = c;
            }
            else
            {
                throw new Exception("Nemoguće stvoriti trokut!");
            }
        }

        internal bool IsLegal()
        {
            if (a >= b + c || b >= a + c || c >= b + a || a <= 0 || b <= 0 || c <= 0)
                return false;
            return true;

        }

        public double Povrsina()
        {
            double s = (A + B + C) / 2;
            return Math.Sqrt(s * (s - A) * (s - B) * (s - C));
        }
        public double Opseg()
        {
            return A + B + C;
        }

        public bool JePravokutan()
        {
            return (b * b == a * a + c * c || a * a == b * b + c * c || c * c == a * a + b * b);
        }

    }
}
