using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad2
{
    class Circle:IDrawable
    {
        private int r = 20;

        public void Draw(System.Drawing.Pen p, System.Drawing.Graphics g, int x, int y)
        {
            g.DrawEllipse(p,x,y,r,r);
        }
    }
}
