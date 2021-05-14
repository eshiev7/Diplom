#pragma once
#include "Python.h"
#include <string>

namespace GameTheory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Py_Initialize();
		}

	protected:
		~MyForm()
		{
			Py_Finalize();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ player1;
	protected:
		private: System::Windows::Forms::Label^ player2_strategy1;
		private: System::Windows::Forms::Label^ player2_strategy2;
		private: System::Windows::Forms::Button^ reset_button;
	protected:
		private: System::Windows::Forms::Label^ player1_strategy1;
		private: System::Windows::Forms::Label^ player1_strategy2;
		private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ player2;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ result_1;
	private: System::Windows::Forms::TextBox^ pl1s1s1;
		private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ pl2s1s1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ pl1s1s2;
		private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ pl2s1s2;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
	public: System::Windows::Forms::TextBox^ result_2player;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ pl1s2s2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ pl2s2s2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ pl1s2s1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ pl2s2s1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::TextBox^ pl1s3s2;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ pl2s3s2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::TextBox^ pl1s3s1;
	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ pl2s3s1;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ label26;

private: System::Windows::Forms::Label^ result_2;
private: System::Windows::Forms::Label^ label6;
public: System::Windows::Forms::TextBox^ result_1player;
public:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->player2 = (gcnew System::Windows::Forms::Label());
			this->player1_strategy1 = (gcnew System::Windows::Forms::Label());
			this->player1_strategy2 = (gcnew System::Windows::Forms::Label());
			this->player1 = (gcnew System::Windows::Forms::Label());
			this->player2_strategy1 = (gcnew System::Windows::Forms::Label());
			this->player2_strategy2 = (gcnew System::Windows::Forms::Label());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->result_1 = (gcnew System::Windows::Forms::Label());
			this->result_2player = (gcnew System::Windows::Forms::TextBox());
			this->pl1s1s1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pl2s1s1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pl1s1s2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pl2s1s2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pl1s2s2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pl2s2s2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pl1s2s1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pl2s2s1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pl1s3s2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pl2s3s2 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pl1s3s1 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pl2s3s1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->result_2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->result_1player = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// player2
			// 
			this->player2->AutoSize = true;
			this->player2->BackColor = System::Drawing::Color::Transparent;
			this->player2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->player2->Location = System::Drawing::Point(12, 154);
			this->player2->Name = L"player2";
			this->player2->Size = System::Drawing::Size(48, 23);
			this->player2->TabIndex = 9;
			this->player2->Text = L"США";
			// 
			// player1_strategy1
			// 
			this->player1_strategy1->AutoSize = true;
			this->player1_strategy1->BackColor = System::Drawing::Color::Transparent;
			this->player1_strategy1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player1_strategy1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->player1_strategy1->Location = System::Drawing::Point(83, 116);
			this->player1_strategy1->Name = L"player1_strategy1";
			this->player1_strategy1->Size = System::Drawing::Size(68, 20);
			this->player1_strategy1->TabIndex = 6;
			this->player1_strategy1->Text = L"Агрессия";
			this->player1_strategy1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// player1_strategy2
			// 
			this->player1_strategy2->AutoSize = true;
			this->player1_strategy2->BackColor = System::Drawing::Color::Transparent;
			this->player1_strategy2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player1_strategy2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->player1_strategy2->Location = System::Drawing::Point(78, 176);
			this->player1_strategy2->Name = L"player1_strategy2";
			this->player1_strategy2->Size = System::Drawing::Size(73, 20);
			this->player1_strategy2->TabIndex = 7;
			this->player1_strategy2->Text = L"Ничего не";
			this->player1_strategy2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// player1
			// 
			this->player1->AutoSize = true;
			this->player1->BackColor = System::Drawing::Color::Transparent;
			this->player1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->player1->Location = System::Drawing::Point(321, 22);
			this->player1->Name = L"player1";
			this->player1->Size = System::Drawing::Size(107, 23);
			this->player1->TabIndex = 0;
			this->player1->Text = L"Страны ЦАР";
			// 
			// player2_strategy1
			// 
			this->player2_strategy1->AutoSize = true;
			this->player2_strategy1->BackColor = System::Drawing::Color::Transparent;
			this->player2_strategy1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player2_strategy1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->player2_strategy1->Location = System::Drawing::Point(181, 58);
			this->player2_strategy1->Name = L"player2_strategy1";
			this->player2_strategy1->Size = System::Drawing::Size(115, 20);
			this->player2_strategy1->TabIndex = 1;
			this->player2_strategy1->Text = L"Сотрудничество";
			// 
			// player2_strategy2
			// 
			this->player2_strategy2->AutoSize = true;
			this->player2_strategy2->BackColor = System::Drawing::Color::Transparent;
			this->player2_strategy2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player2_strategy2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->player2_strategy2->Location = System::Drawing::Point(312, 58);
			this->player2_strategy2->Name = L"player2_strategy2";
			this->player2_strategy2->Size = System::Drawing::Size(116, 20);
			this->player2_strategy2->TabIndex = 2;
			this->player2_strategy2->Text = L"Вести свою игру";
			// 
			// reset_button
			// 
			this->reset_button->BackColor = System::Drawing::SystemColors::HighlightText;
			this->reset_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->reset_button->FlatAppearance->BorderSize = 2;
			this->reset_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset_button->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->reset_button->Location = System::Drawing::Point(55, 313);
			this->reset_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(247, 36);
			this->reset_button->TabIndex = 5;
			this->reset_button->Text = L"Сбросить";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &MyForm::reset_button_Click);
			// 
			// calc_button
			// 
			this->calc_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->calc_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calc_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::HotTrack;
			this->calc_button->FlatAppearance->BorderSize = 0;
			this->calc_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calc_button->ForeColor = System::Drawing::SystemColors::Window;
			this->calc_button->Location = System::Drawing::Point(339, 313);
			this->calc_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(247, 36);
			this->calc_button->TabIndex = 8;
			this->calc_button->Text = L"Решить";
			this->calc_button->UseVisualStyleBackColor = false;
			this->calc_button->Click += gcnew System::EventHandler(this, &MyForm::calc_button_Click);
			// 
			// result_1
			// 
			this->result_1->AutoSize = true;
			this->result_1->BackColor = System::Drawing::Color::Transparent;
			this->result_1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->result_1->Location = System::Drawing::Point(75, 264);
			this->result_1->Name = L"result_1";
			this->result_1->Size = System::Drawing::Size(78, 20);
			this->result_1->TabIndex = 33;
			this->result_1->Text = L"Результат:";
			// 
			// result_2player
			// 
			this->result_2player->Location = System::Drawing::Point(445, 261);
			this->result_2player->Name = L"result_2player";
			this->result_2player->ReadOnly = true;
			this->result_2player->Size = System::Drawing::Size(135, 26);
			this->result_2player->TabIndex = 34;
			// 
			// pl1s1s1
			// 
			this->pl1s1s1->BackColor = System::Drawing::SystemColors::Window;
			this->pl1s1s1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl1s1s1->Location = System::Drawing::Point(186, 122);
			this->pl1s1s1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl1s1s1->Name = L"pl1s1s1";
			this->pl1s1s1->Size = System::Drawing::Size(36, 19);
			this->pl1s1s1->TabIndex = 37;
			this->pl1s1s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(192, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 20);
			this->label1->TabIndex = 42;
			this->label1->Text = L"___";
			// 
			// pl2s1s1
			// 
			this->pl2s1s1->BackColor = System::Drawing::SystemColors::Window;
			this->pl2s1s1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl2s1s1->Location = System::Drawing::Point(244, 122);
			this->pl2s1s1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl2s1s1->Name = L"pl2s1s1";
			this->pl2s1s1->Size = System::Drawing::Size(36, 19);
			this->pl2s1s1->TabIndex = 39;
			this->pl2s1s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(247, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 20);
			this->label2->TabIndex = 41;
			this->label2->Text = L"___";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(228, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 20);
			this->label3->TabIndex = 40;
			this->label3->Text = L";";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(167, 97);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 64);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// pl1s1s2
			// 
			this->pl1s1s2->BackColor = System::Drawing::SystemColors::Window;
			this->pl1s1s2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl1s1s2->Location = System::Drawing::Point(186, 192);
			this->pl1s1s2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl1s1s2->Name = L"pl1s1s2";
			this->pl1s1s2->Size = System::Drawing::Size(36, 19);
			this->pl1s1s2->TabIndex = 49;
			this->pl1s1s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Window;
			this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label15->Location = System::Drawing::Point(192, 196);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 20);
			this->label15->TabIndex = 54;
			this->label15->Text = L"___";
			// 
			// pl2s1s2
			// 
			this->pl2s1s2->BackColor = System::Drawing::SystemColors::Window;
			this->pl2s1s2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl2s1s2->Location = System::Drawing::Point(244, 192);
			this->pl2s1s2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl2s1s2->Name = L"pl2s1s2";
			this->pl2s1s2->Size = System::Drawing::Size(36, 19);
			this->pl2s1s2->TabIndex = 51;
			this->pl2s1s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Window;
			this->label16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label16->Location = System::Drawing::Point(247, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 20);
			this->label16->TabIndex = 53;
			this->label16->Text = L"___";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Window;
			this->label17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label17->Location = System::Drawing::Point(228, 192);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 20);
			this->label17->TabIndex = 52;
			this->label17->Text = L";";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(167, 167);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(135, 64);
			this->pictureBox3->TabIndex = 50;
			this->pictureBox3->TabStop = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label24->Location = System::Drawing::Point(441, 58);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(145, 20);
			this->label24->TabIndex = 67;
			this->label24->Text = L"Противодействовать";
			// 
			// pl1s2s2
			// 
			this->pl1s2s2->BackColor = System::Drawing::SystemColors::Window;
			this->pl1s2s2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl1s2s2->Location = System::Drawing::Point(325, 192);
			this->pl1s2s2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl1s2s2->Name = L"pl1s2s2";
			this->pl1s2s2->Size = System::Drawing::Size(36, 19);
			this->pl1s2s2->TabIndex = 74;
			this->pl1s2s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(331, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 20);
			this->label4->TabIndex = 79;
			this->label4->Text = L"___";
			// 
			// pl2s2s2
			// 
			this->pl2s2s2->BackColor = System::Drawing::SystemColors::Window;
			this->pl2s2s2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl2s2s2->Location = System::Drawing::Point(383, 192);
			this->pl2s2s2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl2s2s2->Name = L"pl2s2s2";
			this->pl2s2s2->Size = System::Drawing::Size(36, 19);
			this->pl2s2s2->TabIndex = 76;
			this->pl2s2s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(386, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 20);
			this->label5->TabIndex = 78;
			this->label5->Text = L"___";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(367, 192);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 20);
			this->label11->TabIndex = 77;
			this->label11->Text = L";";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(306, 167);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(135, 64);
			this->pictureBox2->TabIndex = 75;
			this->pictureBox2->TabStop = false;
			// 
			// pl1s2s1
			// 
			this->pl1s2s1->BackColor = System::Drawing::SystemColors::Window;
			this->pl1s2s1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl1s2s1->Location = System::Drawing::Point(325, 122);
			this->pl1s2s1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl1s2s1->Name = L"pl1s2s1";
			this->pl1s2s1->Size = System::Drawing::Size(36, 19);
			this->pl1s2s1->TabIndex = 68;
			this->pl1s2s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label12->Location = System::Drawing::Point(331, 126);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 20);
			this->label12->TabIndex = 73;
			this->label12->Text = L"___";
			// 
			// pl2s2s1
			// 
			this->pl2s2s1->BackColor = System::Drawing::SystemColors::Window;
			this->pl2s2s1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl2s2s1->Location = System::Drawing::Point(383, 122);
			this->pl2s2s1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl2s2s1->Name = L"pl2s2s1";
			this->pl2s2s1->Size = System::Drawing::Size(36, 19);
			this->pl2s2s1->TabIndex = 70;
			this->pl2s2s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Window;
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(386, 126);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 20);
			this->label13->TabIndex = 72;
			this->label13->Text = L"___";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Window;
			this->label14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label14->Location = System::Drawing::Point(367, 122);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 20);
			this->label14->TabIndex = 71;
			this->label14->Text = L";";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(306, 97);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(135, 64);
			this->pictureBox4->TabIndex = 69;
			this->pictureBox4->TabStop = false;
			// 
			// pl1s3s2
			// 
			this->pl1s3s2->BackColor = System::Drawing::SystemColors::Window;
			this->pl1s3s2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl1s3s2->Location = System::Drawing::Point(464, 192);
			this->pl1s3s2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl1s3s2->Name = L"pl1s3s2";
			this->pl1s3s2->Size = System::Drawing::Size(36, 19);
			this->pl1s3s2->TabIndex = 86;
			this->pl1s3s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Window;
			this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label18->Location = System::Drawing::Point(470, 196);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(30, 20);
			this->label18->TabIndex = 91;
			this->label18->Text = L"___";
			// 
			// pl2s3s2
			// 
			this->pl2s3s2->BackColor = System::Drawing::SystemColors::Window;
			this->pl2s3s2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl2s3s2->Location = System::Drawing::Point(522, 192);
			this->pl2s3s2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl2s3s2->Name = L"pl2s3s2";
			this->pl2s3s2->Size = System::Drawing::Size(36, 19);
			this->pl2s3s2->TabIndex = 88;
			this->pl2s3s2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Window;
			this->label19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label19->Location = System::Drawing::Point(525, 196);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(30, 20);
			this->label19->TabIndex = 90;
			this->label19->Text = L"___";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Window;
			this->label20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label20->Location = System::Drawing::Point(506, 192);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 20);
			this->label20->TabIndex = 89;
			this->label20->Text = L";";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(445, 167);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(135, 64);
			this->pictureBox5->TabIndex = 87;
			this->pictureBox5->TabStop = false;
			// 
			// pl1s3s1
			// 
			this->pl1s3s1->BackColor = System::Drawing::SystemColors::Window;
			this->pl1s3s1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl1s3s1->Location = System::Drawing::Point(464, 122);
			this->pl1s3s1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl1s3s1->Name = L"pl1s3s1";
			this->pl1s3s1->Size = System::Drawing::Size(36, 19);
			this->pl1s3s1->TabIndex = 80;
			this->pl1s3s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::Window;
			this->label21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label21->Location = System::Drawing::Point(470, 126);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(30, 20);
			this->label21->TabIndex = 85;
			this->label21->Text = L"___";
			// 
			// pl2s3s1
			// 
			this->pl2s3s1->BackColor = System::Drawing::SystemColors::Window;
			this->pl2s3s1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pl2s3s1->Location = System::Drawing::Point(522, 122);
			this->pl2s3s1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pl2s3s1->Name = L"pl2s3s1";
			this->pl2s3s1->Size = System::Drawing::Size(36, 19);
			this->pl2s3s1->TabIndex = 82;
			this->pl2s3s1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Window;
			this->label22->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label22->Location = System::Drawing::Point(525, 126);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 20);
			this->label22->TabIndex = 84;
			this->label22->Text = L"___";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::Window;
			this->label23->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label23->Location = System::Drawing::Point(506, 122);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 20);
			this->label23->TabIndex = 83;
			this->label23->Text = L";";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(445, 97);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(135, 64);
			this->pictureBox6->TabIndex = 81;
			this->pictureBox6->TabStop = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label26->Location = System::Drawing::Point(98, 196);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(53, 20);
			this->label26->TabIndex = 93;
			this->label26->Text = L"делать";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// result_2
			// 
			this->result_2->AutoSize = true;
			this->result_2->BackColor = System::Drawing::Color::Transparent;
			this->result_2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->result_2->Location = System::Drawing::Point(379, 264);
			this->result_2->Name = L"result_2";
			this->result_2->Size = System::Drawing::Size(60, 20);
			this->result_2->TabIndex = 94;
			this->result_2->Text = L"2 игрок:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(164, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 20);
			this->label6->TabIndex = 96;
			this->label6->Text = L"1 игрок:";
			// 
			// result_1player
			// 
			this->result_1player->Location = System::Drawing::Point(230, 261);
			this->result_1player->Name = L"result_1player";
			this->result_1player->ReadOnly = true;
			this->result_1player->Size = System::Drawing::Size(135, 26);
			this->result_1player->TabIndex = 95;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(653, 381);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->result_1player);
			this->Controls->Add(this->result_2);
			this->Controls->Add(this->pl1s3s2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pl2s3s2);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pl1s3s1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->pl2s3s1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pl1s2s2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pl2s2s2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pl1s2s1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pl2s2s1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->pl1s1s2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pl2s1s2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pl1s1s1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pl2s1s1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->result_2player);
			this->Controls->Add(this->result_1);
			this->Controls->Add(this->player2);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->player1_strategy2);
			this->Controls->Add(this->player1_strategy1);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->player2_strategy2);
			this->Controls->Add(this->player2_strategy1);
			this->Controls->Add(this->player1);
			this->Controls->Add(this->label26);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nash Equilibrium";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) {
		pl1s1s1->Text = L"";
		pl1s1s2->Text = L"";

		pl1s2s1->Text = L"";
		pl1s2s2->Text = L"";
		
		pl1s3s1->Text = L"";
		pl1s3s2->Text = L"";
		
		pl2s1s1->Text = L"";
		pl2s1s2->Text = L"";
		
		pl2s2s1->Text = L"";
		pl2s2s2->Text = L"";
		
		pl2s3s1->Text = L"";
		pl2s3s2->Text = L"";

		result_1player->Text = L"";
		result_2player->Text = L"";
	}

	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		PyObject* pName, * pModule, * pFunc, * pArgs, * pValue;
		pName = PyUnicode_FromString((char*)"calculation");
		pModule = PyImport_Import(pName);
		pFunc = PyObject_GetAttrString(pModule, (char*)"calc");
		pArgs = PyTuple_Pack(12,
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl1s1s1->Text)),
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl1s1s2->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl1s2s1->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl1s2s2->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl1s3s1->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl1s3s2->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl2s1s1->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl2s1s2->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl2s2s1->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl2s2s2->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl2s3s1->Text)), 
			PyFloat_FromDouble((double)System::Convert::ToDouble(pl2s3s2->Text)));
		pValue = PyObject_CallObject(pFunc, pArgs);
		std::string res = _PyUnicode_AsString(pValue);
		auto iter = res.find("],");
		auto iter2 = res.find("]]"); 
		res.replace(iter2, iter2 + 1, "]");

		std::string res_1_player = res.substr(1, iter);
		std::string res_2_player = res.substr(iter + 2);
		String^ res1_player = gcnew String(res_1_player.c_str());
		String^ res2_player = gcnew String(res_2_player.c_str());
		
		result_1player->Text = res1_player;
		result_2player->Text = res2_player;
	}
};
};