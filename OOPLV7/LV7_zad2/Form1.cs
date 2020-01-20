using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace zad2
{
    public partial class Form1 : Form
    {
        Graphics g;
        Pen p;
        IDrawable drawable;

        public Form1()
        {
            InitializeComponent();
            g = pbDrawing.CreateGraphics();
            p = new Pen(Color.Magenta, 5f);
            drawable = new Circle();

        }

        private void pbDrawing_Click(object sender, EventArgs e)
        {

        }

        private void pbDrawing_MouseUp(object sender, MouseEventArgs e)
        {
            drawable.Draw(p, g, e.X, e.Y);
        }

        private void color_CheckedChanged(object sender, EventArgs e)
        {
            if (rbRed.Checked)
                p.Color = Color.Red;
            else if (rbBlue.Checked)
                p.Color = Color.Blue;
            else if (rbGreen.Checked)
                p.Color = Color.Green;
            else if (rbOrange.Checked)
                p.Color = Color.Orange;
        }

        private void Shapes_CheckedChanged(object sender, EventArgs e)
        {
            if (rbCircle.Checked)
                drawable = new Circle();
            else if (rbRectangle.Checked)
                drawable = new Rectangle();
            else if (rbTriangle.Checked)
                drawable = new Triangle();
            else if (rbSquare.Checked)
                drawable = new Square();
                
                
            

        }

        private void hScrollBar1_Scroll(object sender, ScrollEventArgs e)
        {
            int velicina = hScrollBar1.Value%100/10 +1;
            p.Width=velicina;
            labelScroll.Text = "Debljina: " + velicina.ToString();
        }
    }
}
