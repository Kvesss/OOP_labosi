using LV6.Geometry;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LV6
{   
    public partial class Form1 : Form
    {
        Trokut T = new Trokut();
        public Form1()
        {
            InitializeComponent();
        }



        private void Quit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Provjeri_Click(object sender, EventArgs e)
        {
            if (T.JePravokutan())
                MessageBox.Show("Trokut je pravokutan!");
            else
                MessageBox.Show("Trokut nije pravokutan!");
        }

        private void Input_Click(object sender, EventArgs e)
        {
            try {

                T.A = double.Parse(textBoxA.Text);
                T.B = double.Parse(textBoxB.Text);
                T.C = double.Parse(textBoxC.Text);

                if (T.IsLegal() == false) {
                    throw new Exception();
                }

                labelO.Text = T.Povrsina().ToString();
                labelP.Text = T.Opseg().ToString();
            }
            catch (Exception exception)
            {
                MessageBox.Show("Loše uneseno!");
            }
        }

        private void textBoxA_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBoxB_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBoxC_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
