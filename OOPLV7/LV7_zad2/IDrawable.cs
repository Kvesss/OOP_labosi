using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zad2
{
    interface IDrawable
    {
        void Draw(Pen p,Graphics g,int x,int y);
    }
}
