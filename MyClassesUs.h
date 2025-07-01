#pragma once
#include "UserSession.h"
#include "uclass.h"
#include <fstream>

namespace nevelly {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class MyClassesUs : public System::Windows::Forms::Form
    {
    public:
        MyClassesUs(void)
        {
            InitializeComponent();
            LoadClasses();
            this->Font = gcnew System::Drawing::Font("Microsoft YaHei", 13);
            this->BackgroundImageLayout = ImageLayout::Stretch;
        }

    protected:
        ~MyClassesUs()
        {
            if (components)
                delete components;
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::ComboBox^ comboBoxClasses;
        System::Windows::Forms::Label^ labelSelected;
        System::Windows::Forms::Button^ buttonEnter;
        System::Windows::Forms::Label^ label2;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyClassesUs::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->comboBoxClasses = (gcnew System::Windows::Forms::ComboBox());
            this->labelSelected = (gcnew System::Windows::Forms::Label());
            this->buttonEnter = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(269, 168);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(247, 27);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Ваши классы:";
            // 
            // comboBoxClasses
            // 
            this->comboBoxClasses->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBoxClasses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->comboBoxClasses->FormattingEnabled = true;
            this->comboBoxClasses->Location = System::Drawing::Point(556, 168);
            this->comboBoxClasses->Name = L"comboBoxClasses";
            this->comboBoxClasses->Size = System::Drawing::Size(237, 33);
            this->comboBoxClasses->TabIndex = 2;
            this->comboBoxClasses->SelectedIndexChanged += gcnew System::EventHandler(this, &MyClassesUs::comboBoxClasses_SelectedIndexChanged);
            // 
            // labelSelected
            // 
            this->labelSelected->AutoSize = true;
            this->labelSelected->BackColor = System::Drawing::Color::Transparent;
            this->labelSelected->ForeColor = System::Drawing::Color::White;
            this->labelSelected->Location = System::Drawing::Point(360, 224);
            this->labelSelected->Name = L"labelSelected";
            this->labelSelected->Size = System::Drawing::Size(0, 16);
            this->labelSelected->TabIndex = 1;
            this->labelSelected->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // buttonEnter
            // 
            this->buttonEnter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->buttonEnter->Enabled = false;
            this->buttonEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold));
            this->buttonEnter->ForeColor = System::Drawing::Color::White;
            this->buttonEnter->Location = System::Drawing::Point(418, 314);
            this->buttonEnter->Name = L"buttonEnter";
            this->buttonEnter->Size = System::Drawing::Size(253, 63);
            this->buttonEnter->TabIndex = 0;
            this->buttonEnter->Text = L"Войти в класс";
            this->buttonEnter->UseVisualStyleBackColor = false;
            this->buttonEnter->Click += gcnew System::EventHandler(this, &MyClassesUs::buttonEnter_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::LightGray;
            this->label2->Location = System::Drawing::Point(12, 9);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(122, 40);
            this->label2->TabIndex = 25;
            this->label2->Text = L"nevelly";
            // 
            // MyClassesUs
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->buttonEnter);
            this->Controls->Add(this->labelSelected);
            this->Controls->Add(this->comboBoxClasses);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"MyClassesUs";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Мои классы (Студент)";
            this->ResumeLayout(false);
            this->PerformLayout();
        }

        void LoadClasses()
        {
            comboBoxClasses->Items->Clear();

            if (!Directory::Exists("Classes"))
            {
                Directory::CreateDirectory("Classes");
                return;
            }

            array<String^>^ classFiles = Directory::GetFiles("Classes", "*.txt");
            String^ currentUser = UserSession::CurrentUserFIO;

            for each (String ^ file in classFiles)
            {
                try
                {
                    array<String^>^ lines = File::ReadAllLines(file);
                    String^ className = Path::GetFileNameWithoutExtension(file);

                    for (int i = 2; i < lines->Length; i++)
                    {
                        if (lines[i]->Trim() == currentUser)
                        {
                            comboBoxClasses->Items->Add(className);
                            break;
                        }
                    }
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Ошибка чтения файла класса: " + ex->Message);
                }
            }
        }

        System::Void comboBoxClasses_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
        {
            if (comboBoxClasses->SelectedItem != nullptr)
            {
                String^ className = comboBoxClasses->SelectedItem->ToString();
                labelSelected->Text = "Выбран класс: " + className;
                buttonEnter->Enabled = true;
            }
        }

        System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (comboBoxClasses->SelectedItem == nullptr)
                return;

            try
            {
                uclass^ t2Form = gcnew uclass();
                t2Form->Show();
                this->Hide();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка открытия класса: " + ex->Message);
            }
        }
    };
}