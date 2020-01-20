using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad2
{
    class Triangle:IDrawable
    {

        public void Draw(System.Drawing.Pen p, System.Drawing.Graphics g, int x, int y)
        {
            Point[] points = new Point[]{
                new Point(x,y),
                new Point(x+10,y-10),
                new Point(x-10,y-10),
            };
            g.DrawPolygon(p, points);

        }
    }
}
