using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IksOks
{
    public partial class Form1 : Form
    {
		/*Napravite igru križić-kružić (iks-oks) korištenjem znanja stečenih na ovoj
		laboratorijskoj vježbi. Omogućiti pokretanje igre, unos imena dvaju igrača, ispis
		koji igrač je trenutno na potezu, igranje igre s iscrtavanjem križića i kružića na
		odgovarajućim mjestima te ispis dijaloga s porukom o pobjedi, odnosno
		neriješenom rezultatu kao i praćenje ukupnog rezultata.*/
        bool potez = true;
        bool trenutni = true;
        int wins1=0, wins2=0;
        int limit = 3;
        public void Restart()

        {
            button1.Text = "";
            button2.Text = "";
            button3.Text = "";
            button4.Text = "";
            button5.Text = "";
            button6.Text = "";
            button7.Text = "";
            button8.Text = "";
            button9.Text = "";            
        }

        public bool Pobjeda(string s)
        {
            if (button1.Text == s && button2.Text == s && button3.Text == s )
                return true;
            if (button4.Text == s && button5.Text == s && button6.Text == s )
                return true;
            if (button7.Text == s && button8.Text == s && button9.Text == s )
                return true;
            if (button1.Text == s && button4.Text == s && button7.Text == s )
                return true;
            if (button2.Text == s && button5.Text == s && button8.Text == s )
                return true;
            if (button3.Text == s && button6.Text == s && button9.Text == s )
                return true;
            if (button1.Text == s && button5.Text == s && button9.Text == s )
                return true;
            if (button3.Text == s && button5.Text == s && button7.Text == s )
                return true;
            else
                return false;
        }

        public bool PuniProzori()
        {
            if (button1.Text != "" && button2.Text != "" && button3.Text != "" && button4.Text != "" &&
                button5.Text != "" && button6.Text != "" && button7.Text != "" && button8.Text != "" &&
                button9.Text != "")
                return true;
            else
                return false;
        }
        public void ProvjeriKraj()
        {
            if (Pobjeda("X"))
            {
                wins1++;
                progressBar1.Value++;
                MessageBox.Show(label1.Text+"pobjeduje rundu!");
                if (wins1 == limit)
                {
                    MessageBox.Show("POBJEDA!\n" + label1.Text.ToUpper());
                    progressBar1.Value = 0;
                    progressBar2.Value = 0;
                    wins1 = 0;
                    wins2 = 0;
                }
                if (trenutni)
                    potez = false;
                else
                    potez = true;
                trenutni = !trenutni;
                Restart();
            }
            else if (Pobjeda("O"))
            {
                wins2++;
                progressBar2.Value++;
                MessageBox.Show(label2.Text+" pobjeduje rundu!");
                if (wins2 == limit)
                {
                    MessageBox.Show("POBJEDA!\n" + label2.Text.ToUpper());
                    progressBar1.Value = 0;
                    progressBar2.Value = 0;
                    wins1 = 0;
                    wins2 = 0;
                }
                if (trenutni)
                    potez = false;
                else
                    potez = true;
                trenutni = !trenutni;
                Restart();
            }
            else if (PuniProzori())
            {
                MessageBox.Show("Nerijeseno!\nKraj runde!");
                if (trenutni)
                    potez = false;
                else
                    potez = true;
                trenutni = !trenutni;
                Restart();
            }
            

        }

        public Form1()
        {
            InitializeComponent();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (potez)
                button1.Text = "X";
            else
                button1.Text = "O";
            ProvjeriKraj();
            potez = !potez;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (potez)
                button2.Text = "X";
            else
                button2.Text = "O";
            ProvjeriKraj();
            potez = !potez;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (potez)
                button3.Text = "X";
            else
                button3.Text = "O";
            ProvjeriKraj();
            potez = !potez;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (potez)
                button4.Text = "X";
            else
                button4.Text = "O";
            ProvjeriKraj();

            potez = !potez;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (potez)
                button5.Text = "X";
            else
                button5.Text = "O";
            ProvjeriKraj();

            potez = !potez;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (potez)
                button6.Text = "X";
            else
                button6.Text = "O";
            ProvjeriKraj();

            potez = !potez;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (potez)
                button7.Text = "X";
            else
                button7.Text = "O";
            ProvjeriKraj();

            potez = !potez;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (potez)
                button8.Text = "X";
            else
                button8.Text = "O";
            ProvjeriKraj();

            potez = !potez;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (potez)
                button9.Text = "X";
            else
                button9.Text = "O";
            ProvjeriKraj();

            potez = !potez;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (potez)
            {
                label1.Text = textBox1.Text;
                textBox1.Clear();
                potez = !potez;
            }
            else
            {
                label2.Text = textBox1.Text;
                textBox1.Clear();
                potez = !potez;
            }
        }

        private void button11_Click(object sender, EventArgs e)
        {
            limit = int.Parse(textBox2.Text);
            progressBar1.Maximum = limit;
            progressBar2.Maximum = limit;
            MessageBox.Show("Igra se do " + limit);
            label3.Text = "Igra do " + limit.ToString();
            textBox2.Clear();
        }

        private void restartToolStripMenuItem_Click(object sender, EventArgs e)
        {
            progressBar1.Value = 0;
            progressBar2.Value = 0;
            wins1 = 0;
            wins2 = 0;
            Restart();
            MessageBox.Show("Restart!\nNova igra!");
        }
    }
}
