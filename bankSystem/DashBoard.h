#pragma once
#include "Services.h"
#include "AllServices.h"
#include <windows.h>

namespace bankSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ dashboardPanel;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;

	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ settingsPanel;
	private: System::Windows::Forms::Panel^ servicePanel;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;

	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::Panel^ panel11;









	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::TextBox^ addText;
	private: System::Windows::Forms::Button^ subractButton;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	public:
	String^ str1;
	DashBoard^ instance;
	User* user;
	Services* depositList;
	Services* withdrawalList;
	Services* customerServiceList;
	Services* frontDeskList;
	AllServices* allServices;
	TextBox^ txtBox1;
	TextBox^ txtBox2;
	public:
		DashBoard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			instance = this;
		}
		DashBoard(User& user, TextBox^ t1, TextBox^ t2, Services* deposit, Services* withdrawal, Services* customer_service, Services* front_desk, AllServices* allServices)
		{
			InitializeComponent();
			instance = this;
			this->user = &user;
			txtBox1 = t1;
			txtBox2 = t2;
			depositList = deposit;
			withdrawalList = withdrawal;
			customerServiceList = customer_service;
			frontDeskList = front_desk;
			this->allServices = allServices;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashBoard()
		{
			if (components)
			{
				delete components;
				delete this;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashBoard::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->settingsPanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->servicePanel = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->subractButton = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->addText = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->dashboardPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			this->settingsPanel->SuspendLayout();
			this->servicePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(740, 427);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(271, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Hello first name, Welcome back";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel3->Location = System::Drawing::Point(697, 124);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(3, 200);
			this->panel3->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(737, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 29);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Total Balance";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label7->Location = System::Drawing::Point(733, 193);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 52);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Balance";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(740, 555);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(322, 60);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 13;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &DashBoard::settings_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel4->Location = System::Drawing::Point(697, 415);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(3, 200);
			this->panel4->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(847, 571);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 29);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Settings";
			this->label9->Click += gcnew System::EventHandler(this, &DashBoard::settings_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(522, 140);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(145, 184);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 17;
			this->pictureBox11->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(542, 243);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(37, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"****";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(573, 243);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(37, 20);
			this->label11->TabIndex = 19;
			this->label11->Text = L"****";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(175, 415);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(114, 29);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Services";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(180, 467);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(200, 60);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 28;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(228, 483);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 29);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Deposit";
			this->label13->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(190, 573);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(180, 25);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Customer service";
			this->label14->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(180, 555);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(200, 60);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 30;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(499, 571);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 29);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Front desk";
			this->label15->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(467, 555);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(200, 60);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 32;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(496, 483);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(142, 29);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Withdrawal";
			this->label16->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(467, 467);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(200, 60);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 34;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(941, 296);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 20);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Withdrawal";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(780, 296);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(71, 20);
			this->label18->TabIndex = 37;
			this->label18->Text = L"Deposit";
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(740, 289);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(150, 35);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 36;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(914, 289);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(150, 35);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 40;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(150, -13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(945, 389);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label1->Location = System::Drawing::Point(173, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Dashboard";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel2->Location = System::Drawing::Point(264, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1, 20);
			this->panel2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AllowDrop = true;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(175, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"My card";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(177, 140);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(315, 184);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(207, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"$balance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(191, 282);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"**** **** ****";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(290, 282);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(37, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"****";
			// 
			// dashboardPanel
			// 
			this->dashboardPanel->AllowDrop = true;
			this->dashboardPanel->Controls->Add(this->label22);
			this->dashboardPanel->Controls->Add(this->label11);
			this->dashboardPanel->Controls->Add(this->panel1);
			this->dashboardPanel->Controls->Add(this->pictureBox11);
			this->dashboardPanel->Controls->Add(this->label17);
			this->dashboardPanel->Controls->Add(this->pictureBox16);
			this->dashboardPanel->Controls->Add(this->label18);
			this->dashboardPanel->Controls->Add(this->pictureBox17);
			this->dashboardPanel->Controls->Add(this->label16);
			this->dashboardPanel->Controls->Add(this->pictureBox14);
			this->dashboardPanel->Controls->Add(this->label15);
			this->dashboardPanel->Controls->Add(this->pictureBox13);
			this->dashboardPanel->Controls->Add(this->label14);
			this->dashboardPanel->Controls->Add(this->pictureBox12);
			this->dashboardPanel->Controls->Add(this->label13);
			this->dashboardPanel->Controls->Add(this->pictureBox15);
			this->dashboardPanel->Controls->Add(this->label12);
			this->dashboardPanel->Controls->Add(this->label7);
			this->dashboardPanel->Controls->Add(this->panel4);
			this->dashboardPanel->Controls->Add(this->label6);
			this->dashboardPanel->Controls->Add(this->panel3);
			this->dashboardPanel->Controls->Add(this->label2);
			this->dashboardPanel->Controls->Add(this->label10);
			this->dashboardPanel->Controls->Add(this->label21);
			this->dashboardPanel->Controls->Add(this->label20);
			this->dashboardPanel->Controls->Add(this->label19);
			this->dashboardPanel->Controls->Add(this->label8);
			this->dashboardPanel->Controls->Add(this->label5);
			this->dashboardPanel->Controls->Add(this->label4);
			this->dashboardPanel->Controls->Add(this->pictureBox4);
			this->dashboardPanel->Controls->Add(this->label3);
			this->dashboardPanel->Controls->Add(this->pictureBox3);
			this->dashboardPanel->Controls->Add(this->panel2);
			this->dashboardPanel->Controls->Add(this->label1);
			this->dashboardPanel->Controls->Add(this->pictureBox2);
			this->dashboardPanel->Controls->Add(this->label9);
			this->dashboardPanel->Controls->Add(this->pictureBox9);
			this->dashboardPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dashboardPanel->Location = System::Drawing::Point(0, 0);
			this->dashboardPanel->Name = L"dashboardPanel";
			this->dashboardPanel->Size = System::Drawing::Size(1166, 637);
			this->dashboardPanel->TabIndex = 43;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(540, 243);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(37, 20);
			this->label22->TabIndex = 41;
			this->label22->Text = L"****";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox18);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(80, 637);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(20, 345);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(35, 35);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &DashBoard::logOut_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(20, 274);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(35, 35);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 41;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(20, 207);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(35, 35);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &DashBoard::settings_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(20, 140);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 35);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
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
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel6->Location = System::Drawing::Point(20, 324);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(35, 2);
			this->panel6->TabIndex = 42;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(958, 26);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(60, 20);
			this->label21->TabIndex = 18;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(844, 486);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 20);
			this->label20->TabIndex = 17;
			this->label20->Text = L"priority";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label19->Location = System::Drawing::Point(843, 447);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(67, 26);
			this->label19->TabIndex = 16;
			this->label19->Text = L"name";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->pictureBox10);
			this->panel5->Controls->Add(this->pictureBox19);
			this->panel5->Controls->Add(this->pictureBox20);
			this->panel5->Controls->Add(this->pictureBox22);
			this->panel5->Controls->Add(this->pictureBox23);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(80, 637);
			this->panel5->TabIndex = 44;
			this->panel5->Click += gcnew System::EventHandler(this, &DashBoard::other_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(20, 345);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(35, 35);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &DashBoard::logOut_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(20, 274);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(35, 35);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 41;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &DashBoard::service_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(20, 207);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(35, 35);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 11;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(20, 140);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(35, 35);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 9;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &DashBoard::home_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(-34, -30);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(150, 150);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 0;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &DashBoard::other_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel7->Location = System::Drawing::Point(20, 324);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(35, 2);
			this->panel7->TabIndex = 42;
			// 
			// settingsPanel
			// 
			this->settingsPanel->Controls->Add(this->button3);
			this->settingsPanel->Controls->Add(this->button2);
			this->settingsPanel->Controls->Add(this->button1);
			this->settingsPanel->Controls->Add(this->label39);
			this->settingsPanel->Controls->Add(this->label37);
			this->settingsPanel->Controls->Add(this->panel19);
			this->settingsPanel->Controls->Add(this->label38);
			this->settingsPanel->Controls->Add(this->textBox2);
			this->settingsPanel->Controls->Add(this->label36);
			this->settingsPanel->Controls->Add(this->panel18);
			this->settingsPanel->Controls->Add(this->label35);
			this->settingsPanel->Controls->Add(this->textBox1);
			this->settingsPanel->Controls->Add(this->label34);
			this->settingsPanel->Controls->Add(this->label33);
			this->settingsPanel->Controls->Add(this->label32);
			this->settingsPanel->Controls->Add(this->label31);
			this->settingsPanel->Controls->Add(this->label30);
			this->settingsPanel->Controls->Add(this->label29);
			this->settingsPanel->Controls->Add(this->label23);
			this->settingsPanel->Controls->Add(this->panel12);
			this->settingsPanel->Controls->Add(this->panel13);
			this->settingsPanel->Controls->Add(this->textBox6);
			this->settingsPanel->Controls->Add(this->label24);
			this->settingsPanel->Controls->Add(this->panel14);
			this->settingsPanel->Controls->Add(this->textBox5);
			this->settingsPanel->Controls->Add(this->label25);
			this->settingsPanel->Controls->Add(this->panel15);
			this->settingsPanel->Controls->Add(this->textBox4);
			this->settingsPanel->Controls->Add(this->label26);
			this->settingsPanel->Controls->Add(this->panel16);
			this->settingsPanel->Controls->Add(this->textBox3);
			this->settingsPanel->Controls->Add(this->label27);
			this->settingsPanel->Controls->Add(this->label28);
			this->settingsPanel->Controls->Add(this->textBox7);
			this->settingsPanel->Controls->Add(this->panel17);
			this->settingsPanel->Controls->Add(this->textBox8);
			this->settingsPanel->Controls->Add(this->panel5);
			this->settingsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsPanel->Location = System::Drawing::Point(0, 0);
			this->settingsPanel->Name = L"settingsPanel";
			this->settingsPanel->Size = System::Drawing::Size(1166, 637);
			this->settingsPanel->TabIndex = 41;
			this->settingsPanel->Click += gcnew System::EventHandler(this, &DashBoard::other_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(879, 548);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 70);
			this->button3->TabIndex = 114;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DashBoard::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(706, 549);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 70);
			this->button2->TabIndex = 113;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DashBoard::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(140, 541);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 70);
			this->button1->TabIndex = 112;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DashBoard::button1_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label39->Location = System::Drawing::Point(132, 26);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(214, 58);
			this->label39->TabIndex = 111;
			this->label39->Text = L"Settings";
			this->label39->Click += gcnew System::EventHandler(this, &DashBoard::other_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label37->Location = System::Drawing::Point(711, 435);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(210, 25);
			this->label37->TabIndex = 110;
			this->label37->Text = L"Confirm new password";
			this->label37->Click += gcnew System::EventHandler(this, &DashBoard::other_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel19->Location = System::Drawing::Point(709, 497);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(320, 2);
			this->panel19->TabIndex = 109;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label38->ForeColor = System::Drawing::Color::Red;
			this->label38->Location = System::Drawing::Point(708, 503);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 15);
			this->label38->TabIndex = 108;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox2->Location = System::Drawing::Point(709, 463);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 28);
			this->textBox2->TabIndex = 107;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &DashBoard::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox2_TextChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label36->Location = System::Drawing::Point(137, 435);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(140, 25);
			this->label36->TabIndex = 106;
			this->label36->Text = L"New password";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel18->Location = System::Drawing::Point(138, 497);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(320, 2);
			this->panel18->TabIndex = 105;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label35->ForeColor = System::Drawing::Color::Red;
			this->label35->Location = System::Drawing::Point(137, 503);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(0, 15);
			this->label35->TabIndex = 104;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->Location = System::Drawing::Point(138, 463);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 28);
			this->textBox1->TabIndex = 103;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->Click += gcnew System::EventHandler(this, &DashBoard::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox1_TextChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label34->Location = System::Drawing::Point(708, 316);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(166, 25);
			this->label34->TabIndex = 102;
			this->label34->Text = L"Current password";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label33->Location = System::Drawing::Point(137, 324);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(102, 25);
			this->label33->TabIndex = 101;
			this->label33->Text = L"Username";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label32->Location = System::Drawing::Point(708, 219);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(83, 25);
			this->label32->TabIndex = 100;
			this->label32->Text = L"Balance";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label31->Location = System::Drawing::Point(135, 219);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(71, 25);
			this->label31->TabIndex = 99;
			this->label31->Text = L"Priority";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label30->Location = System::Drawing::Point(708, 115);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(103, 25);
			this->label30->TabIndex = 98;
			this->label30->Text = L"Last name";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label29->Location = System::Drawing::Point(137, 115);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(103, 25);
			this->label29->TabIndex = 97;
			this->label29->Text = L"First name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(137, 389);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 15);
			this->label23->TabIndex = 96;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel12->Location = System::Drawing::Point(711, 378);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(320, 2);
			this->panel12->TabIndex = 95;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel13->Location = System::Drawing::Point(138, 384);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(320, 2);
			this->panel13->TabIndex = 94;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox6->Location = System::Drawing::Point(138, 352);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(320, 28);
			this->textBox6->TabIndex = 93;
			this->textBox6->Click += gcnew System::EventHandler(this, &DashBoard::textBox6_Click);
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox6_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(710, 284);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 15);
			this->label24->TabIndex = 92;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel14->Location = System::Drawing::Point(711, 279);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(318, 2);
			this->panel14->TabIndex = 91;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox5->Location = System::Drawing::Point(711, 247);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(318, 28);
			this->textBox5->TabIndex = 90;
			this->textBox5->Click += gcnew System::EventHandler(this, &DashBoard::textBox5_Click);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox5_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(137, 284);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 15);
			this->label25->TabIndex = 89;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel15->Location = System::Drawing::Point(138, 279);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(318, 2);
			this->panel15->TabIndex = 88;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox4->Location = System::Drawing::Point(138, 247);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(318, 28);
			this->textBox4->TabIndex = 87;
			this->textBox4->Click += gcnew System::EventHandler(this, &DashBoard::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox4_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label26->ForeColor = System::Drawing::Color::Red;
			this->label26->Location = System::Drawing::Point(710, 180);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 15);
			this->label26->TabIndex = 86;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel16->Location = System::Drawing::Point(711, 175);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(318, 2);
			this->panel16->TabIndex = 85;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox3->Location = System::Drawing::Point(711, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(318, 28);
			this->textBox3->TabIndex = 84;
			this->textBox3->Click += gcnew System::EventHandler(this, &DashBoard::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox3_TextChanged);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(710, 384);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 15);
			this->label27->TabIndex = 83;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label28->Location = System::Drawing::Point(137, 180);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 15);
			this->label28->TabIndex = 82;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox7->Location = System::Drawing::Point(711, 344);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(320, 28);
			this->textBox7->TabIndex = 81;
			this->textBox7->UseSystemPasswordChar = true;
			this->textBox7->Click += gcnew System::EventHandler(this, &DashBoard::textBox7_Click);
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox7_TextChanged);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel17->Location = System::Drawing::Point(138, 175);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(318, 2);
			this->panel17->TabIndex = 80;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox8->Location = System::Drawing::Point(138, 143);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(318, 28);
			this->textBox8->TabIndex = 79;
			this->textBox8->Click += gcnew System::EventHandler(this, &DashBoard::textBox8_Click);
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &DashBoard::textBox8_TextChanged);
			// 
			// servicePanel
			// 
			this->servicePanel->Controls->Add(this->label47);
			this->servicePanel->Controls->Add(this->label48);
			this->servicePanel->Controls->Add(this->label46);
			this->servicePanel->Controls->Add(this->label45);
			this->servicePanel->Controls->Add(this->button5);
			this->servicePanel->Controls->Add(this->button4);
			this->servicePanel->Controls->Add(this->subractButton);
			this->servicePanel->Controls->Add(this->textBox9);
			this->servicePanel->Controls->Add(this->label41);
			this->servicePanel->Controls->Add(this->pictureBox36);
			this->servicePanel->Controls->Add(this->label42);
			this->servicePanel->Controls->Add(this->pictureBox37);
			this->servicePanel->Controls->Add(this->label43);
			this->servicePanel->Controls->Add(this->pictureBox38);
			this->servicePanel->Controls->Add(this->label44);
			this->servicePanel->Controls->Add(this->pictureBox39);
			this->servicePanel->Controls->Add(this->label40);
			this->servicePanel->Controls->Add(this->panel10);
			this->servicePanel->Controls->Add(this->addButton);
			this->servicePanel->Controls->Add(this->addText);
			this->servicePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->servicePanel->Location = System::Drawing::Point(0, 0);
			this->servicePanel->Name = L"servicePanel";
			this->servicePanel->Size = System::Drawing::Size(1166, 637);
			this->servicePanel->TabIndex = 41;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(811, 599);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(0, 20);
			this->label47->TabIndex = 130;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(138, 595);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(0, 20);
			this->label48->TabIndex = 129;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(797, 241);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(0, 20);
			this->label46->TabIndex = 128;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(144, 238);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(0, 20);
			this->label45->TabIndex = 127;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(980, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 56);
			this->button5->TabIndex = 126;
			this->button5->Text = L"Cancel";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &DashBoard::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(321, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 56);
			this->button4->TabIndex = 125;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &DashBoard::button4_Click);
			// 
			// subractButton
			// 
			this->subractButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->subractButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->subractButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subractButton->ForeColor = System::Drawing::Color::White;
			this->subractButton->Location = System::Drawing::Point(853, 270);
			this->subractButton->Name = L"subractButton";
			this->subractButton->Size = System::Drawing::Size(121, 56);
			this->subractButton->TabIndex = 124;
			this->subractButton->Text = L"Enter";
			this->subractButton->UseVisualStyleBackColor = false;
			this->subractButton->Visible = false;
			this->subractButton->Click += gcnew System::EventHandler(this, &DashBoard::subractButton_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(799, 238);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(302, 26);
			this->textBox9->TabIndex = 123;
			this->textBox9->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::White;
			this->label41->Location = System::Drawing::Point(845, 157);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(205, 40);
			this->label41->TabIndex = 120;
			this->label41->Text = L"Withdrawal";
			this->label41->Click += gcnew System::EventHandler(this, &DashBoard::label41_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(797, 132);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(300, 90);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 119;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &DashBoard::label41_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::White;
			this->label42->Location = System::Drawing::Point(853, 518);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(197, 40);
			this->label42->TabIndex = 118;
			this->label42->Text = L"Front desk";
			this->label42->Click += gcnew System::EventHandler(this, &DashBoard::frontDesk_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(801, 493);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(300, 90);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 117;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &DashBoard::frontDesk_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::White;
			this->label43->Location = System::Drawing::Point(145, 522);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(280, 37);
			this->label43->TabIndex = 116;
			this->label43->Text = L"Customer service";
			this->label43->Click += gcnew System::EventHandler(this, &DashBoard::customerService_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(135, 495);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(300, 90);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 115;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &DashBoard::customerService_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::White;
			this->label44->Location = System::Drawing::Point(219, 157);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(146, 40);
			this->label44->TabIndex = 114;
			this->label44->Text = L"Deposit";
			this->label44->Click += gcnew System::EventHandler(this, &DashBoard::label44_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(142, 132);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(300, 90);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 113;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &DashBoard::label44_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label40->Location = System::Drawing::Point(132, 26);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(225, 58);
			this->label40->TabIndex = 112;
			this->label40->Text = L"Services";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Controls->Add(this->pictureBox30);
			this->panel10->Controls->Add(this->pictureBox31);
			this->panel10->Controls->Add(this->pictureBox32);
			this->panel10->Controls->Add(this->pictureBox34);
			this->panel10->Controls->Add(this->pictureBox35);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(80, 637);
			this->panel10->TabIndex = 43;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(20, 345);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(35, 35);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 12;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &DashBoard::logOut_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(20, 274);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(35, 35);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 41;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(20, 204);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(35, 35);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 11;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &DashBoard::settings_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(20, 140);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(35, 35);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 9;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &DashBoard::home_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(-34, -30);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(150, 150);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 0;
			this->pictureBox35->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->panel11->Location = System::Drawing::Point(20, 324);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(35, 2);
			this->panel11->TabIndex = 42;
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::Color::White;
			this->addButton->Location = System::Drawing::Point(194, 270);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(121, 56);
			this->addButton->TabIndex = 122;
			this->addButton->Text = L"Enter";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Visible = false;
			this->addButton->Click += gcnew System::EventHandler(this, &DashBoard::addDeposit_Click);
			// 
			// addText
			// 
			this->addText->Location = System::Drawing::Point(140, 238);
			this->addText->Name = L"addText";
			this->addText->Size = System::Drawing::Size(302, 26);
			this->addText->TabIndex = 121;
			this->addText->Visible = false;
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->ClientSize = System::Drawing::Size(1166, 637);
			this->Controls->Add(this->dashboardPanel);
			this->Controls->Add(this->settingsPanel);
			this->Controls->Add(this->servicePanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DashBoard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashBoard";
			this->Load += gcnew System::EventHandler(this, &DashBoard::DashBoard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->dashboardPanel->ResumeLayout(false);
			this->dashboardPanel->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			this->settingsPanel->ResumeLayout(false);
			this->settingsPanel->PerformLayout();
			this->servicePanel->ResumeLayout(false);
			this->servicePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//DashBoard Panel Code
		string CalculateTime() {
			string result;
			SYSTEMTIME lt;
			GetLocalTime(&lt);
			result += to_string(lt.wDay) + "/" + to_string(lt.wMonth) + "/" + to_string(lt.wYear);
			return result;
		}
	private: System::Void DashBoard_Load(System::Object^ sender, System::EventArgs^ e) {
		//DashBoard Panel load Code
		string str = user->getFirstName();
		str1 = gcnew String{ str.c_str() };
		label2->Text = "Hello" + str1 + ", welcome back";
		delete str1;

		str = user->getBalance();
		str1 = gcnew String{ str.c_str() };
		label4->Text = "$" + str1;
		label7->Text = "$" + str1;
		delete str1;

		str = user->getCardNumber();
		str = str.erase(0, str.length() - 4);
		str1 = gcnew String{ str.c_str() };
		label8->Text = str1;
		label11->Text = str1;
		delete str1;

		str = user->getFirstName() + " " + user->getLastName();
		str1 = gcnew String{ str.c_str() };
		label19->Text = "Name:" + str1;
		delete str1;

		str = user->getPriority();
		str1 = gcnew String{ str.c_str() };
		label20->Text = "Priority: " + str1;
		delete str1;

		str = CalculateTime();
		str1 = gcnew String{ str.c_str() };
		label21->Text = str1;
		delete str1;

		//Settings Panel load Code
		str = user->getFirstName();
		str1 = gcnew String{ str.c_str() };
		textBox8->Text = str1;
		delete str1;

		str = user->getLastName();
		str1 = gcnew String{ str.c_str() };
		textBox3->Text = str1;
		delete str1;

		str = user->getPriority();
		str1 = gcnew String{ str.c_str() };
		textBox4->Text = str1;
		delete str1;

		str = user->getBalance();
		str1 = gcnew String{ str.c_str() };
		textBox5->Text = str1;
		delete str1;

		str = user->getUserName();
		str1 = gcnew String{ str.c_str() };
		textBox6->Text = str1;
		delete str1;

		textBox1->Text = "Password";
		textBox2->Text = "Password";
		textBox7->Text = "Password";
	}
	private: System::Void home_Click(System::Object^ sender, System::EventArgs^ e) {
		dashboardPanel->BringToFront();
	}
	private: System::Void wallet_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void settings_Click(System::Object^ sender, System::EventArgs^ e) {
		settingsPanel->BringToFront();
	}
	private: System::Void logOut_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		txtBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		txtBox1->Text = "Username";
		txtBox2->Text = "Password";
		instance->Close();
		delete this;
	}
	private: System::Void service_Click(System::Object^ sender, System::EventArgs^ e) {
		servicePanel->BringToFront();
	}
	//Settings Panel Code
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text != "")
			label28->Text = "";
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text != "")
			label26->Text = "";
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text != "")
			label25->Text = "";
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text != "")
			label24->Text = "";
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text != "")
			label23->Text = "";
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7->Text != "")
			label27->Text = "";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "")
			label35->Text = "";
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text != "")
			label38->Text = "";
	}

	private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = user->getFirstName();
		str1 = gcnew String{ str.c_str() };

		textBox8->ForeColor = System::Drawing::SystemColors::WindowText;
		if (textBox8->Text == str1) {
			textBox8->Text = "";
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox6->Text = str1;
			delete str1;
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = user->getLastName();
		str1 = gcnew String{ str.c_str() };
		textBox3->ForeColor = System::Drawing::SystemColors::WindowText;

		if (textBox3->Text == str1) {
			textBox3->Text = "";
			delete str1;
		}
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox6->Text = str1;
			delete str1;
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = user->getPriority();
		str1 = gcnew String{ str.c_str() };
		textBox4->ForeColor = System::Drawing::SystemColors::WindowText;

		if (textBox4->Text == str1)
			textBox4->Text = "";
		if (textBox8->Text == "") {
			str = user->getFirstName();
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox6->Text = str1;
			delete str1;
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = user->getBalance();
		str1 = gcnew String{ str.c_str() };
		textBox5->ForeColor = System::Drawing::SystemColors::WindowText;

		if (textBox5->Text == str1) {
			textBox5->Text = "";
			delete str1;
		}
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox6->Text = str1;
			delete str1;
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = user->getUserName();
		str1 = gcnew String{ str.c_str() };
		textBox6->ForeColor = System::Drawing::SystemColors::WindowText;

		if (textBox6->Text == str1) {
			textBox6->Text = "";
			delete str1;
		}
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		string str;
		textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;

		if (textBox7->Text == "Password")
			textBox7->Text = "";
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		string str;
		textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;

		if (textBox1->Text == "Password")
			textBox1->Text = "";
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		string str;
		textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;

		if (textBox2->Text == "Password")
			textBox2->Text = "";
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Enabled = true;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		textBox8->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true; //hema beh.
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
	private: System::Boolean isNumber(System::String^ s) {
		string num = msclr::interop::marshal_as<string>(s);
		string maxNumber = to_string(LLONG_MAX);
		if (num <= maxNumber && num >= "0")
			return true;
		return false;
	}
	void createNewUserFile() {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		string str;
		bool flag = true;

		if (textBox8->Text == "") {
			label28->Text = "Enter First name";
			flag = false;
		}
		if (textBox3->Text == "") {
			label26->Text = "Enter Last name";
			flag = false;
		}
		if (!check(textBox4->Text)) {
			label25->Text = "Enter Regular of Gold or Platinum";
			flag = false;
		}
		if (!isNumber(textBox5->Text)) {
			label24->Text = "Enter a number";
			flag = false;
		}
		str = user->getUserName();
		str1 = gcnew String{ str.c_str() };
		if (user->isUserNameSignIn(textBox6) == true && textBox6->Text != str1) {
			label23->Text = "Username is taken";
			flag = false;
			delete str1;
		}
		if (textBox6->Text == "") {
			label23->Text = "Enter username";
			flag = false;
		}
		if (textBox7->Text == "" || textBox7->Text == "Password") {
			label27->Text = "Enter current password";
			flag = false;
		}
		str = user->getPassword();
		str1 = gcnew String{ str.c_str() };
		if (textBox7->Text != str1) {
			label27->Text = "Wrong password";
			flag = false;
		}
		if (textBox1->Text == "" || textBox1->Text == "Password") {
			label35->Text = "Enter new password";
			flag = false;
		}
		if (textBox1->Text == textBox7->Text) {
			label35->Text = "Enter new password";
			flag = false;
		}
		if (textBox2->Text == "" || textBox2->Text == "Password") {
			label38->Text = "Confirm new password";
			flag = false;
		}
		if (textBox2->Text != textBox1->Text) {
			label38->Text = "Enter the same new password";
			flag = false;
		}
		if (flag) {
			
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = user->getFirstName();
		str1 = gcnew String{ str.c_str() };
		textBox8->Text = str1;
		textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox8->Enabled = false;
		delete str1;

		str = user->getLastName();
		str1 = gcnew String{ str.c_str() };
		textBox3->Text = str1;
		textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox3->Enabled = false;
		delete str1;

		str = user->getPriority();
		str1 = gcnew String{ str.c_str() };
		textBox4->Text = str1;
		textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox4->Enabled = false;
		delete str1;

		str = user->getBalance();
		str1 = gcnew String{ str.c_str() };
		textBox5->Text = str1;
		textBox5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox5->Enabled = false;
		delete str1;

		str = user->getUserName();
		str1 = gcnew String{ str.c_str() };
		textBox6->Text = str1;
		textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox6->Enabled = false;
		delete str1;

		textBox7->Text = "Password";
		textBox1->Text = "Password";
		textBox2->Text = "Password";
		textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		textBox7->Enabled = false;
		textBox1->Enabled = false;
		textBox2->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		string str;
		if (textBox8->Text == "") {
			textBox8->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getFirstName();
			str1 = gcnew String{ str.c_str() };
			textBox8->Text = str1;
			delete str1;
		}
		if (textBox3->Text == "") {
			textBox3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getLastName();
			str1 = gcnew String{ str.c_str() };
			textBox3->Text = str1;
			delete str1;
		}
		if (textBox4->Text == "") {
			textBox4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getPriority();
			str1 = gcnew String{ str.c_str() };
			textBox4->Text = str1;
			delete str1;
		}
		if (textBox5->Text == "") {
			str = user->getBalance();
			str1 = gcnew String{ str.c_str() };
			textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
			textBox5->Text = str1;
			delete str1;
		}
		if (textBox6->Text == "") {
			textBox6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			str = user->getUserName();
			str1 = gcnew String{ str.c_str() };
			textBox6->Text = str1;
			delete str1;
		}
		if (textBox7->Text == "") {
			textBox7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox7->Text = "Password";
		}
		if (textBox1->Text == "") {
			textBox1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox1->Text = "Password";
		}
		if (textBox2->Text == "") {
			textBox2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			textBox2->Text = "Password";
		}

	}
	//Services Panel Code
	private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
		addButton->Visible = true;
		button4->Visible = true;
		addText->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		addButton->Visible = false;
		button4->Visible = false;
		addText->Visible = false;
		addText->Text = "";
	}
	private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
		subractButton->Visible = true;
		button5->Visible = true;
		textBox9->Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		subractButton->Visible = false;
		button5->Visible = false;
		textBox9->Visible = false;
		textBox9->Text = "";
	}
	void changeBalance() {
		ofstream tempFile;
		ifstream userFile;
		tempFile.open("temp.txt");
		userFile.open(user->getUserName());
		
		int counter{};
		string line;
		while (!userFile.eof()) {
			getline(userFile, line);
			if (counter == 5) {

				tempFile << "Balance: " << user->getBalance() << endl;
				counter++;
				continue;
			}
			tempFile << line << endl;
			counter++;
		}
		line = user->getUserName();
		userFile.close();
		tempFile.close();
		remove(line.c_str());
		rename("temp.txt", line.c_str());
	}
	private: System::Void addDeposit_Click(System::Object^ sender, System::EventArgs^ e) { 
		ifstream userFile;
		userFile.open(user->getUserName());
		string line;
		int counter{};
		while (counter < 6) {
			getline(userFile, line);
			counter++;
		}
		line.erase(0, 9);
		int userBalance = stoi(line);
		int addedBalance = int::Parse(addText->Text);
		userBalance += addedBalance;
		user->setBalance(to_string(userBalance));
		line = to_string(userBalance);
		String^ str = gcnew String{line.c_str()};
		label7->Text = str;
		label4->Text = str;

		user->setService("Deposit");
		depositList->push(user, depositList);
		allServices->push(user);
		addButton->Visible = false;
		button4->Visible = false;
		addText->Visible = false;
		addText->Text = "";
		line = to_string(user->getLineNumber());
		str = gcnew String{ line.c_str() };
		label45->Text = "Your number is " + str;
		userFile.close();
		changeBalance();
	}
	private: System::Void subractButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream userFile;
		userFile.open(user->getUserName());
		string line;
		int counter{};
		while (counter < 6) {
			getline(userFile, line);
			counter++;
		}

		line.erase(0, 9);
		int userBalance = stoi(line);
		int subtractedBalance = int::Parse(textBox9->Text);
		userBalance -= subtractedBalance;
		user->setBalance(to_string(userBalance));
		line = to_string(userBalance);
		String^ str = gcnew String{ line.c_str() };
		label7->Text = str;
		label4->Text = str;

		user->setService("Withdrawal");
		withdrawalList->push(user, withdrawalList);
		allServices->push(user);
		subractButton->Visible = false;
		button5->Visible = false;
		textBox9->Visible = false;
		textBox9->Text = "";
		line = to_string(user->getLineNumber());
		str = gcnew String{ line.c_str() };
		label46->Text = "Your number is " + str;
		userFile.close();
		changeBalance();
	}
	private: System::Void customerService_Click(System::Object^ sender, System::EventArgs^ e) {
		user->setService("Customer Service");
		customerServiceList->push(user, customerServiceList);
		allServices->push(user);
		string str = to_string(user->getLineNumber());
		str1 = gcnew String{ str.c_str() };
		label48->Text = "Your number is " + str1;
		delete str1;
	}
	private: System::Void frontDesk_Click(System::Object^ sender, System::EventArgs^ e) {
		user->setService("Front Desk");
		frontDeskList->push(user, frontDeskList);
		allServices->push(user);
		string str = to_string(user->getLineNumber());
		str1 = gcnew String{ str.c_str() };
		label47->Text = str1;
		delete str1;
	}
};
}