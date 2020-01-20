using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad2
{
    class Square:IDrawable
    {

       public void Draw(System.Drawing.Pen p, System.Drawing.Graphics g, int x, int y){
            Point[] points = new Point[]{
            new Point (x,y),
            new Point (x+12,y),
            new Point (x+12,y+12),
            new Point (x,y+12),

        };
            g.DrawPolygon(p, points);
        }
    }
}
