#pragma once
#include"MyForm2.h"
#include "MyForm1.h"
namespace ProjectNJ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Form^ s;
	public:
		MyForm(int a,Form^ g) {
			s = g;
			s->Close();
			this->Close();
		}
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  admin;

	private: System::Windows::Forms::Label^  into;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->admin = (gcnew System::Windows::Forms::Label());
			this->into = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(33, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hotal Managment Software";
			// 
			// admin
			// 
			this->admin->AutoSize = true;
			this->admin->BackColor = System::Drawing::Color::Transparent;
			this->admin->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin->ForeColor = System::Drawing::Color::Lime;
			this->admin->Location = System::Drawing::Point(12, 370);
			this->admin->Name = L"admin";
			this->admin->Size = System::Drawing::Size(86, 25);
			this->admin->TabIndex = 1;
			this->admin->Text = L"Manager";
			this->admin->Click += gcnew System::EventHandler(this, &MyForm::admin_Click);
			this->admin->MouseEnter += gcnew System::EventHandler(this, &MyForm::label2_MouseEnter);
			this->admin->MouseLeave += gcnew System::EventHandler(this, &MyForm::admin_MouseLeave);
			// 
			// into
			// 
			this->into->AutoSize = true;
			this->into->BackColor = System::Drawing::Color::Transparent;
			this->into->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->into->ForeColor = System::Drawing::Color::Lime;
			this->into->Location = System::Drawing::Point(57, 170);
			this->into->Name = L"into";
			this->into->Size = System::Drawing::Size(307, 37);
			this->into->TabIndex = 2;
			this->into->Text = L"Book room with me!!!...";
			this->into->Click += gcnew System::EventHandler(this, &MyForm::into_Click);
			this->into->MouseEnter += gcnew System::EventHandler(this, &MyForm::label3_MouseHover);
			this->into->MouseLeave += gcnew System::EventHandler(this, &MyForm::into_MouseLeave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(425, 404);
			this->Controls->Add(this->into);
			this->Controls->Add(this->admin);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label3_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->into->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void into_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->into->ForeColor = System::Drawing::Color::Lime;
}
private: System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	this->admin->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void admin_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->admin->ForeColor = System::Drawing::Color::Lime;
}
private: System::Void into_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^temp = gcnew MyForm1(this);
	this->Hide();
	temp->Show();
}
private: System::Void admin_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^temp2 = gcnew MyForm2(this);
	this->Hide();
	temp2->Show();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}