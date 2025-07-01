#pragma once
#include "tmenu.h"
#include "UserSession.h"

namespace nevelly {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Text;

    public ref class umain : public System::Windows::Forms::Form
    {
    public:
        umain(void)
        {
            InitializeComponent();
            LoadUserData();
        }

    protected:
        ~umain()
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
        System::Windows::Forms::Label^ label10;
        System::Windows::Forms::Label^ label9;
        System::Windows::Forms::Label^ label8;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::PictureBox^ pictureBox2;

        System::ComponentModel::Container^ components;

#pragma region
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(umain::typeid));
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::LightGray;
            this->label3->Location = System::Drawing::Point(506, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(35, 50);
            this->label3->TabIndex = 25;
            this->label3->Text = L"|";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 19.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::LightGray;
            this->label1->Location = System::Drawing::Point(340, 17);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(170, 42);
            this->label1->TabIndex = 23;
            this->label1->Text = L"профиль";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 19.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::LightGray;
            this->label4->Location = System::Drawing::Point(547, 17);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(138, 42);
            this->label4->TabIndex = 26;
            this->label4->Text = L"классы";
            this->label4->Click += gcnew System::EventHandler(this, &umain::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::LightGray;
            this->label5->Location = System::Drawing::Point(12, 19);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(122, 40);
            this->label5->TabIndex = 27;
            this->label5->Text = L"nevelly";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::Gainsboro;
            this->label10->Location = System::Drawing::Point(361, 475);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(69, 30);
            this->label10->TabIndex = 47;
            this->label10->Text = L"роль";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->ForeColor = System::Drawing::Color::Gainsboro;
            this->label9->Location = System::Drawing::Point(361, 369);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(173, 30);
            this->label9->TabIndex = 46;
            this->label9->Text = L"средний балл";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->ForeColor = System::Drawing::Color::Gainsboro;
            this->label8->Location = System::Drawing::Point(364, 313);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(178, 30);
            this->label8->TabIndex = 45;
            this->label8->Text = L"предпочтения";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->ForeColor = System::Drawing::Color::Gainsboro;
            this->label7->Location = System::Drawing::Point(364, 257);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(445, 30);
            this->label7->TabIndex = 44;
            this->label7->Text = L"предпочтения в качствах напарника:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::LightGray;
            this->label2->Location = System::Drawing::Point(364, 136);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(70, 30);
            this->label2->TabIndex = 42;
            this->label2->Text = L"ФИО";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Gainsboro;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(87, 406);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(212, 25);
            this->button1->TabIndex = 41;
            this->button1->Text = L"изменить фото";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(87, 136);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(210, 264);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 40;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(16, 94);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1085, 472);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 43;
            this->pictureBox2->TabStop = false;
            // 
            // umain
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"umain";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"umain";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
            this->button1->Click += gcnew System::EventHandler(this, &umain::button1_Click);
            this->label4->Click += gcnew System::EventHandler(this, &umain::label4_Click);
            this->button1->Click += gcnew System::EventHandler(this, &umain::button1_Click);
            this->label4->Click += gcnew System::EventHandler(this, &umain::label4_Click);
        }
#pragma endregion

    private:
        void LoadUserData()
        {
            label2->Text = UserSession::CurrentUserFIO;
            label10->Text = UserSession::CurrentRole;
            String^ filename = UserSession::CurrentUserFIO + ".txt";
            if (File::Exists(filename))
            {
                try
                {
                    StreamReader^ sr = gcnew StreamReader(filename, Encoding::Default);
                    sr->ReadLine();
                    sr->ReadLine();
                    String^ interests = sr->ReadLine();
                    if (!String::IsNullOrEmpty(interests))
                        label7->Text = "интересы: " + interests;
                    String^ averageScore = sr->ReadLine();
                    if (!String::IsNullOrEmpty(averageScore))
                        label9->Text = "средний балл: " + averageScore;
                    String^ preferences = sr->ReadLine();
                    if (!String::IsNullOrEmpty(preferences))
                        label8->Text = "предпочтения: " + preferences;

                    sr->Close();
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Ошибка чтения файла данных: " + ex->Message, "Ошибка");
                }
            }
            String^ photoFile = UserSession::CurrentUserFIO + "_photo.jpg";
            if (File::Exists(photoFile))
            {
                try
                {
                    pictureBox1->Image = Image::FromFile(photoFile);
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Ошибка загрузки фото: " + ex->Message, "Ошибка");
                }
            }
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
            openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp";

            if (openFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
            {
                try
                {
                    Image^ newImage = Image::FromFile(openFileDialog->FileName);
                    pictureBox1->Image = newImage;
                    String^ photoFile = UserSession::CurrentUserFIO + "_photo.jpg";
                    newImage->Save(photoFile, Imaging::ImageFormat::Jpeg);
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Ошибка при изменении фото: " + ex->Message,
                        "Ошибка",
                        MessageBoxButtons::OK,
                        MessageBoxIcon::Error);
                }
            }
        }

        System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
        {
            tmenu^ tForm = gcnew tmenu();
            tForm->Show();
            this->Hide();
        }
    };
}