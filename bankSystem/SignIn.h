#pragma once
#include <fstream>
#include "Admin.h"
#include "Deposit.h"
#include "DashBoard.h"
#include "FrontDesk.h"
#include "Withdrawal.h"
#include "CustomerService.h"
#include "AllServices.h"

namespace bankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for SignIn
	/// </summary>
	public ref class SignIn : public System::Windows::Forms::Form
	{
	Form^ activeForm;
	User* user = new User;
	Services* depositList = new Deposit{};
	Services* withdrawalList = new Withdrawal{};
	Services* customerServiceList = new CustomerService{};
	Services* frontDeskList = new FrontDesk{};
	AllServices* allServices = new AllServices{};
	SignIn^ instance;
	private: System::Windows::Forms::Panel^ SignUpPanel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox6;


	private: System::Windows::Forms::Panel^ panel6;

	public:
	public:
		SignIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			instance = this;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ SignInPanel;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignIn::typeid));
			this->SignInPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SignUpPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SignInPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SignUpPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// SignInPanel
			// 
			this->SignInPanel->Controls->Add(this->panel2);
			this->SignInPanel->Controls->Add(this->pictureBox1);
			this->SignInPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SignInPanel->Location = System::Drawing::Point(0, 0);
			this->SignInPanel->Name = L"SignInPanel";
			this->SignInPanel->Size = System::Drawing::Size(1166, 637);
			this->SignInPanel->TabIndex = 0;
			this->SignInPanel->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(721, 637);
			this->panel2->TabIndex = 2;
			this->panel2->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button2->Location = System::Drawing::Point(270, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 30);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SignIn::button2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(254, 538);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(143, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &SignIn::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(167, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(167, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(230, 498);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Don\'t have account\?";
			this->label4->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel6->Location = System::Drawing::Point(349, 461);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(120, 2);
			this->panel6->TabIndex = 11;
			this->panel6->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 452);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"OR";
			this->label3->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel5->Location = System::Drawing::Point(186, 461);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(120, 2);
			this->panel5->TabIndex = 9;
			this->panel5->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->Location = System::Drawing::Point(208, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 52);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignIn::signIn_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel3->Location = System::Drawing::Point(168, 312);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(320, 2);
			this->panel3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox2->Location = System::Drawing::Point(168, 280);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 28);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Password";
			this->textBox2->Click += gcnew System::EventHandler(this, &SignIn::textBox2_Click_1);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox2_TextChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel8->Location = System::Drawing::Point(168, 233);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(320, 2);
			this->panel8->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->Location = System::Drawing::Point(168, 201);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 28);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &SignIn::textBox1_Click_1);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(172, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sign in to continue";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label1->Location = System::Drawing::Point(157, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welome";
			this->label1->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(193, 352);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(270, 70);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &SignIn::signIn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(721, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(445, 637);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SignIn::otherClick);
			// 
			// SignUpPanel
			// 
			this->SignUpPanel->Controls->Add(this->pictureBox6);
			this->SignUpPanel->Controls->Add(this->panel1);
			this->SignUpPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SignUpPanel->Location = System::Drawing::Point(0, 0);
			this->SignUpPanel->Name = L"SignUpPanel";
			this->SignUpPanel->Size = System::Drawing::Size(1166, 637);
			this->SignUpPanel->TabIndex = 29;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(721, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(445, 637);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->panel14);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(720, 637);
			this->panel1->TabIndex = 4;
			this->panel1->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(170, 309);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 15);
			this->label10->TabIndex = 31;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel4->Location = System::Drawing::Point(171, 373);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(320, 2);
			this->panel4->TabIndex = 30;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel7->Location = System::Drawing::Point(171, 304);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(320, 2);
			this->panel7->TabIndex = 29;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox6->Location = System::Drawing::Point(171, 272);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(320, 28);
			this->textBox6->TabIndex = 28;
			this->textBox6->Text = L"Username";
			this->textBox6->Click += gcnew System::EventHandler(this, &SignIn::textBox6_Click);
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox6_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button3->Location = System::Drawing::Point(273, 586);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 30);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Sign In";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SignIn::bringSingInPanel);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(257, 584);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(143, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &SignIn::bringSingInPanel);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button4->Location = System::Drawing::Point(211, 414);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(241, 52);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Sign Up";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SignIn::signUp_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(196, 405);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(270, 70);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &SignIn::signUp_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(337, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 15);
			this->label9->TabIndex = 25;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel10->Location = System::Drawing::Point(338, 243);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(190, 2);
			this->panel10->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox5->Location = System::Drawing::Point(338, 211);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(190, 28);
			this->textBox5->TabIndex = 23;
			this->textBox5->Text = L"Balance";
			this->textBox5->Click += gcnew System::EventHandler(this, &SignIn::textBox5_Click);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox5_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(127, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 15);
			this->label8->TabIndex = 22;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel9->Location = System::Drawing::Point(128, 243);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(190, 2);
			this->panel9->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox4->Location = System::Drawing::Point(128, 211);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(190, 28);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"Priority";
			this->textBox4->Click += gcnew System::EventHandler(this, &SignIn::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(337, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 15);
			this->label7->TabIndex = 19;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel11->Location = System::Drawing::Point(338, 172);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(190, 2);
			this->panel11->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox3->Location = System::Drawing::Point(338, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(190, 28);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"Last name";
			this->textBox3->Click += gcnew System::EventHandler(this, &SignIn::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox3_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(170, 379);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 15);
			this->label11->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(127, 177);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 15);
			this->label12->TabIndex = 15;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label13->Location = System::Drawing::Point(257, 541);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 25);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Have account\?";
			this->label13->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel12->Location = System::Drawing::Point(352, 520);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(120, 2);
			this->panel12->TabIndex = 11;
			this->panel12->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(315, 511);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 20);
			this->label14->TabIndex = 10;
			this->label14->Text = L"OR";
			this->label14->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel13->Location = System::Drawing::Point(190, 520);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(120, 2);
			this->panel13->TabIndex = 9;
			this->panel13->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox7->Location = System::Drawing::Point(171, 339);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(320, 28);
			this->textBox7->TabIndex = 5;
			this->textBox7->Text = L"Password";
			this->textBox7->Click += gcnew System::EventHandler(this, &SignIn::textBox7_Click);
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox7_TextChanged);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel14->Location = System::Drawing::Point(128, 172);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(190, 2);
			this->panel14->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox8->Location = System::Drawing::Point(128, 140);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(190, 28);
			this->textBox8->TabIndex = 3;
			this->textBox8->Text = L"First name";
			this->textBox8->Click += gcnew System::EventHandler(this, &SignIn::textBox8_Click);
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &SignIn::textBox8_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label15->Location = System::Drawing::Point(126, 87);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(193, 25);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Create your account ";
			this->label15->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label16->Location = System::Drawing::Point(120, 23);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 64);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Hi";
			this->label16->Click += gcnew System::EventHandler(this, &SignIn::other_Click);
			// 
			// SignIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 637);
			this->Controls->Add(this->SignInPanel);
			this->Controls->Add(this->SignUpPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SignIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IMŌ Bank";
			this->SignInPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->SignUpPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Sign In Panel Code
	public: void openChildForm(Form^ childForm, System::Object^ sender) {
		if (activeForm != nullptr)
			activeForm->Close();

		activeForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = System::Windows::Forms::DockStyle::Fill;
		instance->Controls->Add(childForm);
		instance->Tag = childForm;
		childForm->BringToFront();
		childForm->Show();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (user->isUserNameSignIn(textBox1) == true)
			label5->Text = "";

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (user->passwordSignIn(textBox1, textBox2) == true)
			label6->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {		
		SignUpPanel->BringToFront();
	}
	private: System::Void textBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox1->Text == "Username")
			textBox1->Text = "";
		if (textBox2->Text == "") {
			textBox2->Text = "Password";
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->UseSystemPasswordChar = false;
		}
	}
	private: System::Void textBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
		textBox2->UseSystemPasswordChar = true;
		if (textBox2->Text == "Password")
			textBox2->Text = "";
		if (textBox1->Text == "") {
			textBox1->Text = "Username";
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void signIn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "admin" && textBox2->Text == "enter") {
			Admin^ newForm = gcnew Admin(depositList, withdrawalList, customerServiceList, frontDeskList, allServices);
			newForm->Show();
		}
		if (user->isUserNameSignIn(textBox1) == false && textBox1->Text != "admin")
			label5->Text = "Incorrect Username";

		if (user->isPasswordSignIn(textBox1, textBox2) == false && textBox2->Text != "enter")
			label6->Text = "Incorrect Password";
		if (user->isUserNameSignIn(textBox1) == true && user->isPasswordSignIn(textBox1, textBox2) == true) {
			user->signIn(textBox1);
			DashBoard^ newForm = gcnew DashBoard(*user, textBox1, textBox2, depositList, withdrawalList, customerServiceList, frontDeskList, allServices);
			openChildForm(newForm, sender);
		}
	}
	private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Username";
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox2->Text == "") {
			textBox2->Text = "Password";
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->UseSystemPasswordChar = false;
		}
	}
	//SignUp Panel Code
	private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox8->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox8->Text == "First name")
			textBox8->Text = "";
		if (textBox3->Text == "") {
			textBox3->Text = "Last name";
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox7->Text == "") {
			textBox7->Text = "Password";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->UseSystemPasswordChar = false;
		}
		if (textBox4->Text == "") {
			textBox4->Text = "Priority";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox5->Text == "") {
			textBox5->Text = "Balance";
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox6->Text == "") {
			textBox6->Text = "Username";
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox3->Text == "Last name")
			textBox3->Text = "";
		if (textBox8->Text == "") {
			textBox8->Text = "First name";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox7->Text == "") {
			textBox7->Text = "Password";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->UseSystemPasswordChar = false;
		}
		if (textBox4->Text == "") {
			textBox4->Text = "Priority";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox5->Text == "") {
			textBox5->Text = "Balance";
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox6->Text == "") {
			textBox6->Text = "Username";
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox4->Text == "Priority")
			textBox4->Text = "";
		if (textBox8->Text == "") {
			textBox8->Text = "First name";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox3->Text == "") {
			textBox3->Text = "Last name";
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox7->Text == "") {
			textBox7->Text = "Password";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->UseSystemPasswordChar = false;
		}
		if (textBox5->Text == "") {
			textBox5->Text = "Balance";
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox6->Text == "") {
			textBox6->Text = "Username";
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox5->Text == "Balance")
			textBox5->Text = "";
		if (textBox4->Text == "") {
			textBox4->Text = "Priority";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox8->Text == "") {
			textBox8->Text = "First name";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox3->Text == "") {
			textBox3->Text = "Last name";
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox7->Text == "") {
			textBox7->Text = "Password";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->UseSystemPasswordChar = false;
		}
		if (textBox6->Text == "") {
			textBox6->Text = "Username";
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox6->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox6->Text == "Username")
			textBox6->Text = "";
		if (textBox4->Text == "") {
			textBox4->Text = "Priority";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox8->Text == "") {
			textBox8->Text = "First name";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox3->Text == "") {
			textBox3->Text = "Last name";
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox7->Text == "") {
			textBox7->Text = "Password";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->UseSystemPasswordChar = false;
		}
		if (textBox5->Text == "") {
			textBox5->Text = "Balance";
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox7->ForeColor = System::Drawing::SystemColors::WindowText;
		textBox7->UseSystemPasswordChar = true;
		if (textBox7->Text == "Password")
			textBox7->Text = "";
		if (textBox8->Text == "") {
			textBox8->Text = "First name";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox3->Text == "") {
			textBox3->Text = "Last name";
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox4->Text == "") {
			textBox4->Text = "Priority";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox5->Text == "") {
			textBox5->Text = "Balance";
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox6->Text == "") {
			textBox6->Text = "Username";
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text != "First name" && textBox8->Text != "")
			label12->Text = "";
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text != "Last name" && textBox3->Text != "")
			label7->Text = "";
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text != "Priority" && textBox4->Text != "" && (textBox4->Text == "Gold" || textBox4->Text == "gold" || textBox4->Text == "Regular" || textBox4->Text == "regular" || textBox4->Text == "Platinum" || textBox4->Text == "platinum"))
			label8->Text = "";
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text != "Balance" && textBox5->Text != "")
			label9->Text = "";
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (user->userNameCompare(textBox6) == false && textBox6->Text != "")
			label10->Text = "";
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7->Text != "Password" && textBox7->Text != "")
			label11->Text = "";
	}
	private: System::Boolean check(System::String^ s) {
		if (s == "Gold" || s == "gold")
			return true;
		if (s == "Regular" || s == "regular")
			return true;
		if (s == "Platinum" || s == "platinum")
			return true;
		return false;
	}
	private: System::Void signUp_Click(System::Object^ sender, System::EventArgs^ e) {
		bool flag = true;
		if (textBox8->Text == "First name" || textBox8->Text == "") {
			label12->Text = "Enter first name";
			flag = false;
		}
		if (textBox3->Text == "Last name" || textBox3->Text == "") {
			label7->Text = "Enter last name";
			flag = false;
		}
		if (textBox7->Text == "Password" || textBox7->Text == "") {
			label11->Text = "Enter password";
			flag = false;
		}
		if (!check(textBox4->Text)) {
			label8->Text = "Enter Regular or Gold or Platinum";
			flag = false;
		}
		if (textBox5->Text == "Balance" || textBox5->Text == "") {
			label9->Text = "Enter balance";
			flag = false;
		}
		if (textBox6->Text == "Username" || textBox6->Text == "") {
			label10->Text = "Enter username";
			flag = false;
		}
		if (user->userNameCompare(textBox6) == true) {
			label10->Text = "This username already exists";
			flag = false;
		}
		if (flag) {
			user->createAccount(textBox8, textBox3, textBox4, textBox5, textBox6, textBox7);
			SignInPanel->BringToFront();
			//textBox8->ResetBackColor();
			textBox8->ResetText();
			//if (textBox8->Text != "") {
				//textBox8->Text = "First name";
				//textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//}
			if (textBox3->Text != "") {
				textBox3->Text = "Last name";
				textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			}
			if (textBox7->Text != "") {
				textBox7->Text = "Password";
				textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
				textBox7->UseSystemPasswordChar = false;
			}
			if (textBox4->Text != "") {
				textBox4->Text = "Priority";
				textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			}
			if (textBox5->Text != "") {
				textBox5->Text = "Balance";
				textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			}
			if (textBox6->Text != "") {
				textBox6->Text = "Username";
				textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			}

		}
	}
	private: System::Void bringSingInPanel(System::Object^ sender, System::EventArgs^ e) {
		SignInPanel->BringToFront();
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "") {
			textBox4->Text = "Priority";
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox8->Text == "") {
			textBox8->Text = "First name";
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox3->Text == "") {
			textBox3->Text = "Last name";
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox7->Text == "") {
			textBox7->Text = "Password";
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->UseSystemPasswordChar = false;
		}
		if (textBox5->Text == "") {
			textBox5->Text = "Balance";
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
		if (textBox6->Text == "") {
			textBox6->Text = "Username";
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}
	}
};
}
