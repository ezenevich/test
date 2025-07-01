#pragma once
#include <fstream>
#include <string>
#include <servprov.h>
#include <msclr/marshal_cppstd.h>
#include "UserSession.h"
#include <msclr/marshal.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Text;
using namespace System;


namespace nevelly {

    public ref class teachclass : public System::Windows::Forms::Form
    {
    public:
        teachclass(void)
        {
            InitializeComponent();
            className = UserSession::CurrentClass;
            CreateSampleFilesIfNotExist();
            LoadParticipants();

            // Настройка цветов
            label1->ForeColor = Color::White;
            label3->ForeColor = Color::White;
            label4->ForeColor = Color::DarkGray;
        }

    protected:
        ~teachclass()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        String^ className;
        array<String^>^ participants;
        System::ComponentModel::Container^ components;

        // Элементы управления
    private:
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Label^ label2;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(teachclass::typeid));
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();

            // label4
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
            this->label4->ForeColor = System::Drawing::Color::DarkGray;
            this->label4->Location = System::Drawing::Point(570, 29);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(102, 37);
            this->label4->TabIndex = 8;
            this->label4->Text = L" пары";
            this->label4->Click += gcnew System::EventHandler(this, &teachclass::label4_Click);

            // label3
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
            this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->label3->Location = System::Drawing::Point(396, 29);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(168, 37);
            this->label3->TabIndex = 7;
            this->label3->Text = L"участники";
            this->label3->Click += gcnew System::EventHandler(this, &teachclass::label3_Click);

            // dataGridView1
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(20, 186);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->Size = System::Drawing::Size(1084, 417);
            this->dataGridView1->TabIndex = 6;

