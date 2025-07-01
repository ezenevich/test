#pragma once
#include <fstream>
#include <string>
#include "ureg3.h"
namespace nevelly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для ureg2
	/// </summary>
	public ref class ureg2 : public System::Windows::Forms::Form
	{
	public:
		ureg2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ureg2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;










	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ureg2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1115, 662);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(315, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(467, 625);
			this->panel1->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::DimGray;
			this->textBox1->Location = System::Drawing::Point(62, 265);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(353, 46);
			this->textBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(47, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(357, 31);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ваш текущий средний балл\?";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(87, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 43);
			this->button1->TabIndex = 8;
			this->button1->Text = L"продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ureg2::button1_Click);
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
			this->label3->TabIndex = 24;
			this->label3->Text = L"nevelly";
			// 
			// ureg2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1116, 660);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ureg2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ureg2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ lastUsername = nullptr;
			StreamReader^ reader = gcnew StreamReader("list.txt");
			while (!reader->EndOfStream) lastUsername = reader->ReadLine();
			reader->Close();

			if (lastUsername == nullptr) {
				MessageBox::Show("Нет зарегистрированных пользователей");
				return;
			}

			String^ filename = lastUsername + ".txt";
			String^ sred = textBox1->Text;
			bool hasDot = false;

			if (String::IsNullOrEmpty(sred)) {
				MessageBox::Show("Поле не может быть пустым");
				return;
			}
			for (int i = 0; i < sred->Length; i++) {
				Char c = sred[i];

				if (c == '.' || c == ',') {
					if (c == ',') {
						sred = sred->Remove(i, 1)->Insert(i, ".");
						textBox1->Text = sred;
						c = '.';
					}

					if (hasDot) {
						MessageBox::Show("Не может быть больше одной точки");
						textBox1->Clear();
						return;
					}
					hasDot = true;

					if (i == 0 || i == sred->Length - 1) {
						MessageBox::Show("Не может начинаться или заканчиваться точкой");
						textBox1->Clear();
						return;
					}
				}
				else if (!Char::IsDigit(c)) {
					MessageBox::Show("Должен содержать только цифры и одну точку");
					textBox1->Clear();
					return;
				}
			}

			double value;
			if (!Double::TryParse(sred, value)) {
				MessageBox::Show("Некорректный формат числа");
				textBox1->Clear();
				return;
			}
			if (value < 0 || value > 10) {
				MessageBox::Show("Средний балл должен быть от 0 до 10");
				textBox1->Clear();
				return;
			}

			// Запись в файл
			StreamWriter^ sw = gcnew StreamWriter(filename, true);
			sw->WriteLine(sred);  
			sw->Close();
			ureg3^ t3Form = gcnew ureg3();
			t3Form->Show();
			this->Hide();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка: " + ex->Message);
			textBox1->Clear();
		}
	}

};
}
