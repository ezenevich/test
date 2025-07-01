#pragma once
#include "teachclass.h"
#include "UserSession.h"
#include <fstream>

namespace nevelly {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class createclass : public System::Windows::Forms::Form
    {
    public:
        createclass(void)
        {
            InitializeComponent();
        }

    protected:
        ~createclass()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::ComponentModel::Container^ components;

#pragma region
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(createclass::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Location = System::Drawing::Point(315, 9);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(487, 625);
            this->panel1->TabIndex = 9;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->ForeColor = System::Drawing::Color::DimGray;
            this->textBox3->Location = System::Drawing::Point(68, 279);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(353, 46);
            this->textBox3->TabIndex = 25;
            this->textBox3->Text = L"код доступа";
            this->textBox3->Click += gcnew System::EventHandler(this, &createclass::textBox3_Click);
            this->textBox3->Leave += gcnew System::EventHandler(this, &createclass::textBox3_Leave);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(111, 44);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(253, 37);
            this->label6->TabIndex = 24;
            this->label6->Text = L"создание класса";
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->ForeColor = System::Drawing::Color::DimGray;
            this->textBox2->Location = System::Drawing::Point(68, 200);
            this->textBox2->Margin = System::Windows::Forms::Padding(4);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(353, 51);
            this->textBox2->TabIndex = 23;
            this->textBox2->Text = L"название класса";
            this->textBox2->Click += gcnew System::EventHandler(this, &createclass::textBox2_Click);
            this->textBox2->Leave += gcnew System::EventHandler(this, &createclass::textBox2_Leave);
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(100, 450);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(276, 43);
            this->button1->TabIndex = 22;
            this->button1->Text = L"создать";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &createclass::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::LightGray;
            this->label3->Location = System::Drawing::Point(12, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(122, 40);
            this->label3->TabIndex = 23;
            this->label3->Text = L"nevelly";
            // 
            // createclass
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"createclass";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"createclass";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

   private:
       System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
           String^ forbiddenChars = "/\\:*?\"<>|.,;'[]{}()@#$%^&+=!~` ";
           String^ className = textBox2->Text->Trim();
           String^ accessCode = textBox3->Text->Trim();

           if (String::IsNullOrEmpty(className) || className == "название класса") {
               MessageBox::Show("Введите название класса!", "Ошибка",
                   MessageBoxButtons::OK, MessageBoxIcon::Warning);
               return;
           }

           if (String::IsNullOrEmpty(accessCode) || accessCode == "код доступа") {
               MessageBox::Show("Введите код доступа!", "Ошибка",
                   MessageBoxButtons::OK, MessageBoxIcon::Warning);
               return;
           }

           for each (Char c in forbiddenChars) {
               if (className->Contains(c.ToString())) {
                   MessageBox::Show("Название класса содержит запрещенные символы: " + forbiddenChars,
                       "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   return;
               }
               if (accessCode->Contains(c.ToString())) {
                   MessageBox::Show("Код доступа содержит запрещенные символы: " + forbiddenChars,
                       "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   return;
               }
           }

           String^ classesDir = "Classes";
           if (!Directory::Exists(classesDir)) {
               Directory::CreateDirectory(classesDir);
           }

           String^ filePath = Path::Combine(classesDir, className + ".txt");

           if (File::Exists(filePath)) {
               MessageBox::Show("Класс с таким именем уже существует!", "Ошибка",
                   MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
               return;
           }

           try {
               String^ teacherName = UserSession::CurrentUserFIO;

               if (String::IsNullOrEmpty(teacherName)) {
                   MessageBox::Show("Не удалось определить ФИО преподавателя!", "Ошибка",
                       MessageBoxButtons::OK, MessageBoxIcon::Error);
                   return;
               }

               StreamWriter^ writer = gcnew StreamWriter(filePath);
               writer->WriteLine(accessCode);
               writer->WriteLine(teacherName);
               writer->Close();

               MessageBox::Show("Класс успешно создан!", "Успех",
                   MessageBoxButtons::OK, MessageBoxIcon::Information);

               teachclass^ classForm = gcnew teachclass();
               classForm->Show();
               this->Hide();
           }
           catch (Exception^ ex) {
               MessageBox::Show("Ошибка при создании класса:\n" + ex->Message,
                   "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
           }
       }
        System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
            if (textBox2->Text == "название класса") {
                textBox2->Clear();
                textBox2->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(textBox2->Text)) {
                textBox2->Text = "название класса";
                textBox2->ForeColor = System::Drawing::Color::DimGray;
            }
        }

        System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
            if (textBox3->Text == "код доступа") {
                textBox3->Clear();
                textBox3->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(textBox3->Text)) {
                textBox3->Text = "код доступа";
                textBox3->ForeColor = System::Drawing::Color::DimGray;
            }
        }
    };
}
