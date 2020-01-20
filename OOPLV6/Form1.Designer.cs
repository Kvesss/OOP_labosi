namespace LV6
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBoxA = new System.Windows.Forms.TextBox();
            this.textBoxB = new System.Windows.Forms.TextBox();
            this.Quit = new System.Windows.Forms.Button();
            this.Provjeri = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.textBoxC = new System.Windows.Forms.TextBox();
            this.Input = new System.Windows.Forms.Button();
            this.labelO = new System.Windows.Forms.Label();
            this.labelP = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(53, 32);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(14, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "A";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(53, 76);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(14, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "B";
            // 
            // textBoxA
            // 
            this.textBoxA.Location = new System.Drawing.Point(122, 32);
            this.textBoxA.Name = "textBoxA";
            this.textBoxA.Size = new System.Drawing.Size(100, 20);
            this.textBoxA.TabIndex = 2;
            this.textBoxA.TextChanged += new System.EventHandler(this.textBoxA_TextChanged);
            // 
            // textBoxB
            // 
            this.textBoxB.Location = new System.Drawing.Point(122, 73);
            this.textBoxB.Name = "textBoxB";
            this.textBoxB.Size = new System.Drawing.Size(100, 20);
            this.textBoxB.TabIndex = 3;
            this.textBoxB.TextChanged += new System.EventHandler(this.textBoxB_TextChanged);
            // 
            // Quit
            // 
            this.Quit.Location = new System.Drawing.Point(239, 311);
            this.Quit.Name = "Quit";
            this.Quit.Size = new System.Drawing.Size(75, 23);
            this.Quit.TabIndex = 4;
            this.Quit.Text = "Quit";
            this.Quit.UseVisualStyleBackColor = true;
            this.Quit.Click += new System.EventHandler(this.Quit_Click);
            // 
            // Provjeri
            // 
            this.Provjeri.Location = new System.Drawing.Point(24, 311);
            this.Provjeri.Name = "Provjeri";
            this.Provjeri.Size = new System.Drawing.Size(75, 23);
            this.Provjeri.TabIndex = 5;
            this.Provjeri.Text = "Provjeri";
            this.Provjeri.UseVisualStyleBackColor = true;
            this.Provjeri.Click += new System.EventHandler(this.Provjeri_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(53, 121);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(14, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "C";
            // 
            // textBoxC
            // 
            this.textBoxC.Location = new System.Drawing.Point(122, 118);
            this.textBoxC.Name = "textBoxC";
            this.textBoxC.Size = new System.Drawing.Size(100, 20);
            this.textBoxC.TabIndex = 7;
            this.textBoxC.TextChanged += new System.EventHandler(this.textBoxC_TextChanged);
            // 
            // Input
            // 
            this.Input.Location = new System.Drawing.Point(134, 171);
            this.Input.Name = "Input";
            this.Input.Size = new System.Drawing.Size(75, 23);
            this.Input.TabIndex = 8;
            this.Input.Text = "Unesi";
            this.Input.UseVisualStyleBackColor = true;
            this.Input.Click += new System.EventHandler(this.Input_Click);
            // 
            // labelO
            // 
            this.labelO.AutoSize = true;
            this.labelO.Location = new System.Drawing.Point(239, 244);
            this.labelO.Name = "labelO";
            this.labelO.Size = new System.Drawing.Size(36, 13);
            this.labelO.TabIndex = 10;
            this.labelO.Text = "opseg";
            // 
            // labelP
            // 
            this.labelP.AutoSize = true;
            this.labelP.Location = new System.Drawing.Point(92, 243);
            this.labelP.Name = "labelP";
            this.labelP.Size = new System.Drawing.Size(47, 13);
            this.labelP.TabIndex = 11;
            this.labelP.Text = "povrsina";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(337, 367);
            this.Controls.Add(this.labelP);
            this.Controls.Add(this.labelO);
            this.Controls.Add(this.Input);
            this.Controls.Add(this.textBoxC);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.Provjeri);
            this.Controls.Add(this.Quit);
            this.Controls.Add(this.textBoxB);
            this.Controls.Add(this.textBoxA);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "povrsina";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBoxA;
        private System.Windows.Forms.TextBox textBoxB;
        private System.Windows.Forms.Button Quit;
        private System.Windows.Forms.Button Provjeri;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBoxC;
        private System.Windows.Forms.Button Input;
        private System.Windows.Forms.Label labelO;
        private System.Windows.Forms.Label labelP;
    }
}