            // comboBox1
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(772, 83);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(332, 33);
            this->comboBox1->TabIndex = 9;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &teachclass::comboBox1_SelectedIndexChanged);

            // label1
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::Gainsboro;
            this->label1->Location = System::Drawing::Point(767, 41);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(349, 25);
            this->label1->TabIndex = 10;
            this->label1->Text = L"выберите пару для экспорта отчета";

            // button1
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
            this->button1->ForeColor = System::Drawing::Color::DimGray;
            this->button1->Location = System::Drawing::Point(860, 610);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(244, 38);
            this->button1->TabIndex = 11;
            this->button1->Text = L"сформировать пары";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &teachclass::button1_Click);

            // button2
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
            this->button2->ForeColor = System::Drawing::Color::DimGray;
            this->button2->Location = System::Drawing::Point(832, 132);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(244, 38);
            this->button2->TabIndex = 12;
            this->button2->Text = L"экспорт";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Visible = false;
            this->button2->Click += gcnew System::EventHandler(this, &teachclass::button2_Click);

            // label2
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
            this->label2->ForeColor = System::Drawing::Color::Gainsboro;
            this->label2->Location = System::Drawing::Point(12, 9);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(115, 37);
            this->label2->TabIndex = 13;
            this->label2->Text = L"nevelly";

            // teachclass
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1116, 660);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->dataGridView1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"teachclass";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"teachclass";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }

    private:
        void CreateSampleFilesIfNotExist()
        {
            // Создаем файл класса
            String^ classFile = className + ".txt";
            if (!File::Exists(classFile))
            {
                array<String^>^ classContent = gcnew array<String^>{
                    "Класс: " + className,
                        "Участники:",
                        "Иванов",
                        "Петров",
                        "Сидоров",
                        "Кузнецова",
                        "Смирнова"
                };
                File::WriteAllLines(classFile, classContent, Encoding::GetEncoding(1251));
            }

            // Создаем файлы участников
            array<String^>^ students = gcnew array<String^>{"Иванов", "Петров", "Сидоров", "Кузнецова", "Смирнова"};
            for each (String ^ student in students)
            {
                String^ studentFile = student + ".txt";
                if (!File::Exists(studentFile))
                {
                    array<String^>^ studentContent = gcnew array<String^>{
                        "Ученик: " + student,
                            "Класс: " + className,
                            "программирование,математика,физика", // интересы
                            "8", // баллы (1-10)
                            "работа в команде,аналитическое мышление" // предпочтения
                    };
                    File::WriteAllLines(studentFile, studentContent, Encoding::GetEncoding(1251));
                }
            }

            // Создаем тестовый файл комментариев (для демонстрации экспорта)
            String^ commentFile = "Иванов_Петров_комментарий.txt";
            if (!File::Exists(commentFile))
            {
                File::WriteAllText(commentFile,
                    "Пара: Иванов и Петров\n" +
                    "Дата работы: 01.01.2023\n" +
                    "Оценка взаимодействия: 9/10\n" +
                    "Комментарий: Отличная совместная работа, быстро нашли общий язык и эффективно распределили задачи.\n" +
                    "Рекомендации: Продолжать работать вместе над сложными проектами.",
                    Encoding::GetEncoding(1251));
            }
        }

        void LoadParticipants()
        {
            String^ filename = className + ".txt";
            String^ fullPath = Path::Combine(Application::StartupPath, filename);

            if (File::Exists(fullPath))
            {
                try
                {
                    array<String^>^ lines = File::ReadAllLines(fullPath, Encoding::GetEncoding(1251));
                    if (lines->Length > 2)
                    {
                        participants = gcnew array<String^>(lines->Length - 2);
                        for (int i = 2; i < lines->Length; i++)
                        {
                            participants[i - 2] = lines[i]->Trim();
                        }

                        dataGridView1->Rows->Clear();
                        dataGridView1->Columns->Clear();
                        dataGridView1->Columns->Add("Participants", "Участники");

                        for each (String ^ participant in participants)
                        {
                            if (!String::IsNullOrEmpty(participant))
                            {
                                dataGridView1->Rows->Add(participant);
                            }
                        }
                    }
                }
                catch (Exception^ e)
                {
                    MessageBox::Show("Ошибка при чтении файла: " + e->Message, "Ошибка");
                }
            }
            else
            {
                MessageBox::Show("Файл с участниками не найден: " + fullPath, "Ошибка");
            }
        }

        void LoadPairs()
        {
            String^ filename = className + "_пары.txt";
            String^ fullPath = Path::Combine(Application::StartupPath, filename);

            if (File::Exists(fullPath))
            {
                try
                {
                    array<String^>^ lines = File::ReadAllLines(fullPath, Encoding::GetEncoding(1251));

                    dataGridView1->Rows->Clear();
                    dataGridView1->Columns->Clear();

                    dataGridView1->Columns->Add("Partner1", "Партнер 1");
                    dataGridView1->Columns->Add("Partner2", "Партнер 2");
                    dataGridView1->Columns->Add("Compatibility", "Совместимость (%)");

                    for each (String ^ line in lines)
                    {
                        array<String^>^ pair = line->Split(',');
                        if (pair->Length == 3)
                        {
                            dataGridView1->Rows->Add(pair[0]->Trim(), pair[1]->Trim(), pair[2]->Trim());
                        }
                    }

                    comboBox1->Items->Clear();
                    for each (String ^ line in lines)
                    {
                        array<String^>^ pair = line->Split(',');
                        if (pair->Length == 3)
                        {
                            comboBox1->Items->Add(pair[0]->Trim() + " и " + pair[1]->Trim());
                        }
                    }
                }
                catch (Exception^ e)
                {
                    MessageBox::Show("Ошибка при чтении файла пар: " + e->Message, "Ошибка");
                }
            }
            else
            {
                dataGridView1->Rows->Clear();
                dataGridView1->Columns->Clear();
                dataGridView1->Columns->Add("Partner1", "Партнер 1");
                dataGridView1->Columns->Add("Partner2", "Партнер 2");
                dataGridView1->Columns->Add("Compatibility", "Совместимость (%)");
                comboBox1->Items->Clear();
            }
        }

        int CalculateCompatibility(String^ partner1, String^ partner2)
        {
            try
            {
                String^ file1 = partner1 + ".txt";
                String^ file2 = partner2 + ".txt";
                String^ path1 = Path::Combine(Application::StartupPath, file1);
                String^ path2 = Path::Combine(Application::StartupPath, file2);

                if (!File::Exists(path1) || !File::Exists(path2)) return 0;

                array<String^>^ data1 = File::ReadAllLines(path1, Encoding::GetEncoding(1251));
                array<String^>^ data2 = File::ReadAllLines(path2, Encoding::GetEncoding(1251));

                if (data1->Length < 5 || data2->Length < 5) return 0;

                // 1. Совпадение интересов (33%)
                array<String^>^ interests1 = data1[2]->Split(',');
                array<String^>^ interests2 = data2[2]->Split(',');
                double interestScore = CalculateMatchScore(interests1, interests2) * 0.33;

                // 2. Разница в баллах (33%)
                double score1 = Convert::ToDouble(data1[3]);
                double score2 = Convert::ToDouble(data2[3]);
                double scoreDiff = 1.0 - (Math::Abs(score1 - score2) / 10.0);
                if (scoreDiff < 0) scoreDiff = 0;
                double scorePart = scoreDiff * 0.33;

                // 3. Совпадение предпочтений (34%)
                array<String^>^ prefs1 = data1[4]->Split(',');
                array<String^>^ prefs2 = data2[4]->Split(',');
                double prefScore = CalculateMatchScore(prefs1, prefs2) * 0.34;

                return (int)((interestScore + scorePart + prefScore) * 100);
            }
            catch (Exception^)
            {
                return 0;
            }
        }

        double CalculateMatchScore(array<String^>^ items1, array<String^>^ items2)
        {
            int matches = 0;
            for each (String ^ item1 in items1)
            {
                for each (String ^ item2 in items2)
                {
                    if (item1->Trim()->Equals(item2->Trim()))
                    {
                        matches++;
                        break;
                    }
                }
            }
            return (2.0 * matches) / (items1->Length + items2->Length);
        }

        void GeneratePairs()
        {
            if (participants == nullptr || participants->Length < 2)
            {
                MessageBox::Show("Недостаточно участников для формирования пар!", "Ошибка");
                return;
            }

            List<String^>^ pairs = gcnew List<String^>();
            List<String^>^ used = gcnew List<String^>();

            for (int i = 0; i < participants->Length; i++)
            {
                if (used->Contains(participants[i])) continue;

                String^ bestMatch = "";
                int bestScore = 0;

                for (int j = 0; j < participants->Length; j++)
                {
                    if (i == j || used->Contains(participants[j])) continue;

                    int score = CalculateCompatibility(participants[i], participants[j]);
                    if (score > bestScore)
                    {
                        bestScore = score;
                        bestMatch = participants[j];
                    }
                }

                if (!String::IsNullOrEmpty(bestMatch))
                {
                    pairs->Add(String::Format("{0},{1},{2}%", participants[i], bestMatch, bestScore));
                    used->Add(participants[i]);
                    used->Add(bestMatch);
                }
            }

            String^ pairsFile = className + "_пары.txt";
            String^ fullPath = Path::Combine(Application::StartupPath, pairsFile);
            File::WriteAllLines(fullPath, pairs->ToArray(), Encoding::GetEncoding(1251));
            LoadPairs();
            MessageBox::Show("Пары успешно сформированы!", "Готово");
        }

        void ExportReport()
        {
            if (comboBox1->SelectedItem == nullptr)
            {
                MessageBox::Show("Выберите пару для экспорта!", "Ошибка");
                return;
            }

            String^ pair = comboBox1->SelectedItem->ToString();
            array<String^>^ names = pair->Split(gcnew array<String^>{" и "}, StringSplitOptions::None);

            if (names->Length != 2)
            {
                MessageBox::Show("Ошибка в формате выбранной пары!", "Ошибка");
                return;
            }

            String^ commentFile = names[0] + "_" + names[1] + "_комментарий.txt";
            String^ fullPath = Path::Combine(Application::StartupPath, commentFile);

            if (!File::Exists(fullPath))
            {
                MessageBox::Show("Участники еще не взаимодействовали. Невозможно сформировать отчет!", "Ошибка");
                return;
            }

            String^ report = "Отчет об активности учащихся и эффективности подбора пар на основе комментариев партнеров.\n\n";
            report += File::ReadAllText(fullPath, Encoding::GetEncoding(1251));

            SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
            saveDialog->Filter = "Word Document|*.docx|Text File|*.txt";
            saveDialog->FileName = names[0] + "_" + names[1] + "_отчет";

            if (saveDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
            {
                File::WriteAllText(saveDialog->FileName, report, Encoding::GetEncoding(1251));
                MessageBox::Show("Отчет успешно экспортирован!", "Готово");
            }
        }

    private:
        System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
            LoadParticipants();
            label1->ForeColor = Color::White;
            label3->ForeColor = Color::White;
            label4->ForeColor = Color::DarkGray;
        }

        System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
            LoadPairs();
            label1->ForeColor = Color::DarkGray;
            label3->ForeColor = Color::DarkGray;
            label4->ForeColor = Color::White;
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            GeneratePairs();
        }

        System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            button2->Visible = (comboBox1->SelectedItem != nullptr);
        }

        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            ExportReport();
        }
    };
}