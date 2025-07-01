#pragma once
#include <fstream>
#include <string>
#include "UserSession.h"

namespace nevelly {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class uclass : public System::Windows::Forms::Form {
    public:
        uclass(void) {
            InitializeComponent();
            this->Load += gcnew System::EventHandler(this, &uclass::Form_Load);
            this->Font = gcnew System::Drawing::Font("Microsoft YaHei", 13);
        }

    protected:
        ~uclass() {
            if (components) {
                delete components;
            }
        }

    private:
        String^ className;
        System::Windows::Forms::Label^ labelClassName;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::Button^ buttonRate;
        System::Windows::Forms::Panel^ ratingPanel;
        System::Windows::Forms::NumericUpDown^ numericRating;
        System::Windows::Forms::TextBox^ textBoxComment;
        System::Windows::Forms::Button^ buttonSubmit;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

           System::ComponentModel::Container^ components;

        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(uclass::typeid));
            this->labelClassName = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->buttonRate = (gcnew System::Windows::Forms::Button());
            this->ratingPanel = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->numericRating = (gcnew System::Windows::Forms::NumericUpDown());
            this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
            this->buttonSubmit = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->ratingPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRating))->BeginInit();
            this->SuspendLayout();
            // 
            // labelClassName
            // 
            this->labelClassName->AutoSize = true;
            this->labelClassName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16));
            this->labelClassName->Location = System::Drawing::Point(49, 101);
            this->labelClassName->Name = L"labelClassName";
            this->labelClassName->Size = System::Drawing::Size(0, 35);
            this->labelClassName->TabIndex = 0;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeight = 29;
            this->dataGridView1->Location = System::Drawing::Point(20, 220);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->Size = System::Drawing::Size(1084, 417);
            this->dataGridView1->TabIndex = 1;
            // 
            // buttonRate
            // 
            this->buttonRate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonRate->Location = System::Drawing::Point(862, 35);
            this->buttonRate->Name = L"buttonRate";
            this->buttonRate->Size = System::Drawing::Size(229, 52);
            this->buttonRate->TabIndex = 2;
            this->buttonRate->Text = L"оценить партнера";
            this->buttonRate->Click += gcnew System::EventHandler(this, &uclass::buttonRate_Click);
            // 
            // ratingPanel
            // 
            this->ratingPanel->BackColor = System::Drawing::Color::LightGray;
            this->ratingPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ratingPanel.BackgroundImage")));
            this->ratingPanel->Controls->Add(this->label2);
            this->ratingPanel->Controls->Add(this->label1);
            this->ratingPanel->Controls->Add(this->numericRating);
            this->ratingPanel->Controls->Add(this->textBoxComment);
            this->ratingPanel->Controls->Add(this->buttonSubmit);
            this->ratingPanel->Location = System::Drawing::Point(320, 87);
            this->ratingPanel->Name = L"ratingPanel";
            this->ratingPanel->Size = System::Drawing::Size(491, 472);
            this->ratingPanel->TabIndex = 3;
            this->ratingPanel->Visible = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->label2->Location = System::Drawing::Point(57, 132);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(218, 24);
            this->label2->TabIndex = 4;
            this->label2->Text = L"добавьте комментарий";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->label1->Location = System::Drawing::Point(57, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(342, 24);
            this->label1->TabIndex = 3;
            this->label1->Text = L"оцените подобранного вам партнера";
            // 
            // numericRating
            // 
            this->numericRating->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericRating->Location = System::Drawing::Point(186, 54);
            this->numericRating->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            this->numericRating->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericRating->Name = L"numericRating";
            this->numericRating->Size = System::Drawing::Size(120, 30);
            this->numericRating->TabIndex = 0;
            this->numericRating->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            // 
            // textBoxComment
            // 
            this->textBoxComment->Location = System::Drawing::Point(11, 159);
            this->textBoxComment->Multiline = true;
            this->textBoxComment->Name = L"textBoxComment";
            this->textBoxComment->Size = System::Drawing::Size(468, 237);
            this->textBoxComment->TabIndex = 1;
            // 
            // buttonSubmit
            // 
            this->buttonSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonSubmit->Location = System::Drawing::Point(145, 411);
            this->buttonSubmit->Name = L"buttonSubmit";
            this->buttonSubmit->Size = System::Drawing::Size(211, 39);
            this->buttonSubmit->TabIndex = 2;
            this->buttonSubmit->Text = L"отправить";
            this->buttonSubmit->Click += gcnew System::EventHandler(this, &uclass::buttonSubmit_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->label3->Location = System::Drawing::Point(374, 35);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(168, 37);
            this->label3->TabIndex = 4;
            this->label3->Text = L"участники";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::DarkGray;
            this->label4->Location = System::Drawing::Point(574, 35);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(102, 37);
            this->label4->TabIndex = 5;
            this->label4->Text = L" пары";
            // 
            // uclass
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->labelClassName);
            this->Controls->Add(this->buttonRate);
            this->Controls->Add(this->ratingPanel);
            this->Controls->Add(this->dataGridView1);
            this->Name = L"uclass";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"uclass";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ratingPanel->ResumeLayout(false);
            this->ratingPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRating))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        System::Void Form_Load(System::Object^ sender, System::EventArgs^ e) {
            className = UserSession::CurrentClass;
            labelClassName->Text = "Класс: " + className;
            LoadParticipants();
        }

        System::Void LoadParticipants() {
            dataGridView1->Columns->Clear();
            dataGridView1->Columns->Add("Participants", "Участники");

            String^ filePath = Path::Combine("Classes", className + ".txt");
            if (!File::Exists(filePath)) {
                dataGridView1->Rows->Add("Файл с участниками не найден");
                return;
            }

            try {
                array<String^>^ lines = File::ReadAllLines(filePath);
                for each(String ^ line in lines) {
                    if (!String::IsNullOrEmpty(line)) {
                        dataGridView1->Rows->Add(line);
                    }
                }
            }
            catch (Exception^ e) {
                dataGridView1->Rows->Add("Ошибка чтения файла: " + e->Message);
            }
        }

        void buttonRate_Click(System::Object^ sender, System::EventArgs^ e) {
            ratingPanel->Visible = true; 
        }

        void buttonSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
            int rating = (int)numericRating->Value;
            String^ comment = textBoxComment->Text;

          
            String^ partner1 = "Партнер1"; 
            String^ partner2 = "Партнер2"; // Замените на реальное имя партнера 2
            SaveRating(partner1, partner2, rating, comment);
            ratingPanel->Visible = false;
            numericRating->Value = 1; // Сбросить оценку
            textBoxComment->Clear(); // Очистить комментарий
        }

        void SaveRating(String^ partner1, String^ partner2, int rating, String^ comment) {
            String^ fileName = Path::Combine("Classes", partner1 + "_" + partner2 + ".txt"); // Название файла
            StreamWriter^ writer;

            // Проверяем, существует ли файл
            if (File::Exists(fileName)) {
                writer = gcnew StreamWriter(fileName, true); // Дозапись в файл
            }
            else {
                writer = gcnew StreamWriter(fileName); // Создание нового файла
            }

            writer->WriteLine(rating);
            writer->WriteLine(comment);
            writer->Close();
        }
    };
}