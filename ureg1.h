#pragma once
#include <fstream>
#include "ureg2.h"
namespace nevelly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для ureg1
	/// </summary>
	public ref class ureg1 : public System::Windows::Forms::Form
	{
	public:
		ureg1(void)
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
		~ureg1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ureg1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1118, 661);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->checkBox10);
			this->panel1->Controls->Add(this->checkBox9);
			this->panel1->Controls->Add(this->checkBox8);
			this->panel1->Controls->Add(this->checkBox7);
			this->panel1->Controls->Add(this->checkBox6);
			this->panel1->Controls->Add(this->checkBox5);
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(315, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(467, 625);
			this->panel1->TabIndex = 5;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->BackColor = System::Drawing::Color::Transparent;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox10->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox10->Location = System::Drawing::Point(57, 401);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(220, 29);
			this->checkBox10->TabIndex = 25;
			this->checkBox10->Text = L"просмотр фильмов";
			this->checkBox10->UseVisualStyleBackColor = false;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->BackColor = System::Drawing::Color::Transparent;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox9->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox9->Location = System::Drawing::Point(57, 366);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(133, 29);
			this->checkBox9->TabIndex = 24;
			this->checkBox9->Text = L"велоспорт";
			this->checkBox9->UseVisualStyleBackColor = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackColor = System::Drawing::Color::Transparent;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox8->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox8->Location = System::Drawing::Point(57, 331);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(153, 29);
			this->checkBox8->TabIndex = 23;
			this->checkBox8->Text = L"садоводство";
			this->checkBox8->UseVisualStyleBackColor = false;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->BackColor = System::Drawing::Color::Transparent;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox7->Location = System::Drawing::Point(57, 296);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(107, 29);
			this->checkBox7->TabIndex = 22;
			this->checkBox7->Text = L"готовка";
			this->checkBox7->UseVisualStyleBackColor = false;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Transparent;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox6->Location = System::Drawing::Point(57, 261);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(88, 29);
			this->checkBox6->TabIndex = 21;
			this->checkBox6->Text = L"спорт";
			this->checkBox6->UseVisualStyleBackColor = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox5->Location = System::Drawing::Point(57, 227);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(221, 29);
			this->checkBox5->TabIndex = 20;
			this->checkBox5->Text = L"программирование";
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox4->Location = System::Drawing::Point(57, 192);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(147, 29);
			this->checkBox4->TabIndex = 19;
			this->checkBox4->Text = L"чтение книг";
			this->checkBox4->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox3->Location = System::Drawing::Point(57, 157);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(139, 29);
			this->checkBox3->TabIndex = 18;
			this->checkBox3->Text = L"видеоигры";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox2->Location = System::Drawing::Point(57, 122);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(105, 29);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"музыка";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(57, 87);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(248, 29);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"рисование / живопись";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(85, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 43);
			this->button1->TabIndex = 8;
			this->button1->Text = L"продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ureg1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(79, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"что вам нравится\?";
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
			// ureg1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1116, 660);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ureg1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ureg1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (!checkBox1->Checked && !checkBox2->Checked && !checkBox3->Checked &&
				!checkBox4->Checked && !checkBox5->Checked && !checkBox6->Checked &&
				!checkBox7->Checked && !checkBox8->Checked && !checkBox9->Checked &&
				!checkBox10->Checked) {
				MessageBox::Show("Пожалуйста, выберите хотя бы одно хобби");
				return;
			}
			String^ selectedInterests = "";
			if (checkBox1->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox1->Text;
			if (checkBox2->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox2->Text;
			if (checkBox3->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox3->Text;
			if (checkBox4->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox4->Text;
			if (checkBox5->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox5->Text;
			if (checkBox6->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox6->Text;
			if (checkBox7->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox7->Text;
			if (checkBox8->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox8->Text;
			if (checkBox9->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox9->Text;
			if (checkBox10->Checked) selectedInterests += (selectedInterests->Length > 0 ? "," : "") + checkBox10->Text;

			String^ lastUsername = nullptr;
			if (File::Exists("list.txt")) {
				StreamReader^ reader = gcnew StreamReader("list.txt");
				while (!reader->EndOfStream) {
					lastUsername = reader->ReadLine();
				}
				reader->Close();
			}

			if (lastUsername == nullptr || lastUsername->Trim() == "") {
				MessageBox::Show("Нет зарегистрированных пользователей");
				return;
			}
			String^ filename = lastUsername + ".txt";
			StreamWriter^ sw = gcnew StreamWriter(filename, true); 
			sw->WriteLine(selectedInterests); 
			sw->Close();
			ureg2^ t2Form = gcnew ureg2();
			t2Form->Show();
			this->Hide();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка: " + ex->Message);
		}
	}
};
}
