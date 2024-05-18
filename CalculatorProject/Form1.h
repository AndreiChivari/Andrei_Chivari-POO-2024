#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ afisaj;
	protected:
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ egal;
	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ scadere;
	private: System::Windows::Forms::Button^ stergere;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ modulo;
	private: System::Windows::Forms::Button^ impartire;
	private:
		double stocare;
		char operatie;;
	private: System::Windows::Forms::TextBox^ afisaj2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ schimbareSemn;




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
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->stergere = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->modulo = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->afisaj2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->schimbareSemn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->afisaj->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->afisaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->afisaj->ForeColor = System::Drawing::SystemColors::Window;
			this->afisaj->Location = System::Drawing::Point(12, 77);
			this->afisaj->Multiline = true;
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(507, 89);
			this->afisaj->TabIndex = 0;
			this->afisaj->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(12, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(140, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 80);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(268, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 80);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Window;
			this->button4->Location = System::Drawing::Point(12, 344);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 80);
			this->button4->TabIndex = 1;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Window;
			this->button5->Location = System::Drawing::Point(140, 344);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 80);
			this->button5->TabIndex = 1;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(268, 344);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 80);
			this->button6->TabIndex = 1;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Window;
			this->button7->Location = System::Drawing::Point(12, 258);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(123, 80);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Window;
			this->button8->Location = System::Drawing::Point(140, 258);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(123, 80);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Window;
			this->button9->Location = System::Drawing::Point(268, 258);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 80);
			this->button9->TabIndex = 1;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->zero->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->zero->FlatAppearance->BorderSize = 0;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->ForeColor = System::Drawing::SystemColors::Window;
			this->zero->Location = System::Drawing::Point(12, 516);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(123, 80);
			this->zero->TabIndex = 1;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::Window;
			this->button11->Location = System::Drawing::Point(140, 516);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(123, 80);
			this->button11->TabIndex = 1;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// egal
			// 
			this->egal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->egal->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->egal->FlatAppearance->BorderSize = 0;
			this->egal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->egal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->egal->ForeColor = System::Drawing::SystemColors::Window;
			this->egal->Location = System::Drawing::Point(396, 516);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(123, 80);
			this->egal->TabIndex = 1;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = false;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// inmultire
			// 
			this->inmultire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->inmultire->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->inmultire->FlatAppearance->BorderSize = 0;
			this->inmultire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inmultire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inmultire->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->inmultire->Location = System::Drawing::Point(396, 258);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(123, 80);
			this->inmultire->TabIndex = 1;
			this->inmultire->Text = L"*";
			this->inmultire->UseVisualStyleBackColor = false;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// adunare
			// 
			this->adunare->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->adunare->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->adunare->FlatAppearance->BorderSize = 0;
			this->adunare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adunare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adunare->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->adunare->Location = System::Drawing::Point(396, 344);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(123, 80);
			this->adunare->TabIndex = 1;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = false;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// scadere
			// 
			this->scadere->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->scadere->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->scadere->FlatAppearance->BorderSize = 0;
			this->scadere->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->scadere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scadere->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->scadere->Location = System::Drawing::Point(396, 430);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(123, 80);
			this->scadere->TabIndex = 1;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = false;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
			// 
			// stergere
			// 
			this->stergere->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->stergere->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->stergere->FlatAppearance->BorderSize = 0;
			this->stergere->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stergere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stergere->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->stergere->Location = System::Drawing::Point(12, 172);
			this->stergere->Name = L"stergere";
			this->stergere->Size = System::Drawing::Size(123, 80);
			this->stergere->TabIndex = 1;
			this->stergere->Text = L"<";
			this->stergere->UseVisualStyleBackColor = false;
			this->stergere->Click += gcnew System::EventHandler(this, &Form1::stergere_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->clear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->clear->FlatAppearance->BorderSize = 0;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(140, 172);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(123, 80);
			this->clear->TabIndex = 1;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// modulo
			// 
			this->modulo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->modulo->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->modulo->FlatAppearance->BorderSize = 0;
			this->modulo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->modulo->Location = System::Drawing::Point(268, 172);
			this->modulo->Name = L"modulo";
			this->modulo->Size = System::Drawing::Size(123, 80);
			this->modulo->TabIndex = 1;
			this->modulo->Text = L"%";
			this->modulo->UseVisualStyleBackColor = false;
			this->modulo->Click += gcnew System::EventHandler(this, &Form1::modulo_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->impartire->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->impartire->FlatAppearance->BorderSize = 0;
			this->impartire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->impartire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->impartire->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->impartire->Location = System::Drawing::Point(396, 172);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(123, 80);
			this->impartire->TabIndex = 1;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// afisaj2
			// 
			this->afisaj2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->afisaj2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->afisaj2->Enabled = false;
			this->afisaj2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->afisaj2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->afisaj2->Location = System::Drawing::Point(12, 27);
			this->afisaj2->Multiline = true;
			this->afisaj2->Name = L"afisaj2";
			this->afisaj2->Size = System::Drawing::Size(507, 44);
			this->afisaj2->TabIndex = 2;
			this->afisaj2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(22, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 3;
			// 
			// schimbareSemn
			// 
			this->schimbareSemn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->schimbareSemn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->schimbareSemn->FlatAppearance->BorderSize = 0;
			this->schimbareSemn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->schimbareSemn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->schimbareSemn->ForeColor = System::Drawing::SystemColors::Window;
			this->schimbareSemn->Location = System::Drawing::Point(269, 516);
			this->schimbareSemn->Name = L"schimbareSemn";
			this->schimbareSemn->Size = System::Drawing::Size(123, 80);
			this->schimbareSemn->TabIndex = 4;
			this->schimbareSemn->Text = L"+/-";
			this->schimbareSemn->UseVisualStyleBackColor = false;
			this->schimbareSemn->Click += gcnew System::EventHandler(this, &Form1::schimbareSemn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(531, 603);
			this->Controls->Add(this->schimbareSemn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->afisaj2);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->modulo);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->stergere);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->afisaj);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "0";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "9";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += ",";
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = "";
	afisaj2->Text = "";
}
private: System::Void stergere_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text->Length > 0)
	{
		afisaj->Text = afisaj->Text->Remove(afisaj->Text->Length - 1, 1);
	}
}
private: System::Void schimbareSemn_Click(System::Object^ sender, System::EventArgs^ e) {
	double numar;
	if (double::TryParse(afisaj->Text, numar))
	{
		numar = -numar; // Toggle the sign
		afisaj->Text = System::Convert::ToString(numar);
	}
	else
	{
		MessageBox::Show("Introduceti un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))
		{
			//afisaj2->Text = afisaj->Text + " ";
			stocare = numar;
			afisaj->Text = "";
			operatie = '-';
			afisaj2->Text = System::Convert::ToString(numar) + " ";
			afisaj2->Text += System::Convert::ToChar(operatie) + " ";
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show("Introduceti un numar inainte de scadere!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text)) 
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '+';
			afisaj2->Text = System::Convert::ToString(numar) + " ";
			afisaj2->Text += System::Convert::ToChar(operatie) + " ";
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show("Introduceti un numar inainte de a face adunarea!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '*';
			afisaj2->Text = System::Convert::ToString(numar) + " ";
			afisaj2->Text += System::Convert::ToChar(operatie) + " ";
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show("Introduceti un numar inainte de a face inmultirea", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '/';
			afisaj2->Text = System::Convert::ToString(numar) + " ";
			afisaj2->Text += System::Convert::ToChar(operatie) + " ";
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!", "Eroare!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show("Introduceti un numar inainte de a face impartirea!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void modulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '%';
			afisaj2->Text = System::Convert::ToString(numar) + " ";
			afisaj2->Text += System::Convert::ToChar(operatie) + " ";
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show("Introduceti un numar!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
	double rezultat;
	double numar;
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		if (double::TryParse(afisaj->Text, numar))
		{
			switch (operatie)
			{
			case '-':
				rezultat = stocare - numar;
				afisaj->Text = System::Convert::ToString(rezultat);
				afisaj2->Text += System::Convert::ToString(numar);
				break;
			case '+':
				rezultat = stocare + numar;
				afisaj->Text = System::Convert::ToString(rezultat);
				afisaj2->Text += System::Convert::ToString(numar);
				break;
			case '*':
				rezultat = stocare * numar;
				afisaj->Text = System::Convert::ToString(rezultat);
				afisaj2->Text += System::Convert::ToString(numar);
				break;
			case '/':
				if (numar != 0)
				{
					rezultat = stocare / numar;
					afisaj->Text = System::Convert::ToString(rezultat);
					afisaj2->Text += System::Convert::ToString(numar);
					break;
				}
				else
				{
					MessageBox::Show("Eroare! Impartire la 0!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			case '%':
				int stocareInt = System::Convert::ToInt32(stocare);
				int numarInt = System::Convert::ToInt32(numar);
				int moduloRezultat = stocareInt % numarInt;
				afisaj->Text = System::Convert::ToString(moduloRezultat);
				break;

			}

		}
		else
		{
			MessageBox::Show("Introduceti un numar!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
};
}
