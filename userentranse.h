#pragma once
#include <servprov.h>
#include "teachentranse.h"
#include <fstream>
#include "ureg1.h"
#include "umain.h"
#include "UserSession.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
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
	using namespace msclr::interop;
	/// <summary>
	/// Сводка для userentranse
	/// </summary>
	public ref class userentranse : public System::Windows::Forms::Form
	{
	public:
		userentranse(void)
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
		~userentranse()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(userentranse::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1117, 662);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(315, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(511, 625);
			this->panel1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(152, 560);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 27);
			this->label4->TabIndex = 9;
			this->label4->Text = L"я преподаватель";
			this->label4->Click += gcnew System::EventHandler(this, &userentranse::label4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(85, 475);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 51);
			this->button1->TabIndex = 8;
			this->button1->Text = L"продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &userentranse::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::DimGray;
			this->textBox5->Location = System::Drawing::Point(85, 363);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(317, 39);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"повтор пароля";
			this->textBox5->Click += gcnew System::EventHandler(this, &userentranse::textBox5_Click);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &userentranse::textBox5_TextChanged);
			this->textBox5->Leave += gcnew System::EventHandler(this, &userentranse::textBox5_Leave);
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
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &userentranse::checkBox1_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::DimGray;
			this->textBox4->Location = System::Drawing::Point(85, 256);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(317, 39);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"пароль";
			this->textBox4->Click += gcnew System::EventHandler(this, &userentranse::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &userentranse::textBox4_TextChanged);
			this->textBox4->Leave += gcnew System::EventHandler(this, &userentranse::textBox4_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::DimGray;
			this->textBox3->Location = System::Drawing::Point(85, 187);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(317, 39);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"ФИО";
			this->textBox3->Click += gcnew System::EventHandler(this, &userentranse::textBox3_Click);
			this->textBox3->Leave += gcnew System::EventHandler(this, &userentranse::textBox3_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(178, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 40);
			this->label3->TabIndex = 1;
			this->label3->Text = L"регистрация";
			this->label3->Click += gcnew System::EventHandler(this, &userentranse::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(87, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 40);
			this->label2->TabIndex = 0;
			this->label2->Text = L"вход";
			this->label2->Click += gcnew System::EventHandler(this, &userentranse::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"nevelly";
			// 
			// userentranse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1116, 660);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"userentranse";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"userentranse";
			this->Load += gcnew System::EventHandler(this, &userentranse::userentranse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ HashPassword(String^ password)
	{
		using namespace System::Security::Cryptography;
		using namespace System::Text;

		SHA256^ sha256 = SHA256::Create();
		array<Byte>^ hashBytes = sha256->ComputeHash(Encoding::UTF8->GetBytes(password));
		return Convert::ToBase64String(hashBytes);
	}

private:
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (lb2)
		{
			if (textBox3->Text == "ФИО" || textBox4->Text == "пароль")
			{
				MessageBox::Show("Заполните все поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			try
			{
				String^ userFile = textBox3->Text + ".txt";
				if (!File::Exists(userFile))
				{
					MessageBox::Show("Пользователь не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				array<String^>^ userData = File::ReadAllLines(userFile);
				if (userData->Length < 2)
				{
					MessageBox::Show("Ошибка данных пользователя", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				String^ savedHash = userData[1];
				String^ inputHash = HashPassword(textBox4->Text);

				if (inputHash != savedHash)
				{
					MessageBox::Show("Неверный пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				UserSession::CurrentUserFIO = textBox3->Text;
				UserSession::CurrentUsername = textBox3->Text;
				UserSession::CurrentRole = "User";

				MessageBox::Show("Вход выполнен успешно!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
				umain^ form = gcnew umain();
				form->Show();
				this->Hide();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Ошибка входа: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if (lb3) 
		{
			if (textBox3->Text == "ФИО" || textBox4->Text == "пароль(не менее 6 символов)" || textBox5->Text == "повтор пароля")
			{
				MessageBox::Show("Заполните все поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			try
			{
			
				String^ fio = textBox3->Text;
				if (fio->Split(' ')->Length != 3)
				{
					MessageBox::Show("ФИО должно состоять из трех слов (Фамилия Имя Отчество)", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				
				for each(Char c in fio)
				{
					if (!(Char::IsLetter(c) || c == ' ' || c == '-'))
					{
						MessageBox::Show("ФИО может содержать только буквы, пробелы и дефисы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						return;
					}
				}

				
				String^ password = textBox4->Text;
				if (password->Length < 6)
				{
					MessageBox::Show("Пароль должен содержать минимум 6 символов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				if (password != textBox5->Text)
				{
					MessageBox::Show("Пароли не совпадают", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				
				String^ userFile = fio + ".txt";
				if (File::Exists(userFile))
				{
					MessageBox::Show("Пользователь с таким ФИО уже зарегистрирован", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				
				String^ passwordHash = HashPassword(password);

				
				StreamWriter^ sw = gcnew StreamWriter(userFile);
				sw->WriteLine(fio);       
				sw->WriteLine(passwordHash); 
				sw->Close();

				
				StreamWriter^ listSw = gcnew StreamWriter("list.txt", true);
				listSw->WriteLine(fio);
				listSw->Close();

				UserSession::CurrentUserFIO = fio;
				UserSession::CurrentUsername = fio;
				UserSession::CurrentRole = "User";

				MessageBox::Show("Регистрация прошла успешно!");
				ureg1^ form = gcnew ureg1();
				form->Show();
				this->Hide();
			}
			catch (Exception^ )
			{
				MessageBox::Show("Ошибка регистрации ");
			}
		}
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	teachentranse^ tForm = gcnew teachentranse();
	tForm->Show();
	this->Hide();
}
	   bool lb3 = false;
	   bool lb2 = true;
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	lb2 = true;
	lb3 = false;
	label2->ForeColor = Color::White;
	label3->ForeColor = Color::Silver;
	textBox5->Visible = false;
	textBox4->Visible = true;
	textBox4->Text = "пароль";
	textBox4->PasswordChar = '\0';
	checkBox1->Checked = false; 
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	lb3 = true;
	lb2 = false;
	label2->ForeColor = Color::Silver;
	label3->ForeColor = Color::White;
	textBox4->Visible = true;
	textBox5->Visible = true;
	textBox4->Text = "пароль(не менее 6 символов)";
	textBox4->PasswordChar = '\0';
	textBox5->Text = "повтор пароля";
	textBox5->PasswordChar = '\0';
	checkBox1->Checked = false;
}

private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lb2 && textBox4->Text == "пароль") {
		textBox4->Text = "";
		textBox4->PasswordChar = '*';
	}
	else if (lb3 && textBox4->Text == "пароль(не менее 6 символов)") {
		textBox4->Text = "";
		textBox4->PasswordChar = '*';
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox4->Text)) {
		if (lb2) {
			textBox4->Text = "пароль";
			textBox4->PasswordChar = '\0';
		}
		else if (lb3) {
			textBox4->Text = "пароль(не менее 6 символов)";
			textBox4->PasswordChar = '\0';
		}
	}
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "повтор пароля") {
		textBox5->Clear();
	}
}
private: System::Void textBox5_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox5->Text)) {
		textBox5->Text = "повтор пароля";
	}
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (textBox3->Text == "ФИО") {
			textBox3->Clear();
		}
	
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	
		if (String::IsNullOrEmpty(textBox3->Text)) {
			textBox3->Text = "ФИО";
		}
	
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (lb3) {
		if (textBox5->Text == "повтор пароля" || checkBox1->Checked) {
			textBox5->PasswordChar = '\0';
		}
		else {
			textBox5->PasswordChar = '*';
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (lb2) {
		if (textBox4->Text == "пароль" || checkBox1->Checked) {
			textBox4->PasswordChar = '\0';
		}
		else {
			textBox4->PasswordChar = '*';
		}
	}
	else if (lb3) {
		if (textBox4->Text == "пароль(не менее 6 символов)" || checkBox1->Checked) {
			textBox4->PasswordChar = '\0';
		}
		else {
			textBox4->PasswordChar = '*';
		}
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		if (lb2 && textBox4->Text != "пароль") {
			textBox4->PasswordChar = '\0';
		}
		else if (lb3 && textBox4->Text != "пароль(не менее 6 символов)") {
			textBox4->PasswordChar = '\0';
		}
		if (lb3 && textBox5->Text != "повтор пароля") {
			textBox5->PasswordChar = '\0';
		}
	}
	else {
		if (lb2 && textBox4->Text != "пароль") {
			textBox4->PasswordChar = '*';
		}
		else if (lb3 && textBox4->Text != "пароль(не менее 6 символов)") {
			textBox4->PasswordChar = '*';
		}
		if (lb3 && textBox5->Text != "повтор пароля") {
			textBox5->PasswordChar = '*';
		}
	}
}
private: System::Void userentranse_Load(System::Object^ sender, System::EventArgs^ e) {
	if (lb2) {
		textBox4->Text = "пароль";
		if (textBox4->Text == "пароль" || checkBox1->Checked) {
			textBox4->PasswordChar = '\0';
		}
		else {
			textBox4->PasswordChar = '*';
		}
		textBox5->Visible = false;
	}
	else if (lb3) {
		textBox4->Text = "пароль(не менее 6 символов)";
		textBox5->Text = "повтор пароля";
		if (textBox4->Text == "пароль(не менее 6 символов)" || checkBox1->Checked) {
			textBox4->PasswordChar = '\0';
		}
		else {
			textBox4->PasswordChar = '*';
		}
		if (textBox5->Text == "повтор пароля" || checkBox1->Checked) {
			textBox5->PasswordChar = '\0';
		}
		else {
			textBox5->PasswordChar = '*';
		}
		textBox5->Visible = true;
	}
}
};
}
