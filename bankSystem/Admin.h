#pragma once
#include <fstream>
#include <iomanip>
#include "Services.h"
#include "AllServices.h"


namespace bankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		System::String^ str;
		Admin^ instance;
		Services* depositList;
		Services* withdrawalList;
		Services* customerServiceList;
		AllServices* allServices;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label30;
	public:
		Services* frontDeskList;
	public:
		Admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			instance = this;
		}
		Admin(Services* deposit, Services* withdrawal, Services* customerService, Services* frontDesk, AllServices* allServices)
		{
			InitializeComponent();
			instance = this;
			depositList = deposit;
			withdrawalList = withdrawal;
			customerServiceList = customerService;
			frontDeskList = frontDesk;
			this->allServices = allServices;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ HomePanel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ DepositShowTimePanel;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ WithdrawalShowTimePanel;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ FrontDeskShowTimePanel;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ CustomerServiceShowTimePanel;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ AllServicesShowTimePanel;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->HomePanel = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->DepositShowTimePanel = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->WithdrawalShowTimePanel = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->FrontDeskShowTimePanel = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->CustomerServiceShowTimePanel = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->AllServicesShowTimePanel = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->HomePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->DepositShowTimePanel->SuspendLayout();
			this->WithdrawalShowTimePanel->SuspendLayout();
			this->FrontDeskShowTimePanel->SuspendLayout();
			this->CustomerServiceShowTimePanel->SuspendLayout();
			this->AllServicesShowTimePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label39->Location = System::Drawing::Point(90, 18);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(172, 58);
			this->label39->TabIndex = 112;
			this->label39->Text = L"Admin";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(141, 143);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(118, 32);
			this->label13->TabIndex = 114;
			this->label13->Text = L"Deposit";
			this->label13->Click += gcnew System::EventHandler(this, &Admin::DepositLineOrder_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(100, 129);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(200, 60);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 113;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Admin::DepositLineOrder_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-34, -30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(80, 637);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(20, 560);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(35, 35);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Admin::pictureBox8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(119, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 32);
			this->label1->TabIndex = 116;
			this->label1->Text = L"Front Desk";
			this->label1->Click += gcnew System::EventHandler(this, &Admin::FrontDesk_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(99, 253);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(200, 60);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 115;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Admin::FrontDesk_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(802, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 32);
			this->label2->TabIndex = 118;
			this->label2->Text = L"Withdrawal";
			this->label2->Click += gcnew System::EventHandler(this, &Admin::withdrawalLineOrder_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(784, 129);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 60);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 117;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Admin::withdrawalLineOrder_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(792, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 25);
			this->label3->TabIndex = 120;
			this->label3->Text = L"Customer Service";
			this->label3->Click += gcnew System::EventHandler(this, &Admin::customerServiceLineOrder_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(784, 256);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(200, 60);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 119;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Admin::customerServiceLineOrder_Click);
			// 
			// HomePanel
			// 
			this->HomePanel->Controls->Add(this->label25);
			this->HomePanel->Controls->Add(this->label24);
			this->HomePanel->Controls->Add(this->label23);
			this->HomePanel->Controls->Add(this->label22);
			this->HomePanel->Controls->Add(this->label6);
			this->HomePanel->Controls->Add(this->label7);
			this->HomePanel->Controls->Add(this->pictureBox7);
			this->HomePanel->Controls->Add(this->label8);
			this->HomePanel->Controls->Add(this->pictureBox9);
			this->HomePanel->Controls->Add(this->label9);
			this->HomePanel->Controls->Add(this->pictureBox10);
			this->HomePanel->Controls->Add(this->label10);
			this->HomePanel->Controls->Add(this->pictureBox11);
			this->HomePanel->Controls->Add(this->label5);
			this->HomePanel->Controls->Add(this->label4);
			this->HomePanel->Controls->Add(this->pictureBox5);
			this->HomePanel->Controls->Add(this->label39);
			this->HomePanel->Controls->Add(this->label13);
			this->HomePanel->Controls->Add(this->pictureBox15);
			this->HomePanel->Controls->Add(this->label1);
			this->HomePanel->Controls->Add(this->pictureBox2);
			this->HomePanel->Controls->Add(this->label2);
			this->HomePanel->Controls->Add(this->pictureBox3);
			this->HomePanel->Controls->Add(this->label3);
			this->HomePanel->Controls->Add(this->pictureBox4);
			this->HomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HomePanel->Location = System::Drawing::Point(80, 0);
			this->HomePanel->Name = L"HomePanel";
			this->HomePanel->Size = System::Drawing::Size(1086, 637);
			this->HomePanel->TabIndex = 121;
			this->HomePanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->HomePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->HomePanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(780, 612);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 26);
			this->label25->TabIndex = 136;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(95, 609);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 26);
			this->label24->TabIndex = 135;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(779, 485);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 26);
			this->label23->TabIndex = 134;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(95, 485);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 26);
			this->label22->TabIndex = 133;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label6->Location = System::Drawing::Point(51, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(234, 32);
			this->label6->TabIndex = 132;
			this->label6->Text = L"Show Line Order:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(141, 436);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 32);
			this->label7->TabIndex = 125;
			this->label7->Text = L"Deposit";
			this->label7->Click += gcnew System::EventHandler(this, &Admin::depositTime_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(100, 422);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(200, 60);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 124;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Admin::depositTime_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(119, 560);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(161, 32);
			this->label8->TabIndex = 127;
			this->label8->Text = L"Front Desk";
			this->label8->Click += gcnew System::EventHandler(this, &Admin::frontDeskTime_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(99, 546);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(200, 60);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 126;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Admin::frontDeskTime_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(802, 436);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 32);
			this->label9->TabIndex = 129;
			this->label9->Text = L"Withdrawal";
			this->label9->Click += gcnew System::EventHandler(this, &Admin::withdrawalTime_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(784, 422);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(200, 60);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 128;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Admin::withdrawalTime_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(792, 567);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(184, 25);
			this->label10->TabIndex = 131;
			this->label10->Text = L"Customer Service";
			this->label10->Click += gcnew System::EventHandler(this, &Admin::customerServiceTime_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(784, 549);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(200, 60);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 130;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Admin::customerServiceTime_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label5->Location = System::Drawing::Point(51, 361);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 32);
			this->label5->TabIndex = 123;
			this->label5->Text = L"Average Time:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(471, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 32);
			this->label4->TabIndex = 122;
			this->label4->Text = L"All Services";
			this->label4->Click += gcnew System::EventHandler(this, &Admin::allServicesLineOrder_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(458, 205);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(200, 60);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 121;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Admin::allServicesLineOrder_Click);
			// 
			// DepositShowTimePanel
			// 
			this->DepositShowTimePanel->Controls->Add(this->label34);
			this->DepositShowTimePanel->Controls->Add(this->label29);
			this->DepositShowTimePanel->Controls->Add(this->button10);
			this->DepositShowTimePanel->Controls->Add(this->button5);
			this->DepositShowTimePanel->Controls->Add(this->richTextBox1);
			this->DepositShowTimePanel->Controls->Add(this->label11);
			this->DepositShowTimePanel->Controls->Add(this->panel2);
			this->DepositShowTimePanel->Controls->Add(this->label12);
			this->DepositShowTimePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DepositShowTimePanel->Location = System::Drawing::Point(80, 0);
			this->DepositShowTimePanel->Name = L"DepositShowTimePanel";
			this->DepositShowTimePanel->Size = System::Drawing::Size(1086, 637);
			this->DepositShowTimePanel->TabIndex = 133;
			this->DepositShowTimePanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->DepositShowTimePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->DepositShowTimePanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(105, 570);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(56, 25);
			this->label34->TabIndex = 10;
			this->label34->Text = L"Time";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label29->Location = System::Drawing::Point(103, 531);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(383, 29);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Time customer took to be serviced";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(702, 560);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 60);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Next";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Admin::depositNext_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(846, 560);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::goBack_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(108, 178);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(876, 345);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(518, 94);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 46);
			this->label11->TabIndex = 3;
			this->label11->Text = L"1";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(439, 67);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(458, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(163, 29);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Line Number";
			// 
			// WithdrawalShowTimePanel
			// 
			this->WithdrawalShowTimePanel->Controls->Add(this->label33);
			this->WithdrawalShowTimePanel->Controls->Add(this->label28);
			this->WithdrawalShowTimePanel->Controls->Add(this->button6);
			this->WithdrawalShowTimePanel->Controls->Add(this->button1);
			this->WithdrawalShowTimePanel->Controls->Add(this->richTextBox2);
			this->WithdrawalShowTimePanel->Controls->Add(this->label14);
			this->WithdrawalShowTimePanel->Controls->Add(this->panel4);
			this->WithdrawalShowTimePanel->Controls->Add(this->label15);
			this->WithdrawalShowTimePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WithdrawalShowTimePanel->Location = System::Drawing::Point(80, 0);
			this->WithdrawalShowTimePanel->Name = L"WithdrawalShowTimePanel";
			this->WithdrawalShowTimePanel->Size = System::Drawing::Size(1086, 637);
			this->WithdrawalShowTimePanel->TabIndex = 134;
			this->WithdrawalShowTimePanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->WithdrawalShowTimePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->WithdrawalShowTimePanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(105, 570);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(56, 25);
			this->label33->TabIndex = 10;
			this->label33->Text = L"Time";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label28->Location = System::Drawing::Point(103, 531);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(383, 29);
			this->label28->TabIndex = 9;
			this->label28->Text = L"Time customer took to be serviced";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(702, 560);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(138, 60);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Next";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Admin::withdrawaLNext_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(846, 560);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 60);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::goBack_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(108, 178);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(876, 345);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(518, 94);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 46);
			this->label14->TabIndex = 3;
			this->label14->Text = L"1";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(439, 67);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 100);
			this->panel4->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(458, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(163, 29);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Line Number";
			// 
			// FrontDeskShowTimePanel
			// 
			this->FrontDeskShowTimePanel->Controls->Add(this->label31);
			this->FrontDeskShowTimePanel->Controls->Add(this->label26);
			this->FrontDeskShowTimePanel->Controls->Add(this->button9);
			this->FrontDeskShowTimePanel->Controls->Add(this->button4);
			this->FrontDeskShowTimePanel->Controls->Add(this->richTextBox3);
			this->FrontDeskShowTimePanel->Controls->Add(this->label16);
			this->FrontDeskShowTimePanel->Controls->Add(this->panel5);
			this->FrontDeskShowTimePanel->Controls->Add(this->label17);
			this->FrontDeskShowTimePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FrontDeskShowTimePanel->Location = System::Drawing::Point(80, 0);
			this->FrontDeskShowTimePanel->Name = L"FrontDeskShowTimePanel";
			this->FrontDeskShowTimePanel->Size = System::Drawing::Size(1086, 637);
			this->FrontDeskShowTimePanel->TabIndex = 135;
			this->FrontDeskShowTimePanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->FrontDeskShowTimePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->FrontDeskShowTimePanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(105, 570);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(56, 25);
			this->label31->TabIndex = 9;
			this->label31->Text = L"Time";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label26->Location = System::Drawing::Point(103, 531);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(383, 29);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Time customer took to be serviced";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(702, 560);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 60);
			this->button9->TabIndex = 7;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Admin::frontDeskNext_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(846, 560);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 60);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Admin::goBack_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(108, 178);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(876, 345);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(518, 94);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(42, 46);
			this->label16->TabIndex = 3;
			this->label16->Text = L"1";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(439, 67);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 100);
			this->panel5->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(458, 9);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(163, 29);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Line Number";
			// 
			// CustomerServiceShowTimePanel
			// 
			this->CustomerServiceShowTimePanel->Controls->Add(this->label32);
			this->CustomerServiceShowTimePanel->Controls->Add(this->label27);
			this->CustomerServiceShowTimePanel->Controls->Add(this->button8);
			this->CustomerServiceShowTimePanel->Controls->Add(this->button3);
			this->CustomerServiceShowTimePanel->Controls->Add(this->richTextBox4);
			this->CustomerServiceShowTimePanel->Controls->Add(this->label18);
			this->CustomerServiceShowTimePanel->Controls->Add(this->panel6);
			this->CustomerServiceShowTimePanel->Controls->Add(this->label19);
			this->CustomerServiceShowTimePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CustomerServiceShowTimePanel->Location = System::Drawing::Point(80, 0);
			this->CustomerServiceShowTimePanel->Name = L"CustomerServiceShowTimePanel";
			this->CustomerServiceShowTimePanel->Size = System::Drawing::Size(1086, 637);
			this->CustomerServiceShowTimePanel->TabIndex = 136;
			this->CustomerServiceShowTimePanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->CustomerServiceShowTimePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->CustomerServiceShowTimePanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(105, 570);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(56, 25);
			this->label32->TabIndex = 10;
			this->label32->Text = L"Time";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label27->Location = System::Drawing::Point(103, 531);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(383, 29);
			this->label27->TabIndex = 9;
			this->label27->Text = L"Time customer took to be serviced";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(702, 560);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 60);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Next";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Admin::customerServiceNext_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(846, 560);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 60);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::goBack_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(108, 178);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->Size = System::Drawing::Size(876, 345);
			this->richTextBox4->TabIndex = 4;
			this->richTextBox4->Text = L"";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(518, 94);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(42, 46);
			this->label18->TabIndex = 3;
			this->label18->Text = L"1";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(439, 67);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 100);
			this->panel6->TabIndex = 2;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(458, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(163, 29);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Line Number";
			// 
			// AllServicesShowTimePanel
			// 
			this->AllServicesShowTimePanel->Controls->Add(this->label35);
			this->AllServicesShowTimePanel->Controls->Add(this->label30);
			this->AllServicesShowTimePanel->Controls->Add(this->button7);
			this->AllServicesShowTimePanel->Controls->Add(this->button2);
			this->AllServicesShowTimePanel->Controls->Add(this->richTextBox5);
			this->AllServicesShowTimePanel->Controls->Add(this->label20);
			this->AllServicesShowTimePanel->Controls->Add(this->panel7);
			this->AllServicesShowTimePanel->Controls->Add(this->label21);
			this->AllServicesShowTimePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AllServicesShowTimePanel->Location = System::Drawing::Point(80, 0);
			this->AllServicesShowTimePanel->Name = L"AllServicesShowTimePanel";
			this->AllServicesShowTimePanel->Size = System::Drawing::Size(1086, 637);
			this->AllServicesShowTimePanel->TabIndex = 137;
			this->AllServicesShowTimePanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->AllServicesShowTimePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->AllServicesShowTimePanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(105, 570);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(56, 25);
			this->label35->TabIndex = 10;
			this->label35->Text = L"Time";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label30->Location = System::Drawing::Point(103, 531);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(383, 29);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Time customer took to be serviced";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(702, 560);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 60);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Next";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Admin::allServicesNext_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(846, 560);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 60);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::goBack_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(108, 178);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->Size = System::Drawing::Size(876, 345);
			this->richTextBox5->TabIndex = 4;
			this->richTextBox5->Text = L"";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(518, 94);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(42, 46);
			this->label20->TabIndex = 3;
			this->label20->Text = L"1";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(439, 67);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 100);
			this->panel7->TabIndex = 2;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(458, 9);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(163, 29);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Line Number";
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 637);
			this->Controls->Add(this->HomePanel);
			this->Controls->Add(this->AllServicesShowTimePanel);
			this->Controls->Add(this->CustomerServiceShowTimePanel);
			this->Controls->Add(this->FrontDeskShowTimePanel);
			this->Controls->Add(this->WithdrawalShowTimePanel);
			this->Controls->Add(this->DepositShowTimePanel);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::Admin_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->HomePanel->ResumeLayout(false);
			this->HomePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->DepositShowTimePanel->ResumeLayout(false);
			this->DepositShowTimePanel->PerformLayout();
			this->WithdrawalShowTimePanel->ResumeLayout(false);
			this->WithdrawalShowTimePanel->PerformLayout();
			this->FrontDeskShowTimePanel->ResumeLayout(false);
			this->FrontDeskShowTimePanel->PerformLayout();
			this->CustomerServiceShowTimePanel->ResumeLayout(false);
			this->CustomerServiceShowTimePanel->PerformLayout();
			this->AllServicesShowTimePanel->ResumeLayout(false);
			this->AllServicesShowTimePanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool dragging;
		Point offset;
		private: System::Void Admin_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			dragging = true;
			offset.X = e->X;
			offset.Y = e->Y;
		}
		private: System::Void Admin_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (dragging) {
				Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
				Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
			}
		}
		private: System::Void Admin_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			dragging = false;
		}
		private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
			ofstream file1("deposit_line_order");
			file1.close();
			ofstream file2("withdrawal_line_order");
			file2.close();
			ofstream file3("front_desk_line_order");
			file3.close();
			ofstream file4("customer_service_line_order");
			file4.close();
			ofstream file5("all_services_line_order");
			file5.close();
		}
		private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		void createList(string serviceName, Services* service) {
			ofstream serviceList;
			ifstream regularUserFile;
			ifstream goldUserFile;
			serviceList.open(serviceName);
			serviceList << "Line Number\t\t" << "Time\t\t\t" << "Service\t\t     " << "Priority" << endl;
			serviceList.close();

			User regularUser{};
			User goldUser{};
			Node* regularCurrent = service->RegularLinkedList::getHead();
			Node* goldCurrent = service->GoldLinkedList::getHead();
			serviceList.open(serviceName, ios::app);
			while (regularCurrent || goldCurrent) {
				string time;
				string erasedLine = "Time: ";
				if (regularCurrent && !goldCurrent) {
					regularUser = regularCurrent->getData();
					regularUserFile.open("r_" + regularUser.getUserName());
					getline(regularUserFile, time);
					time.erase(0, erasedLine.length());
					if (serviceName == "deposit_line_order")
						serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time << setw(14) << "" << regularUser.getService() << setw(22) << "0" << endl;
					if (serviceName == "withdrawal_line_order")
						serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time << setw(12) << "" << regularUser.getService() << setw(18) << "0" << endl;
					if (serviceName == "front_desk_line_order")
						serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time << setw(12) << "" << regularUser.getService() << setw(18) << "0" << endl;
					if (serviceName == "customer_service_line_order")
						serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time << setw(10) << "" << regularUser.getService() << setw(10) << "0" << endl;

					regularCurrent = regularCurrent->getNext();
					regularUserFile.close();
				}
				if (!regularCurrent && goldCurrent) {
					goldUser = goldCurrent->getData();
					goldUserFile.open("g_" + goldUser.getUserName());
					getline(goldUserFile, time);
					time.erase(0, erasedLine.length());
					if (serviceName == "deposit_line_order")
						serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time << setw(14) << "" << goldUser.getService() << setw(22) << "1" << endl;
					if (serviceName == "withdrawal_line_order")
						serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time << setw(12) << "" << goldUser.getService() << setw(18) << "1" << endl;
					if (serviceName == "front_desk_line_order")
						serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time << setw(12) << "" << goldUser.getService() << setw(18) << "1" << endl;
					if (serviceName == "customer_service_line_order")
						serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time << setw(10) << "" << goldUser.getService() << setw(10) << "1" << endl;
				
					goldCurrent = goldCurrent->getNext();
					goldUserFile.close();
				}
				if (regularCurrent && goldCurrent) {
					string time1, time2;
					regularUser = regularCurrent->getData();
					goldUser = goldCurrent->getData();
					regularUserFile.open("r_" + regularUser.getUserName());
					goldUserFile.open("g_" + goldUser.getUserName());
					getline(regularUserFile, time1);
					getline(goldUserFile, time2);
					time1.erase(0, erasedLine.length());
					time2.erase(0, erasedLine.length());
					if (regularUser.getLineNumber() >= goldUser.getLineNumber()) {
						if (serviceName == "deposit_line_order")
							serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time2 << setw(14) << "" << goldUser.getService() << setw(22) << "1" << endl;
						if (serviceName == "withdrawal_line_order")
							serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time2 << setw(12) << "" << goldUser.getService() << setw(18) << "1" << endl;
						if (serviceName == "front_desk_line_order")
							serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time2 << setw(12) << "" << goldUser.getService() << setw(18) << "1" << endl;
						if (serviceName == "customer_service_line_order")
							serviceList << setw(7) << goldUser.getLineNumber() << "_g" << setw(26) << time2 << setw(10) << "" << goldUser.getService() << setw(10) << "1" << endl;
						goldCurrent = goldCurrent->getNext();
					}
					else {
						if (serviceName == "deposit_line_order")
							serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time1 << setw(14) << "" << regularUser.getService() << setw(22) << "0" << endl;
						if (serviceName == "withdrawal_line_order")
							serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time1 << setw(12) << "" << regularUser.getService() << setw(18) << "0" << endl;
						if (serviceName == "front_desk_line_order")
							serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time1 << setw(12) << "" << regularUser.getService() << setw(18) << "0" << endl;
						if (serviceName == "customer_service_line_order")
							serviceList << setw(7) << regularUser.getLineNumber() << "_r" << setw(26) << time1 << setw(10) << "" << regularUser.getService() << setw(10) << "0" << endl;
						regularCurrent = regularCurrent->getNext();
					}

					regularUserFile.close();
					goldUserFile.close();
				}
			}
			delete regularCurrent;
			delete goldCurrent;
			serviceList.close();
		}
		private: System::Void DepositLineOrder_Click(System::Object^ sender, System::EventArgs^ e) {
			createList("deposit_line_order", depositList);
			richTextBox1->LoadFile("deposit_line_order", RichTextBoxStreamType::PlainText);
			DepositShowTimePanel->BringToFront();
		}
		private: System::Void withdrawalLineOrder_Click(System::Object^ sender, System::EventArgs^ e) {
			createList("withdrawal_line_order", withdrawalList);
			richTextBox2->LoadFile("withdrawal_line_order", RichTextBoxStreamType::PlainText);
			WithdrawalShowTimePanel->BringToFront();
		}
		private: System::Void customerServiceLineOrder_Click(System::Object^ sender, System::EventArgs^ e) {
			createList("customer_service_line_order", customerServiceList);
			richTextBox4->LoadFile("customer_service_line_order", RichTextBoxStreamType::PlainText);
			CustomerServiceShowTimePanel->BringToFront();
		}
		private: System::Void FrontDesk_Click(System::Object^ sender, System::EventArgs^ e) {
			createList("front_desk_line_order", frontDeskList);
			richTextBox3->LoadFile("front_desk_line_order", RichTextBoxStreamType::PlainText);
			FrontDeskShowTimePanel->BringToFront();
		}
		void createListForAll() {
			ofstream allServicesList;
			ifstream UserFile;
			Node* curr = allServices->getHead();
			User currUser;

			allServicesList.open("all_services_line_order");
			allServicesList << "Line Number\t\t" << "Time\t\t\t" << "Service\t\t     " << "Priority" << endl;
			while (curr) {
				currUser = curr->getData();
				Time t = currUser.getEntranceTime();
				string time1 = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
				if (currUser.getService() == "Deposit")
					allServicesList << setw(7) << currUser.getLineNumber() << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular")? "_r" : "_g") << setw(26) << time1 << setw(14) << "" << currUser.getService() << setw(22) << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "0" : "1") << endl;
				if (currUser.getService() == "Withdrawal")
					allServicesList << setw(7) << currUser.getLineNumber() << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "_r" : "_g") << setw(26) << time1 << setw(12) << "" << currUser.getService() << setw(18) << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "0" : "1") << endl;
				if (currUser.getService() == "Front Desk")
					allServicesList << setw(7) << currUser.getLineNumber() << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "_r" : "_g") << setw(26) << time1 << setw(12) << "" << currUser.getService() << setw(18) << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "0" : "1") << endl;
				if (currUser.getService() == "Customer Service")
					allServicesList << setw(7) << currUser.getLineNumber() << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "_r" : "_g") << setw(26) << time1 << setw(10) << "" << currUser.getService() << setw(10) << ((currUser.getPriority() == "regular" || currUser.getPriority() == "Regular") ? "0" : "1") << endl;

				curr = curr->getNext();
			}

			allServicesList.close();
		}
		private: System::Void allServicesLineOrder_Click(System::Object^ sender, System::EventArgs^ e) {
			createListForAll();
			richTextBox5->LoadFile("all_services_line_order", RichTextBoxStreamType::PlainText);
			AllServicesShowTimePanel->BringToFront();
		}
		private: System::Void depositNext_Click(System::Object^ sender, System::EventArgs^ e) {
			depositList->pop(allServices);
			richTextBox1->LoadFile("deposit_line_order", RichTextBoxStreamType::PlainText);
			Time t = depositList->getTime();
			string t1 = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ t1.c_str() };
			label34->Text = str;
		}
		private: System::Void withdrawaLNext_Click(System::Object^ sender, System::EventArgs^ e) {
			withdrawalList->pop(allServices);
			richTextBox2->LoadFile("withdrawal_line_order", RichTextBoxStreamType::PlainText);
			Time t = withdrawalList->getTime();
			string t1 = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ t1.c_str() };
			label33->Text = str;
		}
		private: System::Void customerServiceNext_Click(System::Object^ sender, System::EventArgs^ e) {
			customerServiceList->pop(allServices);
			richTextBox4->LoadFile("customer_service_line_order", RichTextBoxStreamType::PlainText);
			Time t = customerServiceList->getTime();
			string t1 = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ t1.c_str() };
			label32->Text = str;
		}
		private: System::Void frontDeskNext_Click(System::Object^ sender, System::EventArgs^ e) {
			frontDeskList->pop(allServices);
			richTextBox3->LoadFile("front_desk_line_order", RichTextBoxStreamType::PlainText);
			Time t = frontDeskList->getTime();
			string t1 = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ t1.c_str()};
			label31->Text = str;
		}
		private: System::Void allServicesNext_Click(System::Object^ sender, System::EventArgs^ e) {
			Services* arr[4]{ depositList, withdrawalList, customerServiceList, frontDeskList };
			allServices->pop(arr);
			richTextBox5->LoadFile("all_services_line_order", RichTextBoxStreamType::PlainText);
		}
		private: System::Void goBack_Click(System::Object^ sender, System::EventArgs^ e) {
			HomePanel->BringToFront();
		}
		private: System::Void depositTime_Click(System::Object^ sender, System::EventArgs^ e) {
			Time t{};
			t = depositList->averageTime();
			string averageTime = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ averageTime.c_str() };
			label22->Text = "Average Time: " + str;
			delete str;
		}
		private: System::Void withdrawalTime_Click(System::Object^ sender, System::EventArgs^ e) {
			Time t{};
			t = withdrawalList->averageTime();
			string averageTime = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ averageTime.c_str() };
			label23->Text = "Average Time: " + str;
			delete str;
		}
		private: System::Void frontDeskTime_Click(System::Object^ sender, System::EventArgs^ e) {
			Time t{};
			t = frontDeskList->averageTime();
			string averageTime = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ averageTime.c_str() };
			label24->Text = "Average Time: " + str;
			delete str;
		}
		private: System::Void customerServiceTime_Click(System::Object^ sender, System::EventArgs^ e) {
			Time t{};
			t = customerServiceList->averageTime();
			string averageTime = to_string(t.hour) + ":" + to_string(t.min) + ":" + to_string(t.sec);
			str = gcnew String{ averageTime.c_str() };
			label25->Text = "Average Time: " + str;
			delete str;
		}

};
}
