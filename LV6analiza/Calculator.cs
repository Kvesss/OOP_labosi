using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Calculator : Form
    {
        /*Napravite aplikaciju znanstveni kalkulator koja će imati funkcionalnost
        znanstvenog kalkulatora, odnosno implementirati osnovne (+,-,*,/) i barem 5
        naprednih (sin, cos, log, sqrt...) operacija. */
   
        double a, b, result;
        

        private void Exit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a) && double.TryParse(textBox2.Text, out b))
            {
                result = a + b;
                textBox1.Clear();
                textBox2.Clear();
                label1.Text = result.ToString();
                label1.Show();
            }
            else
                MessageBox.Show("Invalid input !");



        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a) && double.TryParse(textBox2.Text, out b))
            {
                result = a - b;
                textBox1.Clear();
                textBox2.Clear();
                label1.Text = result.ToString();
            }
            else
                MessageBox.Show("Invalid input !");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a) && double.TryParse(textBox2.Text, out b))
            {
                result = a * b;
                textBox1.Clear();
                textBox2.Clear();
                label1.Text = result.ToString();
            }
            else
                MessageBox.Show("Invalid input !");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a) && double.TryParse(textBox2.Text, out b)&& b!=0)
            {
                result = a / b;
                textBox1.Clear();
                textBox2.Clear();
                label1.Text = result.ToString();
            }
            else
                MessageBox.Show("Invalid input !");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a))
            {

                label1.Text = Math.Sin(a).ToString();
                textBox1.Clear();
                textBox2.Clear();
            }
            else
                MessageBox.Show("Invalid input !");


        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a))
            {

                label1.Text = Math.Cos(a).ToString();
                textBox1.Clear();
                textBox2.Clear();
            }
            else
                MessageBox.Show("Invalid input !");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a)&& a>=0)
            {

                label1.Text = Math.Sqrt(a).ToString();
                textBox1.Clear();
                textBox2.Clear();
            }
            else
                MessageBox.Show("Invalid input !");
        }
        private void button8_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a)&& a>0)
            {

                label1.Text = Math.Log10(a).ToString();
                textBox1.Clear();
                textBox2.Clear();
            }
            else
                MessageBox.Show("Invalid input !");
        }


        private void button9_Click(object sender, EventArgs e)
        {
            if (double.TryParse(textBox1.Text, out a))
            {

                label1.Text = Math.Abs(a).ToString();
                textBox1.Clear();
                textBox2.Clear();
            }
            else
                MessageBox.Show("Invalid input !");
        }



        private void label1_Click(object sender, EventArgs e)
        {
        }
        public Calculator()
        {
            InitializeComponent();
        }
    }
}
