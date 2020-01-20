using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad2
{
    class Rectangle:IDrawable
    {
        

       

        public void Draw(System.Drawing.Pen p, System.Drawing.Graphics g, int x, int y)
        {
            Point[] points = new Point[]{
            new Point (x,y),
            new Point (x+15,y),
            new Point (x+15,y+7),
            new Point (x,y+7),

        };
            g.DrawPolygon(p, points);
        }
    }
}
