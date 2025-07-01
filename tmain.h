#pragma once
#include "t2menu.h"

namespace nevelly {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class tmain : public System::Windows::Forms::Form
    {
    public:
        tmain(void)
        {
            InitializeComponent();
            LoadUserData();
        }

    protected:
        ~tmain()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::Label^ label10;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Button^ button1;

        System::ComponentModel::Container^ components;

#pragma region 
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tmain::typeid));
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::LightGray;
            this->label3->Location = System::Drawing::Point(555, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(35, 50);
            this->label3->TabIndex = 28;
            this->label3->Text = L"|";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::LightGray;
            this->label1->Location = System::Drawing::Point(376, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(173, 50);
            this->label1->TabIndex = 26;
            this->label1->Text = L"главная";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::DarkGray;
            this->label4->Location = System::Drawing::Point(596, 14);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(142, 44);
            this->label4->TabIndex = 29;
            this->label4->Text = L"классы";
            this->label4->Click += gcnew System::EventHandler(this, &tmain::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::LightGray;
            this->label5->Location = System::Drawing::Point(12, 9);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(122, 40);
            this->label5->TabIndex = 30;
            this->label5->Text = L"nevelly";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(19, 90);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1085, 472);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 34;
            this->pictureBox2->TabStop = false;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::Gainsboro;
            this->label10->Location = System::Drawing::Point(367, 191);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(69, 30);
            this->label10->TabIndex = 39;
            this->label10->Text = L"роль";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(90, 132);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(210, 264);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 31;
            this->pictureBox1->TabStop = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::LightGray;
            this->label2->Location = System::Drawing::Point(367, 132);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(70, 30);
            this->label2->TabIndex = 33;
            this->label2->Text = L"ФИО";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Gainsboro;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(90, 402);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(212, 25);
            this->button1->TabIndex = 32;
            this->button1->Text = L"изменить фото";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &tmain::button1_Click);
            // 
            // tmain
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"tmain";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"tmain";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        void LoadUserData()
        {
            label2->Text = UserSession::CurrentUserFIO;
            label10->Text = UserSession::CurrentRole;
            String^ photoFile = UserSession::CurrentUserFIO + "_photo.jpg";
            if (File::Exists(photoFile))
            {
                pictureBox1->Image = Image::FromFile(photoFile);
            }
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
            openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp";

            if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                try
                {
                    pictureBox1->Image = Image::FromFile(openFileDialog->FileName);
                    String^ photoFile = UserSession::CurrentUserFIO + "_photo.jpg";
                    pictureBox1->Image->Save(photoFile, System::Drawing::Imaging::ImageFormat::Jpeg);
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Ошибка при загрузке изображения: " + ex->Message, "Ошибка");
                }
            }
        }

        System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
        {
            t2menu^ t2Form = gcnew t2menu();
            t2Form->Show();
            this->Hide();
        }
    };
}