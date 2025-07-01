#pragma once
#include <fstream>
#include <string>
#include "umain.h"
namespace nevelly {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для ureg3
	/// </summary>
	public ref class ureg3 : public System::Windows::Forms::Form
	{
	public:
		ureg3(void)
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
		~ureg3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ureg3::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(315, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(538, 625);
			this->panel1->TabIndex = 8;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->radioButton4->Location = System::Drawing::Point(46, 276);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(111, 29);
			this->radioButton4->TabIndex = 26;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"эмпатия";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->radioButton3->Location = System::Drawing::Point(46, 241);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(188, 29);
			this->radioButton3->TabIndex = 25;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"ответственность";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->radioButton2->Location = System::Drawing::Point(46, 206);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(178, 29);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"чувство юмора";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->radioButton1->Location = System::Drawing::Point(46, 171);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 29);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"честность";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(140, 550);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 43);
			this->button1->TabIndex = 22;
			this->button1->Text = L"продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &ureg3::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(138, 550);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(276, 43);
			this->button2->TabIndex = 21;
			this->button2->Text = L"ДАЛЕЕ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ureg3::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(61, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(332, 27);
			this->label4->TabIndex = 17;
			this->label4->Text = L"наиболее важна в напарнике\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(55, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(344, 27);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Какая черта характера для вас ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(19, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(424, 31);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ваши предпочтения в напарнике\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 40);
			this->label1->TabIndex = 24;
			this->label1->Text = L"nevelly";
			// 
			// ureg3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1116, 660);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"ureg3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ureg3";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int count = 0;
private:
	
	String^ selectedTraits = ""; 

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ lastUsername = "";
		if (File::Exists("list.txt")) {
			StreamReader^ reader = gcnew StreamReader("list.txt");
			while (!reader->EndOfStream) {
				lastUsername = reader->ReadLine();
			}
			reader->Close();
		}
		if (lastUsername == "") {
			MessageBox::Show("Нет зарегистрированных пользователей");
			return;
		}
		StreamWriter^ sw = gcnew StreamWriter(lastUsername + ".txt", true);
		sw->WriteLine(selectedTraits);
		sw->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка при записи в файл: " + ex->Message);
	}
	umain^ t4Form = gcnew umain();
	t4Form->Show();
	this->Hide();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		bool isSelected = false;
		String^ selectedTrait = "";

		if (radioButton1->Checked) {
			isSelected = true;
			selectedTrait = radioButton1->Text;
		}
		else if (radioButton2->Checked) {
			isSelected = true;
			selectedTrait = radioButton2->Text;
		}
		else if (radioButton3->Checked) {
			isSelected = true;
			selectedTrait = radioButton3->Text;
		}
		else if (radioButton4->Checked) {
			isSelected = true;
			selectedTrait = radioButton4->Text;
		}

		if (!isSelected) {
			MessageBox::Show("Пожалуйста, выберите один вариант");
			return;
		}
		if (count > 0) {
			selectedTraits += ",";
		}
		selectedTraits += selectedTrait;
		count++;
		if (count == 1) {
			label3->Text = "Какой стиль общения";
			label4->Text = "вы предпочитаете в напарнике";
			radioButton1->Text = "прямолинейность и честность";
			radioButton2->Text = "дружелюбность и поддержка";
			radioButton3->Text = "формальность и профессионализм";
			radioButton4->Text = "творчество и нестандартность";
		}
		else if (count == 2) {
			label3->Text = "Какой подход в решении";
			label4->Text = "проблем вы предпочитаете в напарнике";
			radioButton1->Text = "аналитический и логичный";
			radioButton2->Text = "креативный и нестандартный";
			radioButton3->Text = "практичный и быстрый";
			radioButton4->Text = "командный и согласованный";
		}
		else if (count == 3) {
			label3->Text = "какую роль";
			label4->Text = "должен выполнять напарник в команде";
			radioButton1->Text = "лидер";
			radioButton2->Text = "исполнитель";
			radioButton3->Text = "мотиватор";
			radioButton4->Text = "идеолог";
			button1->Visible = true;
			button2->Visible = false;
		}
	}
	catch (Exception^ ) {
		MessageBox::Show("Ошибка");
	}
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
}
};
}
