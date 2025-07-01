#pragma once
#include <fstream>
#include <servprov.h>
#include "tmain.h"
#include "UserSession.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include <Wincrypt.h>

namespace nevelly {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Security::Cryptography;
    using namespace System::Text;

    public ref class teachentranse : public System::Windows::Forms::Form
    {
    public:
        teachentranse(void)
        {
            InitializeComponent();
        }

    protected:
        ~teachentranse()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::CheckBox^ checkBox1;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label2;

        System::ComponentModel::Container^ components;

        bool lb2 = true;
        bool lb3 = false;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(teachentranse::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1118, 661);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::LightGray;
            this->label1->Location = System::Drawing::Point(12, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(122, 40);
            this->label1->TabIndex = 3;
            this->label1->Text = L"nevelly";
            // 
            // panel1
            // 
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->checkBox1);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Location = System::Drawing::Point(307, 9);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(508, 625);
            this->panel1->TabIndex = 4;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(85, 475);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(324, 51);
            this->button1->TabIndex = 8;
            this->button1->Text = L"продолжить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &teachentranse::button1_Click);
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->BackColor = System::Drawing::Color::Transparent;
            this->checkBox1->Location = System::Drawing::Point(85, 324);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(140, 20);
            this->checkBox1->TabIndex = 6;
            this->checkBox1->Text = L"показать пароль";
            this->checkBox1->UseVisualStyleBackColor = false;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &teachentranse::checkBox1_CheckedChanged);
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->ForeColor = System::Drawing::Color::DimGray;
            this->textBox3->Location = System::Drawing::Point(85, 360);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(324, 39);
            this->textBox3->TabIndex = 4;
            this->textBox3->Text = L"повтор пароля";
            this->textBox3->Visible = false;
            this->textBox3->Click += gcnew System::EventHandler(this, &teachentranse::textBox3_Click);
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &teachentranse::textBox3_TextChanged);
            this->textBox3->Leave += gcnew System::EventHandler(this, &teachentranse::textBox3_Leave);
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->ForeColor = System::Drawing::Color::DimGray;
            this->textBox2->Location = System::Drawing::Point(85, 269);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(324, 39);
            this->textBox2->TabIndex = 3;
            this->textBox2->Text = L"пароль(не менее 6 символов)";
            this->textBox2->Click += gcnew System::EventHandler(this, &teachentranse::textBox2_Click);
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &teachentranse::textBox2_TextChanged);
            this->textBox2->Leave += gcnew System::EventHandler(this, &teachentranse::textBox2_Leave);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->ForeColor = System::Drawing::Color::DimGray;
            this->textBox1->Location = System::Drawing::Point(85, 195);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(324, 39);
            this->textBox1->TabIndex = 2;
            this->textBox1->Text = L"ФИО";
            this->textBox1->Click += gcnew System::EventHandler(this, &teachentranse::textBox1_Click);
            this->textBox1->Leave += gcnew System::EventHandler(this, &teachentranse::textBox1_Leave);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::Gray;
            this->label3->Location = System::Drawing::Point(177, 13);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(214, 40);
            this->label3->TabIndex = 1;
            this->label3->Text = L"регистрация";
            this->label3->Click += gcnew System::EventHandler(this, &teachentranse::label3_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(83, 13);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(94, 40);
            this->label2->TabIndex = 0;
            this->label2->Text = L"вход";
            this->label2->Click += gcnew System::EventHandler(this, &teachentranse::label2_Click);
            // 
            // teachentranse
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"teachentranse";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"teachentranse";
            this->Load += gcnew System::EventHandler(this, &teachentranse::teachentranse_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
            if (textBox1->Text == "ФИО") {
                textBox1->Clear();
            }
        }

        System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(textBox1->Text)) {
                textBox1->Text = "ФИО";
            }
        }

        System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
            if (lb2 && textBox2->Text == "пароль") {
                textBox2->Text = "";
                textBox2->PasswordChar = '*';
            }
            else if (lb3 && textBox2->Text == "пароль(не менее 6 символов)") {
                textBox2->Text = "";
                textBox2->PasswordChar = '*';
            }
        }

        System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(textBox2->Text)) {
                if (lb2) {
                    textBox2->Text = "пароль";
                    textBox2->PasswordChar = '\0';
                }
                else if (lb3) {
                    textBox2->Text = "пароль(не менее 6 символов)";
                    textBox2->PasswordChar = '\0';
                }
            }
        }

        System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
            if (textBox3->Text == "повтор пароля") {
                textBox3->Clear();
            }
        }

        System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(textBox3->Text)) {
                textBox3->Text = "повтор пароля";
            }
        }

        System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
            lb2 = true;
            lb3 = false;
            label2->ForeColor = Color::White;
            label3->ForeColor = Color::Silver;
            textBox3->Visible = false;
            textBox2->Text = "пароль";
            if (textBox2->Text == "пароль" || checkBox1->Checked) {
                textBox2->PasswordChar = '\0';
            }
            else {
                textBox2->PasswordChar = '*';
            }
        }

        System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
            lb3 = true;
            lb2 = false;
            label3->ForeColor = Color::White;
            label2->ForeColor = Color::Silver;

            textBox2->Text = "пароль(не менее 6 символов)";
            textBox3->Text = "повтор пароля";
            textBox3->Visible = true;
            if (textBox2->Text == "пароль(не менее 6 символов)" || checkBox1->Checked) {
                textBox2->PasswordChar = '\0';
            }
            else {
                textBox2->PasswordChar = '*';
            }

            if (textBox3->Text == "повтор пароля" || checkBox1->Checked) {
                textBox3->PasswordChar = '\0';
            }
            else {
                textBox3->PasswordChar = '*';
            }
        }

        System::Void teachentranse_Load(System::Object^ sender, System::EventArgs^ e) {
            if (lb2) {
                textBox2->Text = "пароль";
                if (textBox2->Text == "пароль" || checkBox1->Checked) {
                    textBox2->PasswordChar = '\0';
                }
                else {
                    textBox2->PasswordChar = '*';
                }
                textBox3->Visible = false;
            }
            else if (lb3) {
                textBox2->Text = "пароль(не менее 6 символов)";
                textBox3->Text = "повтор пароля";
                if (textBox2->Text == "пароль(не менее 6 символов)" || checkBox1->Checked) {
                    textBox2->PasswordChar = '\0';
                }
                else {
                    textBox2->PasswordChar = '*';
                }
                if (textBox3->Text == "повтор пароля" || checkBox1->Checked) {
                    textBox3->PasswordChar = '\0';
                }
                else {
                    textBox3->PasswordChar = '*';
                }
                textBox3->Visible = true;
            }
        }

        System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
            if (lb2) {
                if (textBox2->Text == "пароль" || checkBox1->Checked) {
                    textBox2->PasswordChar = '\0';
                }
                else {
                    textBox2->PasswordChar = '*';
                }
            }
            else if (lb3) {
                if (textBox2->Text == "пароль(не менее 6 символов)" || checkBox1->Checked) {
                    textBox2->PasswordChar = '\0';
                }
                else {
                    textBox2->PasswordChar = '*';
                }
            }
        }

        System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
            if (lb3) {
                if (textBox3->Text == "повтор пароля" || checkBox1->Checked) {
                    textBox3->PasswordChar = '\0';
                }
                else {
                    textBox3->PasswordChar = '*';
                }
            }
        }

        System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
            if (lb2) {
                if (checkBox1->Checked) {
                    textBox2->PasswordChar = '\0';
                }
                else {
                    if (textBox2->Text != "пароль") {
                        textBox2->PasswordChar = '*';
                    }
                    else {
                        textBox2->PasswordChar = '\0';
                    }
                }
            }
            else if (lb3) {
                if (checkBox1->Checked) {
                    textBox2->PasswordChar = '\0';
                    textBox3->PasswordChar = '\0';
                }
                else {
                    if (textBox2->Text != "пароль(не менее 6 символов)") {
                        textBox2->PasswordChar = '*';
                    }
                    else {
                        textBox2->PasswordChar = '\0';
                    }

                    if (textBox3->Text != "повтор пароля") {
                        textBox3->PasswordChar = '*';
                    }
                    else {
                        textBox3->PasswordChar = '\0';
                    }
                }
            }
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            if (lb2) {
                if (textBox1->Text == "ФИО" || textBox2->Text == "пароль") {
                    MessageBox::Show("Заполните все поля!");
                    return;
                }

                try {
                    String^ teacherFIO = textBox1->Text->Trim();
                    String^ password = textBox2->Text;
                    String^ teacherFile = "teacher_" + teacherFIO + ".txt";

                    if (!File::Exists("teachers_list.txt")) {
                        MessageBox::Show("База преподавателей не найдена");
                        return;
                    }

                    bool teacherFound = false;
                    StreamReader^ sr = gcnew StreamReader("teachers_list.txt");
                    while (!sr->EndOfStream) {
                        if (sr->ReadLine()->Trim() == teacherFIO) {
                            teacherFound = true;
                            break;
                        }
                    }
                    sr->Close();

                    if (!teacherFound) {
                        MessageBox::Show("Преподаватель не найден");
                        return;
                    }
                    if (!File::Exists(teacherFile)) {
                        MessageBox::Show("Ошибка данных преподавателя");
                        return;
                    }
                    StreamReader^ teacherSr = gcnew StreamReader(teacherFile);
                    String^ savedFIO = teacherSr->ReadLine();
                    String^ savedHash = teacherSr->ReadLine();
                    teacherSr->Close();

                    String^ inputHash = HashPassword(password);

                    if (inputHash != savedHash) {
                        MessageBox::Show("Неверный пароль");
                        return;
                    }

                    UserSession::CurrentUserFIO = savedFIO;
                    UserSession::CurrentUsername = teacherFIO;
                    UserSession::CurrentRole = "Teacher";

                    MessageBox::Show("Вход выполнен успешно");
                    tmain^ teacherForm = gcnew tmain();
                    teacherForm->Show();
                    this->Hide();
                }
                catch (Exception^ ex) {
                    MessageBox::Show("Ошибка при входе: " + ex->Message);
                }
            }
            else if (lb3) {
                try {
                    String^ fio = textBox1->Text->Trim();
                    String^ password = textBox2->Text;
                    String^ confirmPassword = textBox3->Text;

                    if (fio->Split(' ')->Length != 3) {
                        MessageBox::Show("ФИО должно состоять из трех слов");
                        return;
                    }

                    if (File::Exists("teachers_list.txt")) {
                        StreamReader^ reader = gcnew StreamReader("teachers_list.txt");
                        while (!reader->EndOfStream) {
                            if (reader->ReadLine()->Trim() == fio) {
                                reader->Close();
                                MessageBox::Show("Преподаватель с таким ФИО уже существует");
                                return;
                            }
                        }
                        reader->Close();
                    }

                    if (password->Length < 6) {
                        MessageBox::Show("Пароль должен содержать минимум 6 символов");
                        return;
                    }

                    if (password != confirmPassword) {
                        MessageBox::Show("Пароли не совпадают");
                        return;
                    }
                    String^ hashedPassword = HashPassword(password);

                    String^ filename = "teacher_" + fio + ".txt";
                    StreamWriter^ sw = gcnew StreamWriter(filename);
                    sw->WriteLine(fio);
                    sw->WriteLine(hashedPassword); 
                    sw->Close();
                    StreamWriter^ listSw = gcnew StreamWriter("teachers_list.txt", true);
                    listSw->WriteLine(fio);
                    listSw->Close();

                    UserSession::CurrentUserFIO = fio;
                    UserSession::CurrentUsername = fio;
                    UserSession::CurrentRole = "Teacher";

                    MessageBox::Show("Регистрация прошла успешно");
                    tmain^ teacherForm = gcnew tmain();
                    teacherForm->Show();
                    this->Hide();
                }
                catch (Exception^ ex) {
                    MessageBox::Show("Ошибка при регистрации: " + ex->Message);
                }
            }
        }
        String^ HashPassword(String^ password)
        {
            array<Byte>^ bytes = Encoding::UTF8->GetBytes(password);
            SHA256Managed^ sha256 = gcnew SHA256Managed();
            array<Byte>^ hashBytes = sha256->ComputeHash(bytes);
            StringBuilder^ builder = gcnew StringBuilder();
            for (int i = 0; i < hashBytes->Length; i++)
            {
                builder->Append(hashBytes[i].ToString("x2"));
            }

            return builder->ToString();
        }
    };
}