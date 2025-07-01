#pragma once
#include "UserSession.h"
#include "MyClassesUs.h"
#include "entclass.h"

namespace nevelly {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class tmenu : public System::Windows::Forms::Form
    {
    public:
        tmenu(void)
        {
            InitializeComponent();
        }

    protected:
        ~tmenu()
        {
            if (components)
                delete components;
        }

    private:
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tmenu::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();

            // panel1
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(237, 202);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(247, 238);
            this->panel1->TabIndex = 5;

            // label1
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12,
                static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
            this->label1->ForeColor = System::Drawing::Color::LightGray;
            this->label1->Location = System::Drawing::Point(21, 95);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(204, 27);
            this->label1->TabIndex = 1;
            this->label1->Text = L"доступные классы";
            this->label1->Click += gcnew System::EventHandler(this, &tmenu::label1_Click);

            // pictureBox1
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(29, 112);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1059, 397);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;

            // panel2
            this->panel2->BackColor = System::Drawing::Color::Transparent;
            this->panel2->Controls->Add(this->label2);
            this->panel2->Location = System::Drawing::Point(632, 202);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(247, 238);
            this->panel2->TabIndex = 6;

            // label2
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12,
                static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
            this->label2->ForeColor = System::Drawing::Color::LightGray;
            this->label2->Location = System::Drawing::Point(45, 95);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(154, 27);
            this->label2->TabIndex = 1;
            this->label2->Text = L"войти в класс";
            this->label2->Click += gcnew System::EventHandler(this, &tmenu::label2_Click);

            // label3
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold));
            this->label3->ForeColor = System::Drawing::Color::LightGray;
            this->label3->Location = System::Drawing::Point(12, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(122, 40);
            this->label3->TabIndex = 7;
            this->label3->Text = L"nevelly";

            // tmenu
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1134, 707);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->pictureBox1);
            this->Name = L"tmenu";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"tmenu";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

   private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
       entclass^ t2Form = gcnew entclass();
       t2Form->Show();
       this->Hide();
   }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
        MyClassesUs^ Form1 = gcnew MyClassesUs();
        Form1->Show();
        this->Hide();
    }
    };
}