#pragma once

namespace ProjectNJ {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ADMIN
	/// </summary>
	public ref class ADMIN : public System::Windows::Forms::Form
	{
	public:
		ADMIN(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->panel1->Hide();
			this->panel3->Hide();
			this->panel2->Size = System::Drawing::Size(0, 0);
			extrect();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ADMIN()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  name;




	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;




















	private: System::Windows::Forms::Button^  button3;





























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	
	
private: System::Windows::Forms::Label^  buttonUpdate;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  data6;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  data5;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  data4;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  data3;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  data2;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  data1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  search;
private: System::Windows::Forms::Label^  label14;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private: static int flag = 0;
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ADMIN::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonUpdate = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->data6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->data5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->data4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->data3 = (gcnew System::Windows::Forms::Label());
			this->data2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->data1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(1287, -2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ADMIN::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1032, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 41);
			this->label2->TabIndex = 4;
			this->label2->Text = L"List of customer";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(1057, 92);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(109, 33);
			this->name->TabIndex = 7;
			this->name->Text = L"Name /";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12.25F, System::Drawing::FontStyle::Bold));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(1063, 128);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(246, 536);
			this->listBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1172, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 33);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ID";
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button3->Location = System::Drawing::Point(0, -2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 29);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Mode";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN::button3_Click);
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->buttonUpdate->AutoSize = true;
			this->buttonUpdate->BackColor = System::Drawing::Color::Transparent;
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonUpdate->Location = System::Drawing::Point(12, 101);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(126, 23);
			this->buttonUpdate->TabIndex = 0;
			this->buttonUpdate->Text = L"Search Mode";
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &ADMIN::buttonUpdate_Click);
			// 
			// label3
			// 
			this->label3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 23);
			this->label3->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 23);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Delete Mode";
			// 
			// label12
			// 
			this->label12->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 278);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 23);
			this->label12->TabIndex = 3;
			this->label12->Text = L"delete all Mode";
			this->label12->Click += gcnew System::EventHandler(this, &ADMIN::label12_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->buttonUpdate);
			this->panel2->Location = System::Drawing::Point(0, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(0, 0);
			this->panel2->TabIndex = 16;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(249, 292);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(769, 67);
			this->panel3->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->textBox1->Location = System::Drawing::Point(266, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 24);
			this->textBox1->TabIndex = 1;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 13);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(257, 30);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Enter the password : ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button4->Location = System::Drawing::Point(438, 18);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 28);
			this->button4->TabIndex = 2;
			this->button4->Text = L"delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ADMIN::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->data6);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->data5);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->data4);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->data3);
			this->panel1->Controls->Add(this->data2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->data1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(222, 128);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(793, 500);
			this->panel1->TabIndex = 23;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(670, 451);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(90, 33);
			this->label14->TabIndex = 43;
			this->label14->Text = L"Close";
			this->label14->Click += gcnew System::EventHandler(this, &ADMIN::label14_Click);
			// 
			// data6
			// 
			this->data6->AutoSize = true;
			this->data6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->data6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data6->Location = System::Drawing::Point(202, 428);
			this->data6->Name = L"data6";
			this->data6->Size = System::Drawing::Size(0, 33);
			this->data6->TabIndex = 42;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(24, 428);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 33);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Room no    :";
			// 
			// data5
			// 
			this->data5->AutoSize = true;
			this->data5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->data5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data5->Location = System::Drawing::Point(202, 367);
			this->data5->Name = L"data5";
			this->data5->Size = System::Drawing::Size(0, 33);
			this->data5->TabIndex = 40;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(24, 367);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(173, 33);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Gmail         :";
			// 
			// data4
			// 
			this->data4->AutoSize = true;
			this->data4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->data4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data4->Location = System::Drawing::Point(202, 300);
			this->data4->Name = L"data4";
			this->data4->Size = System::Drawing::Size(0, 33);
			this->data4->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(24, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 33);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Address     :";
			// 
			// data3
			// 
			this->data3->AutoSize = true;
			this->data3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->data3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data3->Location = System::Drawing::Point(202, 234);
			this->data3->Name = L"data3";
			this->data3->Size = System::Drawing::Size(0, 33);
			this->data3->TabIndex = 36;
			// 
			// data2
			// 
			this->data2->AutoSize = true;
			this->data2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->data2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data2->Location = System::Drawing::Point(202, 164);
			this->data2->Name = L"data2";
			this->data2->Size = System::Drawing::Size(0, 33);
			this->data2->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 33);
			this->label6->TabIndex = 33;
			this->label6->Text = L"ID  type      :";
			// 
			// data1
			// 
			this->data1->AutoSize = true;
			this->data1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->data1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data1->Location = System::Drawing::Point(202, 93);
			this->data1->Name = L"data1";
			this->data1->Size = System::Drawing::Size(0, 33);
			this->data1->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 33);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Name         :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(732, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 36);
			this->button1->TabIndex = 30;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN::button1_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 30);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Secarch By ID :";
			// 
			// search
			// 
			this->search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(216, 24);
			this->search->Multiline = true;
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(510, 36);
			this->search->TabIndex = 28;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 33);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Room Type :";
			// 
			// ADMIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(1321, 676);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ADMIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADMIN";
			this->Load += gcnew System::EventHandler(this, &ADMIN::ADMIN_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void extrect() {
		try
		{
			StreamReader^ r = File::OpenText("first name input.txt");
			StreamReader^ a = File::OpenText("id input.txt");
			do
			{
				 listBox1->Items->Add(r->ReadLine() + " -> " + a->ReadLine());
				 listBox1->Items->Add("\n ");
			 } while (a->Peek() != -1);
			 a->Close();
			 r->Close();
		 }catch (System::Exception^ e)
		 {
			 listBox1->Items->Add(e);
		 }
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		StreamReader^ fname = File::OpenText("first name input.txt"); 
		StreamReader^ lname = File::OpenText("Last name input.txt"); 
		StreamReader^ gmail = File::OpenText("gmail input.txt"); 
		StreamReader^ tid = File::OpenText("id-type input.txt"); 
		StreamReader^ troom = File::OpenText("room-type input.txt"); 
		StreamReader^ add = File::OpenText("Address input.txt"); 
		StreamReader^ nroom = File::OpenText("Room Number.txt"); 
		StreamReader^ r = File::OpenText("id input.txt");
		do
		{
			
			if (r->ReadLine() == this->search->Text) {
				this->data1->Text=fname->ReadLine()+" "+lname->ReadLine();
				this->data5->Text = gmail->ReadLine();
				this->data2->Text = tid->ReadLine();
				this->data3->Text = troom->ReadLine();
				this->data4->Text = add->ReadLine();
				this->data6->Text = nroom->ReadLine();
				this->panel1->Show();
			}	
			else {
				fname->ReadLine();
				lname->ReadLine(); 
				gmail->ReadLine();
				troom->ReadLine();
				add->ReadLine();
				nroom->ReadLine();
			}
		} while (r->Peek() != -1);
		r->Close();
		if (this->data1->Text == "") {
			MessageBox::Show(this->search->Text+"is not found in database");
		}
		add->Close();
		tid->Close();
		troom->Close();
		gmail->Close();
		lname->Close();
		fname->Close();
		nroom->Close();
	}

	catch (System::Exception^ e)
	{
		MessageBox::Show(e + "");
	}

}
		// this->panel2->Size = System::Drawing::Size(190, 637);
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->panel2->BackColor = System::Drawing::Color::BlueViolet;
	static int i = 0, j = 0;
	if (i == 0 || j == 0) {
		for (i, j; i < 190 || j < 637; i++, j++) {
			for(int k=0;k<100000;k++){}
			this->panel2->Size = System::Drawing::Size(i, j);
			if (i > 190)break;
		}
	}
	else {
		for (i=190, j=637; i > 0 || j > 0; i--, --j) {
			for (int k = 0; k<100000; k++) {}
			this->panel2->Size = System::Drawing::Size(i, j);
		}
	}
}
		 
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel3->Show();
	}
private: System::Void ADMIN_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
	this->panel1->Show();
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if(this->textBox1->Text=="IAM@1972")
		{	StreamWriter^ fname = gcnew StreamWriter("first name input.txt");
		StreamWriter ^lname = gcnew StreamWriter("Last name input.txt");
		StreamWriter^ gmail = gcnew StreamWriter("gmail input.txt");
		StreamWriter ^tid = gcnew StreamWriter("id-type input.txt");
		StreamWriter^ troom = gcnew StreamWriter("room-type input.txt");
		StreamWriter ^add = gcnew StreamWriter("Address input.txt");
		StreamWriter^ nroom = gcnew StreamWriter("Room Number.txt");
		StreamWriter^ r = gcnew StreamWriter("id input.txt");
		add->Close();
		tid->Close();
		troom->Close();
		gmail->Close();
		lname->Close();
		fname->Close();
		r->Close();
		nroom->Close();
		extrect();
	}
		this->panel3->Hide();
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	this->panel1->Hide();
}
};
}