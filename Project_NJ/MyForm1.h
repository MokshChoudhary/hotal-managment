#pragma once
namespace ProjectNJ {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		Form ^s;
	public:
		MyForm1(void)
		{
			
			InitializeComponent();
			nulltext();
			temp();
			lable5->ForeColor = System::Drawing::Color::Black;
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Form ^g) {
			s = g;
			InitializeComponent();
			temp();
			nulltext();
			lable5->ForeColor = System::Drawing::Color::Black;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  hotaltag;
	protected:

	private: System::Windows::Forms::Label^  close;
	private: System::Windows::Forms::Label^  Fname;
	private: System::Windows::Forms::Label^  lastn;

	private: System::Windows::Forms::Label^  addr;

	private: System::Windows::Forms::Label^  id;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  roomtype;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Cid;

	private: System::Windows::Forms::TextBox^  CGmail;

	private: System::Windows::Forms::TextBox^  CAddr;

	private: System::Windows::Forms::TextBox^  CLname;

	private: System::Windows::Forms::TextBox^  CFname;
	private: System::Windows::Forms::ComboBox^  IDtype;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::Label^  error1;
	private: System::Windows::Forms::Label^  error2;
	private: System::Windows::Forms::Label^  error3;
	private: System::Windows::Forms::Label^  error4;
	private: System::Windows::Forms::Label^  error5;
	private: System::Windows::Forms::Label^  error6;
	private: System::Windows::Forms::Label^  error7;




	private: System::Windows::Forms::Label^  errorL1;
	private: System::Windows::Forms::Label^  errorL2;
	private: System::Windows::Forms::Label^  errorL3;
	private: System::Windows::Forms::Label^  errorL5;
	private: System::Windows::Forms::Label^  lable5;





	private: System::Windows::Forms::TextBox^  room_no;






	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  error8;
	private: bool flag;

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->hotaltag = (gcnew System::Windows::Forms::Label());
			this->close = (gcnew System::Windows::Forms::Label());
			this->Fname = (gcnew System::Windows::Forms::Label());
			this->lastn = (gcnew System::Windows::Forms::Label());
			this->addr = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->roomtype = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Cid = (gcnew System::Windows::Forms::TextBox());
			this->CGmail = (gcnew System::Windows::Forms::TextBox());
			this->CAddr = (gcnew System::Windows::Forms::TextBox());
			this->CLname = (gcnew System::Windows::Forms::TextBox());
			this->CFname = (gcnew System::Windows::Forms::TextBox());
			this->IDtype = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->error1 = (gcnew System::Windows::Forms::Label());
			this->error2 = (gcnew System::Windows::Forms::Label());
			this->error3 = (gcnew System::Windows::Forms::Label());
			this->error4 = (gcnew System::Windows::Forms::Label());
			this->error5 = (gcnew System::Windows::Forms::Label());
			this->error6 = (gcnew System::Windows::Forms::Label());
			this->error7 = (gcnew System::Windows::Forms::Label());
			this->errorL1 = (gcnew System::Windows::Forms::Label());
			this->errorL2 = (gcnew System::Windows::Forms::Label());
			this->errorL3 = (gcnew System::Windows::Forms::Label());
			this->errorL5 = (gcnew System::Windows::Forms::Label());
			this->lable5 = (gcnew System::Windows::Forms::Label());
			this->room_no = (gcnew System::Windows::Forms::TextBox());
			this->error8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// hotaltag
			// 
			this->hotaltag->AutoSize = true;
			this->hotaltag->BackColor = System::Drawing::Color::Transparent;
			this->hotaltag->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hotaltag->Location = System::Drawing::Point(460, 25);
			this->hotaltag->Name = L"hotaltag";
			this->hotaltag->Size = System::Drawing::Size(362, 32);
			this->hotaltag->TabIndex = 1;
			this->hotaltag->Text = L"Hotel Managment Software";
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::White;
			this->close->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->close->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->ForeColor = System::Drawing::Color::Red;
			this->close->Location = System::Drawing::Point(1209, -3);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(60, 33);
			this->close->TabIndex = 2;
			this->close->Text = L"X";
			this->close->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->close->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			this->close->MouseEnter += gcnew System::EventHandler(this, &MyForm1::label2_MouseEnter);
			this->close->MouseLeave += gcnew System::EventHandler(this, &MyForm1::close_MouseLeave);
			// 
			// Fname
			// 
			this->Fname->AutoSize = true;
			this->Fname->BackColor = System::Drawing::Color::Transparent;
			this->Fname->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fname->ForeColor = System::Drawing::Color::Black;
			this->Fname->Location = System::Drawing::Point(36, 135);
			this->Fname->Name = L"Fname";
			this->Fname->Size = System::Drawing::Size(161, 33);
			this->Fname->TabIndex = 3;
			this->Fname->Text = L"First Name";
			// 
			// lastn
			// 
			this->lastn->AutoSize = true;
			this->lastn->BackColor = System::Drawing::Color::Transparent;
			this->lastn->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastn->ForeColor = System::Drawing::Color::Black;
			this->lastn->Location = System::Drawing::Point(36, 182);
			this->lastn->Name = L"lastn";
			this->lastn->Size = System::Drawing::Size(157, 33);
			this->lastn->TabIndex = 4;
			this->lastn->Text = L"Last Name";
			// 
			// addr
			// 
			this->addr->AutoSize = true;
			this->addr->BackColor = System::Drawing::Color::Transparent;
			this->addr->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addr->ForeColor = System::Drawing::Color::Black;
			this->addr->Location = System::Drawing::Point(37, 241);
			this->addr->Name = L"addr";
			this->addr->Size = System::Drawing::Size(123, 33);
			this->addr->TabIndex = 5;
			this->addr->Text = L"Address";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::Transparent;
			this->id->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::Black;
			this->id->Location = System::Drawing::Point(36, 449);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(91, 33);
			this->id->TabIndex = 6;
			this->id->Text = L"ID no.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(36, 391);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 33);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Gmail id";
			// 
			// roomtype
			// 
			this->roomtype->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->roomtype->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomtype->FormattingEnabled = true;
			this->roomtype->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"None", L"Single", L"Double", L"Triple", L"Quad",
					L"Queen", L"King", L"Twin", L"Double-double", L"Adjacent-rooms"
			});
			this->roomtype->Location = System::Drawing::Point(319, 510);
			this->roomtype->Name = L"roomtype";
			this->roomtype->Size = System::Drawing::Size(211, 38);
			this->roomtype->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(36, 515);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 33);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Choose your room";
			// 
			// Cid
			// 
			this->Cid->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cid->Location = System::Drawing::Point(296, 441);
			this->Cid->Name = L"Cid";
			this->Cid->Size = System::Drawing::Size(304, 41);
			this->Cid->TabIndex = 12;
			this->Cid->Click += gcnew System::EventHandler(this, &MyForm1::Cid_Click);
			// 
			// CGmail
			// 
			this->CGmail->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CGmail->Location = System::Drawing::Point(296, 383);
			this->CGmail->Name = L"CGmail";
			this->CGmail->Size = System::Drawing::Size(304, 41);
			this->CGmail->TabIndex = 13;
			// 
			// CAddr
			// 
			this->CAddr->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CAddr->Location = System::Drawing::Point(296, 241);
			this->CAddr->Multiline = true;
			this->CAddr->Name = L"CAddr";
			this->CAddr->Size = System::Drawing::Size(360, 124);
			this->CAddr->TabIndex = 14;
			this->CAddr->Click += gcnew System::EventHandler(this, &MyForm1::CAddr_Click);
			// 
			// CLname
			// 
			this->CLname->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CLname->Location = System::Drawing::Point(296, 182);
			this->CLname->Name = L"CLname";
			this->CLname->Size = System::Drawing::Size(304, 41);
			this->CLname->TabIndex = 15;
			this->CLname->Click += gcnew System::EventHandler(this, &MyForm1::CLname_Click);
			// 
			// CFname
			// 
			this->CFname->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CFname->Location = System::Drawing::Point(296, 135);
			this->CFname->Name = L"CFname";
			this->CFname->Size = System::Drawing::Size(304, 41);
			this->CFname->TabIndex = 16;
			this->CFname->Click += gcnew System::EventHandler(this, &MyForm1::CFname_Click);
			// 
			// IDtype
			// 
			this->IDtype->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->IDtype->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtype->FormattingEnabled = true;
			this->IDtype->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"None", L"Adhar-Card", L"Pan-Card", L"Voter ID-Card",
					L"Driving-Licence"
			});
			this->IDtype->Location = System::Drawing::Point(807, 439);
			this->IDtype->Name = L"IDtype";
			this->IDtype->Size = System::Drawing::Size(187, 38);
			this->IDtype->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(606, 449);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 33);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Type of ID.";
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Transparent;
			this->submit->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::Red;
			this->submit->Location = System::Drawing::Point(548, 625);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(290, 41);
			this->submit->TabIndex = 19;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &MyForm1::submit_Click);
			// 
			// error1
			// 
			this->error1->BackColor = System::Drawing::Color::Transparent;
			this->error1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error1->ForeColor = System::Drawing::Color::Red;
			this->error1->Location = System::Drawing::Point(186, 132);
			this->error1->Name = L"error1";
			this->error1->Size = System::Drawing::Size(24, 20);
			this->error1->TabIndex = 20;
			this->error1->Text = L"*";
			// 
			// error2
			// 
			this->error2->BackColor = System::Drawing::Color::Transparent;
			this->error2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error2->ForeColor = System::Drawing::Color::Red;
			this->error2->Location = System::Drawing::Point(186, 179);
			this->error2->Name = L"error2";
			this->error2->Size = System::Drawing::Size(24, 20);
			this->error2->TabIndex = 21;
			this->error2->Text = L"*";
			// 
			// error3
			// 
			this->error3->BackColor = System::Drawing::Color::Transparent;
			this->error3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error3->ForeColor = System::Drawing::Color::Red;
			this->error3->Location = System::Drawing::Point(157, 238);
			this->error3->Name = L"error3";
			this->error3->Size = System::Drawing::Size(24, 20);
			this->error3->TabIndex = 22;
			this->error3->Text = L"*";
			// 
			// error4
			// 
			this->error4->BackColor = System::Drawing::Color::Transparent;
			this->error4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error4->ForeColor = System::Drawing::Color::Red;
			this->error4->Location = System::Drawing::Point(157, 388);
			this->error4->Name = L"error4";
			this->error4->Size = System::Drawing::Size(24, 20);
			this->error4->TabIndex = 23;
			this->error4->Text = L"*";
			// 
			// error5
			// 
			this->error5->BackColor = System::Drawing::Color::Transparent;
			this->error5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error5->ForeColor = System::Drawing::Color::Red;
			this->error5->Location = System::Drawing::Point(124, 444);
			this->error5->Name = L"error5";
			this->error5->Size = System::Drawing::Size(24, 20);
			this->error5->TabIndex = 24;
			this->error5->Text = L"*";
			// 
			// error6
			// 
			this->error6->BackColor = System::Drawing::Color::Transparent;
			this->error6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error6->ForeColor = System::Drawing::Color::Red;
			this->error6->Location = System::Drawing::Point(289, 507);
			this->error6->Name = L"error6";
			this->error6->Size = System::Drawing::Size(24, 20);
			this->error6->TabIndex = 25;
			this->error6->Text = L"*";
			// 
			// error7
			// 
			this->error7->BackColor = System::Drawing::Color::Transparent;
			this->error7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error7->ForeColor = System::Drawing::Color::Red;
			this->error7->Location = System::Drawing::Point(755, 439);
			this->error7->Name = L"error7";
			this->error7->Size = System::Drawing::Size(24, 20);
			this->error7->TabIndex = 26;
			this->error7->Text = L"*";
			// 
			// errorL1
			// 
			this->errorL1->AutoSize = true;
			this->errorL1->BackColor = System::Drawing::Color::White;
			this->errorL1->Cursor = System::Windows::Forms::Cursors::No;
			this->errorL1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorL1->ForeColor = System::Drawing::Color::Red;
			this->errorL1->Location = System::Drawing::Point(306, 148);
			this->errorL1->Name = L"errorL1";
			this->errorL1->Size = System::Drawing::Size(0, 16);
			this->errorL1->TabIndex = 27;
			// 
			// errorL2
			// 
			this->errorL2->AutoSize = true;
			this->errorL2->BackColor = System::Drawing::Color::White;
			this->errorL2->Cursor = System::Windows::Forms::Cursors::No;
			this->errorL2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorL2->ForeColor = System::Drawing::Color::Red;
			this->errorL2->Location = System::Drawing::Point(306, 195);
			this->errorL2->Name = L"errorL2";
			this->errorL2->Size = System::Drawing::Size(0, 16);
			this->errorL2->TabIndex = 28;
			// 
			// errorL3
			// 
			this->errorL3->AutoSize = true;
			this->errorL3->BackColor = System::Drawing::Color::White;
			this->errorL3->Cursor = System::Windows::Forms::Cursors::No;
			this->errorL3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorL3->ForeColor = System::Drawing::Color::Red;
			this->errorL3->Location = System::Drawing::Point(304, 254);
			this->errorL3->Name = L"errorL3";
			this->errorL3->Size = System::Drawing::Size(0, 29);
			this->errorL3->TabIndex = 29;
			// 
			// errorL5
			// 
			this->errorL5->AutoSize = true;
			this->errorL5->BackColor = System::Drawing::Color::White;
			this->errorL5->Cursor = System::Windows::Forms::Cursors::No;
			this->errorL5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorL5->ForeColor = System::Drawing::Color::Red;
			this->errorL5->Location = System::Drawing::Point(306, 457);
			this->errorL5->Name = L"errorL5";
			this->errorL5->Size = System::Drawing::Size(0, 16);
			this->errorL5->TabIndex = 30;
			// 
			// lable5
			// 
			this->lable5->AutoSize = true;
			this->lable5->BackColor = System::Drawing::Color::Transparent;
			this->lable5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lable5->Location = System::Drawing::Point(668, 144);
			this->lable5->Name = L"lable5";
			this->lable5->Size = System::Drawing::Size(283, 32);
			this->lable5->TabIndex = 31;
			this->lable5->Text = L"Your Room Number :";
			// 
			// room_no
			// 
			this->room_no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->room_no->Location = System::Drawing::Point(980, 144);
			this->room_no->Multiline = true;
			this->room_no->Name = L"room_no";
			this->room_no->Size = System::Drawing::Size(248, 37);
			this->room_no->TabIndex = 37;
			// 
			// error8
			// 
			this->error8->AutoSize = true;
			this->error8->BackColor = System::Drawing::Color::Transparent;
			this->error8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error8->Location = System::Drawing::Point(947, 139);
			this->error8->Name = L"error8";
			this->error8->Size = System::Drawing::Size(27, 32);
			this->error8->TabIndex = 38;
			this->error8->Text = L"*";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1267, 678);
			this->Controls->Add(this->error8);
			this->Controls->Add(this->room_no);
			this->Controls->Add(this->lable5);
			this->Controls->Add(this->errorL5);
			this->Controls->Add(this->errorL3);
			this->Controls->Add(this->errorL2);
			this->Controls->Add(this->errorL1);
			this->Controls->Add(this->error7);
			this->Controls->Add(this->error6);
			this->Controls->Add(this->error5);
			this->Controls->Add(this->error4);
			this->Controls->Add(this->error3);
			this->Controls->Add(this->error2);
			this->Controls->Add(this->error1);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->IDtype);
			this->Controls->Add(this->CFname);
			this->Controls->Add(this->CLname);
			this->Controls->Add(this->CAddr);
			this->Controls->Add(this->CGmail);
			this->Controls->Add(this->Cid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->roomtype);
			this->Controls->Add(this->id);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addr);
			this->Controls->Add(this->lastn);
			this->Controls->Add(this->Fname);
			this->Controls->Add(this->close);
			this->Controls->Add(this->hotaltag);
			this->ForeColor = System::Drawing::Color::Red;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void inputF() {
		String^ roomno = this->room_no->Text;
		String^ fname = this->CFname->Text;
		String^ Lname = this->CLname->Text;
		String^ add = this->CAddr->Text;
		String^ gmail = this->CGmail->Text;
		String^ id = this->Cid->Text;
		String^ room = this->roomtype->Text;
		String^ Typeid = this->IDtype->Text;
		StreamWriter ^ifile = gcnew StreamWriter("first name input.txt",true);
		ifile->Write(fname);
		ifile->WriteLine("");
		ifile->Close();
		StreamWriter ^ifile1 = gcnew StreamWriter("Last name input.txt", true);
		ifile1->Write(Lname);
		ifile1->WriteLine("");
		ifile1->Close();
		StreamWriter ^ifile2 = gcnew StreamWriter("id input.txt", true);
		ifile2->Write(id);
		ifile2->WriteLine("");
		ifile2->Close();
		StreamWriter ^ifile3 = gcnew StreamWriter("gmail input.txt", true);
		ifile3->Write(gmail);
		ifile3->WriteLine("");
		ifile3->Close();
		StreamWriter ^ifile4 = gcnew StreamWriter("id-type input.txt", true);
		ifile4->Write(Typeid);
		ifile4->WriteLine("");
		ifile4->Close();
		StreamWriter ^ifile5 = gcnew StreamWriter("room-type input.txt", true);
		ifile5->Write(room);
		ifile5->WriteLine("");
		ifile5->Close();
		StreamWriter ^ifile6 = gcnew StreamWriter("Address input.txt", true);
		ifile6->Write(add);
		ifile6->WriteLine("");
		ifile6->Close();
		StreamWriter ^ifile7 = gcnew StreamWriter("Room Number.txt",true);
		ifile7->Write(roomno);
		ifile7->WriteLine("");
		ifile7->Close();
	}
	private: void nulltext() {
		this->CFname->Text = L"";
		this->CLname->Text = L"";
		this->CAddr->Text = L"";
		this->Cid->Text = L"";
		this->CGmail->Text = L"";
		this->roomtype->Text = L"None";
		this->IDtype->Text = L"None";
		room_no->Text = L"";
		lable5->ForeColor = System::Drawing::Color::Black;
	}
	
	private: void Room_Number() {
		String ^temp;
		try {
			StreamReader ^ofile = File::OpenText("Room Number.txt");
			do {
				//roomtype->Texxt = i + "";
				temp = ofile->ReadLine();
				if (room_no->Text == temp) {
					MessageBox::Show("This room is already aloted ");
					flag = false;
				}
				else {
					flag=true;
					ofile->Close();
					return;
				}
			} while(ofile->Peek() != 0);
			ofile->Close();
		}
		catch (System::OverflowException ^e) {
			StreamWriter ^ifile7 = gcnew StreamWriter("Room Number.txt", true);
			ifile7->Close();
			//Room_Number(0);
			MessageBox::Show(e+"");
		}
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		s->Show();
	}
	private: System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		this->close->BackColor = System::Drawing::Color::Red;
		this->close->ForeColor = Color::White;
	}
	private: System::Void close_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		this->close->ForeColor = Color::Red;
		this->close->BackColor = System::Drawing::Color::White;
	}
