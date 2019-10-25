#pragma once
#include "ADMIN.h"
namespace ProjectNJ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		Form^ s;
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ g) {
			s = g;
			InitializeComponent();
			this->errorBox->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::TextBox^  pass;

	private: System::Windows::Forms::Label^  back;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  errorBox;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->back = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->errorBox = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->errorBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(284, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(86, 104);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(222, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Loging Page";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(126, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 35);
			this->label2->TabIndex = 0;
			this->label2->Text = L"User Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Agency FB", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(126, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password  :";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::Cyan;
			this->username->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(242, 160);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(210, 32);
			this->username->TabIndex = 3;
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::Cyan;
			this->pass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(242, 216);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(210, 32);
			this->pass->TabIndex = 0;
			this->pass->UseSystemPasswordChar = true;
			// 
			// back
			// 
			this->back->AutoSize = true;
			this->back->BackColor = System::Drawing::Color::White;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->ForeColor = System::Drawing::Color::Red;
			this->back->Location = System::Drawing::Point(614, -1);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(36, 30);
			this->back->TabIndex = 4;
			this->back->Text = L" X";
			this->back->Click += gcnew System::EventHandler(this, &MyForm2::back_Click);
			this->back->MouseEnter += gcnew System::EventHandler(this, &MyForm2::label4_MouseEnter);
			this->back->MouseLeave += gcnew System::EventHandler(this, &MyForm2::back_MouseLeave);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(271, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// errorBox
			// 
			this->errorBox->BackColor = System::Drawing::Color::Black;
			this->errorBox->Controls->Add(this->button2);
			this->errorBox->Controls->Add(this->label4);
			this->errorBox->ForeColor = System::Drawing::Color::Red;
			this->errorBox->Location = System::Drawing::Point(122, 157);
			this->errorBox->Name = L"errorBox";
			this->errorBox->Size = System::Drawing::Size(393, 149);
			this->errorBox->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::DarkViolet;
			this->button2->Location = System::Drawing::Point(161, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"OK!!!";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(387, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Enter the correct Username and Password";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(650, 351);
			this->Controls->Add(this->errorBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->back);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->errorBox->ResumeLayout(false);
			this->errorBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		this->back->BackColor = Color::Red;
		this->back->ForeColor = Color::White;
	}
	private: System::Void back_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->back->BackColor = Color::White;
				 this->back->ForeColor = Color::Red;
	}
private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	s->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->username->Text == "NJ@1972"&&this->pass->Text == "IAM@1972") {
		this->pass->Text = "";
		this->username->Text = "";
		ADMIN^ x = gcnew ADMIN();
		this->Close();
		x->Show();
	}
	else {
		this->pass->Text = "";
		this->username->Text = "";
		this->errorBox->Show();
		
	}
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorBox->Hide();
}
};
}