private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
	int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8=0;
	int count = 0, ch = 0, h = 1;
	String ^temp = this->CGmail->Text;
	int k = temp->Length;
	for (int i = 1; i < 10; i++) {
		switch (i) {
		case 1:
			if (this->roomtype->Text == "None") {
				this->error6->Show();
			}
			else {
				this->error6->Hide();
				i1 = 1;
			}
			break;
		case 2:
			if (this->IDtype->Text == "None") {
				this->error7->Show();
			}
			else {
				this->error7->Hide();
				i2 = 1;
			}
			break;
		case 3:
			if (this->CFname->Text == "") {
				this->errorL1->Text = "Enter your Fist name!!";
				this->errorL1->ForeColor = System::Drawing::Color::IndianRed;
				this->error1->Show();
				//this->CFname->Hint
			}
			else {
				this->error1->Hide();
				this->errorL1->Text = "";
				i3 = 1;
			}
			break;
		case 4:
			if (this->CLname->Text == "") {
				this->errorL2->ForeColor = System::Drawing::Color::IndianRed;
				this->errorL2->Text = "Enter your Last name!!";
				this->error2->Show();
			}
			else {
				this->errorL2->Text = "";
				this->error2->Hide();
				i4 = 1;
			}
			break;
		case 5:
			if (this->CAddr->Text == "") {
				this->errorL3->ForeColor = System::Drawing::Color::IndianRed;
				this->errorL3->Text = "Enter your Address!!";
				this->error3->Show();
			}
			else {
				this->errorL3->Text = "";
				this->error3->Hide();
				i5 = 1;
			}
			break;
		case 6:
			if (this->Cid->Text == "") {
				this->errorL5->ForeColor = System::Drawing::Color::IndianRed;
				this->errorL5->Text = "Enter your ID!!";
				this->error5->Show();
			}
			else {
				this->errorL5->Text = "";
				this->error5->Hide();
				i6 = 1;
			}
			break;
		case 7:
			
			for (int i = 0; i < k; i++) {
				if (temp[i] == '@') {
					ch = 1;
				}
				else if (temp[i] == ' ') {
					h = 0;
				}
				else
				{
					count++;
				}
			}
			if (this->CGmail->Text == "") {
				this->error4->Show();
			}
			else if (ch != 1 || h == 0) {
				this->error4->Show();
			}
			else {
				this->error4->Hide();
				i7 = 1;
			}
			break;
			case 8: if (this->room_no->Text == "") {
				this->error8->Show();
				i8 = 0;
			}
					else {
						i8 = 1;
						this->error8->Hide();
					}
					break;
			case 9:if (i1 == 1 && i2 == 1 && i3 == 1 && i4 == 1 && i5 == 1 && i7 == 1 && i8 == 1) {
				Room_Number();
				if (flag == false) {

				}
				else {
					lable5->ForeColor = System::Drawing::Color::Red;
					inputF();
					MessageBox::Show("Your room no is " + room_no->Text);
					MessageBox::Show("Your id is submited !!");
					MessageBox::Show("Thank you for this !!");
					nulltext();
				}
			}
				break;
		}
	}
	/*std::string unmanaged = msclr::interop::marshal_as<std::string>(temp);*/
}
	private:void temp() {
		StreamWriter ^a = gcnew StreamWriter("Room Number.txt",true);
		a->Close();
		this->error1->Hide();
		this->error2->Hide();
		this->error3->Hide();
		this->error4->Hide();
		this->error5->Hide();
		this->error6->Hide();
		this->error7->Hide();
		this->error8->Hide();
		this->roomtype->Text = L"None";
		this->IDtype->Text = L"None";
	}
private: System::Void CFname_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorL1->Text = "";
}
private: System::Void CLname_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorL2->Text = "";
}
private: System::Void CAddr_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorL3->Text = "";
}
private: System::Void Cid_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorL5->Text = "";
}
};
}