#pragma once

namespace fcfsGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct process
	{
		int process_id;
		int Arrival_time;
		int Burst_time;
		int Completion_time;
		int Turn_around_time;
		int  Waiting_time;
	}pro[5];

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelNumberOfProcesses;
	private: System::Windows::Forms::TextBox^ processGenerate;

	private: System::Windows::Forms::Button^ buttonGenerate;

	private: System::Windows::Forms::Button^ buttonCalculate;
	private: System::Windows::Forms::TextBox^ pid1;
	private: System::Windows::Forms::TextBox^ pid2;
	private: System::Windows::Forms::TextBox^ pid3;
	private: System::Windows::Forms::TextBox^ pid4;
	private: System::Windows::Forms::TextBox^ pid5;
	private: System::Windows::Forms::TextBox^ at5;
	private: System::Windows::Forms::TextBox^ at4;
	private: System::Windows::Forms::TextBox^ at3;
	private: System::Windows::Forms::TextBox^ at2;
	private: System::Windows::Forms::TextBox^ at1;
	private: System::Windows::Forms::TextBox^ bt5;
	private: System::Windows::Forms::TextBox^ bt4;
	private: System::Windows::Forms::TextBox^ bt3;
	private: System::Windows::Forms::TextBox^ bt2;
	private: System::Windows::Forms::TextBox^ bt1;
	private: System::Windows::Forms::Label^ tat1;

	private: System::Windows::Forms::Label^ tat2;
	private: System::Windows::Forms::Label^ tat3;
	private: System::Windows::Forms::Label^ tat4;
	private: System::Windows::Forms::Label^ tat5;
	private: System::Windows::Forms::Label^ wt5;





	private: System::Windows::Forms::Label^ wt4;

	private: System::Windows::Forms::Label^ wt3;

	private: System::Windows::Forms::Label^ wt2;

	private: System::Windows::Forms::Label^ wt1;
	private: System::Windows::Forms::Label^ ct5;
	private: System::Windows::Forms::Label^ ct4;
	private: System::Windows::Forms::Label^ ct3;
	private: System::Windows::Forms::Label^ ct2;
	private: System::Windows::Forms::Label^ ct1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ gant1;
	private: System::Windows::Forms::Label^ GanttChart;
	private: System::Windows::Forms::Label^ gant2;
	private: System::Windows::Forms::Label^ gant3;
	private: System::Windows::Forms::Label^ gant4;
	private: System::Windows::Forms::Label^ gant5;
	private: System::Windows::Forms::Label^ ctg5;
	private: System::Windows::Forms::Label^ ctg4;
	private: System::Windows::Forms::Label^ ctg3;
	private: System::Windows::Forms::Label^ ctg2;
	private: System::Windows::Forms::Label^ ctg1;
	private: System::Windows::Forms::Label^ label12;














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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelNumberOfProcesses = (gcnew System::Windows::Forms::Label());
			this->processGenerate = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->pid1 = (gcnew System::Windows::Forms::TextBox());
			this->pid2 = (gcnew System::Windows::Forms::TextBox());
			this->pid3 = (gcnew System::Windows::Forms::TextBox());
			this->pid4 = (gcnew System::Windows::Forms::TextBox());
			this->pid5 = (gcnew System::Windows::Forms::TextBox());
			this->at5 = (gcnew System::Windows::Forms::TextBox());
			this->at4 = (gcnew System::Windows::Forms::TextBox());
			this->at3 = (gcnew System::Windows::Forms::TextBox());
			this->at2 = (gcnew System::Windows::Forms::TextBox());
			this->at1 = (gcnew System::Windows::Forms::TextBox());
			this->bt5 = (gcnew System::Windows::Forms::TextBox());
			this->bt4 = (gcnew System::Windows::Forms::TextBox());
			this->bt3 = (gcnew System::Windows::Forms::TextBox());
			this->bt2 = (gcnew System::Windows::Forms::TextBox());
			this->bt1 = (gcnew System::Windows::Forms::TextBox());
			this->tat1 = (gcnew System::Windows::Forms::Label());
			this->tat2 = (gcnew System::Windows::Forms::Label());
			this->tat3 = (gcnew System::Windows::Forms::Label());
			this->tat4 = (gcnew System::Windows::Forms::Label());
			this->tat5 = (gcnew System::Windows::Forms::Label());
			this->wt5 = (gcnew System::Windows::Forms::Label());
			this->wt4 = (gcnew System::Windows::Forms::Label());
			this->wt3 = (gcnew System::Windows::Forms::Label());
			this->wt2 = (gcnew System::Windows::Forms::Label());
			this->wt1 = (gcnew System::Windows::Forms::Label());
			this->ct5 = (gcnew System::Windows::Forms::Label());
			this->ct4 = (gcnew System::Windows::Forms::Label());
			this->ct3 = (gcnew System::Windows::Forms::Label());
			this->ct2 = (gcnew System::Windows::Forms::Label());
			this->ct1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->gant1 = (gcnew System::Windows::Forms::Label());
			this->GanttChart = (gcnew System::Windows::Forms::Label());
			this->gant2 = (gcnew System::Windows::Forms::Label());
			this->gant3 = (gcnew System::Windows::Forms::Label());
			this->gant4 = (gcnew System::Windows::Forms::Label());
			this->gant5 = (gcnew System::Windows::Forms::Label());
			this->ctg5 = (gcnew System::Windows::Forms::Label());
			this->ctg4 = (gcnew System::Windows::Forms::Label());
			this->ctg3 = (gcnew System::Windows::Forms::Label());
			this->ctg2 = (gcnew System::Windows::Forms::Label());
			this->ctg1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Process ID";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(158, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Arrival\r\nTime";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(269, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Burst\r\nTime";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(512, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 40);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Turn-Around\r\nTime";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(656, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 40);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Waiting\r\nTime";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelNumberOfProcesses
			// 
			this->labelNumberOfProcesses->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelNumberOfProcesses->AutoSize = true;
			this->labelNumberOfProcesses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNumberOfProcesses->Location = System::Drawing::Point(12, 32);
			this->labelNumberOfProcesses->Name = L"labelNumberOfProcesses";
			this->labelNumberOfProcesses->Size = System::Drawing::Size(190, 20);
			this->labelNumberOfProcesses->TabIndex = 5;
			this->labelNumberOfProcesses->Text = L"Number of Processes: ";
			this->labelNumberOfProcesses->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// processGenerate
			// 
			this->processGenerate->Location = System::Drawing::Point(209, 31);
			this->processGenerate->Name = L"processGenerate";
			this->processGenerate->Size = System::Drawing::Size(91, 20);
			this->processGenerate->TabIndex = 6;
			this->processGenerate->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxNumberOfProcesses_TextChanged);
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGenerate->Location = System::Drawing::Point(318, 28);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(91, 28);
			this->buttonGenerate->TabIndex = 12;
			this->buttonGenerate->Text = L"Generate";
			this->buttonGenerate->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerate_Click);
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCalculate->Location = System::Drawing::Point(318, 373);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(91, 28);
			this->buttonCalculate->TabIndex = 14;
			this->buttonCalculate->Text = L"Calculate";
			this->buttonCalculate->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonCalculate->UseVisualStyleBackColor = true;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
			// 
			// pid1
			// 
			this->pid1->Location = System::Drawing::Point(16, 163);
			this->pid1->Name = L"pid1";
			this->pid1->Size = System::Drawing::Size(100, 20);
			this->pid1->TabIndex = 15;
			// 
			// pid2
			// 
			this->pid2->Location = System::Drawing::Point(16, 200);
			this->pid2->Name = L"pid2";
			this->pid2->Size = System::Drawing::Size(100, 20);
			this->pid2->TabIndex = 16;
			// 
			// pid3
			// 
			this->pid3->Location = System::Drawing::Point(16, 239);
			this->pid3->Name = L"pid3";
			this->pid3->Size = System::Drawing::Size(100, 20);
			this->pid3->TabIndex = 17;
			// 
			// pid4
			// 
			this->pid4->Location = System::Drawing::Point(16, 276);
			this->pid4->Name = L"pid4";
			this->pid4->Size = System::Drawing::Size(100, 20);
			this->pid4->TabIndex = 18;
			// 
			// pid5
			// 
			this->pid5->Location = System::Drawing::Point(16, 314);
			this->pid5->Name = L"pid5";
			this->pid5->Size = System::Drawing::Size(100, 20);
			this->pid5->TabIndex = 19;
			// 
			// at5
			// 
			this->at5->Location = System::Drawing::Point(137, 314);
			this->at5->Name = L"at5";
			this->at5->Size = System::Drawing::Size(100, 20);
			this->at5->TabIndex = 24;
			// 
			// at4
			// 
			this->at4->Location = System::Drawing::Point(137, 276);
			this->at4->Name = L"at4";
			this->at4->Size = System::Drawing::Size(100, 20);
			this->at4->TabIndex = 23;
			// 
			// at3
			// 
			this->at3->Location = System::Drawing::Point(137, 239);
			this->at3->Name = L"at3";
			this->at3->Size = System::Drawing::Size(100, 20);
			this->at3->TabIndex = 22;
			// 
			// at2
			// 
			this->at2->Location = System::Drawing::Point(137, 200);
			this->at2->Name = L"at2";
			this->at2->Size = System::Drawing::Size(100, 20);
			this->at2->TabIndex = 21;
			// 
			// at1
			// 
			this->at1->Location = System::Drawing::Point(137, 163);
			this->at1->Name = L"at1";
			this->at1->Size = System::Drawing::Size(100, 20);
			this->at1->TabIndex = 20;
			// 
			// bt5
			// 
			this->bt5->Location = System::Drawing::Point(254, 314);
			this->bt5->Name = L"bt5";
			this->bt5->Size = System::Drawing::Size(100, 20);
			this->bt5->TabIndex = 29;
			// 
			// bt4
			// 
			this->bt4->Location = System::Drawing::Point(254, 276);
			this->bt4->Name = L"bt4";
			this->bt4->Size = System::Drawing::Size(100, 20);
			this->bt4->TabIndex = 28;
			// 
			// bt3
			// 
			this->bt3->Location = System::Drawing::Point(254, 239);
			this->bt3->Name = L"bt3";
			this->bt3->Size = System::Drawing::Size(100, 20);
			this->bt3->TabIndex = 27;
			// 
			// bt2
			// 
			this->bt2->Location = System::Drawing::Point(254, 200);
			this->bt2->Name = L"bt2";
			this->bt2->Size = System::Drawing::Size(100, 20);
			this->bt2->TabIndex = 26;
			// 
			// bt1
			// 
			this->bt1->Location = System::Drawing::Point(254, 163);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(100, 20);
			this->bt1->TabIndex = 25;
			// 
			// tat1
			// 
			this->tat1->AutoSize = true;
			this->tat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tat1->Location = System::Drawing::Point(545, 161);
			this->tat1->Name = L"tat1";
			this->tat1->Size = System::Drawing::Size(0, 20);
			this->tat1->TabIndex = 30;
			this->tat1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tat2
			// 
			this->tat2->AutoSize = true;
			this->tat2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tat2->Location = System::Drawing::Point(545, 200);
			this->tat2->Name = L"tat2";
			this->tat2->Size = System::Drawing::Size(0, 20);
			this->tat2->TabIndex = 31;
			this->tat2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tat3
			// 
			this->tat3->AutoSize = true;
			this->tat3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tat3->Location = System::Drawing::Point(545, 239);
			this->tat3->Name = L"tat3";
			this->tat3->Size = System::Drawing::Size(0, 20);
			this->tat3->TabIndex = 32;
			this->tat3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tat4
			// 
			this->tat4->AutoSize = true;
			this->tat4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tat4->Location = System::Drawing::Point(545, 274);
			this->tat4->Name = L"tat4";
			this->tat4->Size = System::Drawing::Size(0, 20);
			this->tat4->TabIndex = 33;
			this->tat4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tat5
			// 
			this->tat5->AutoSize = true;
			this->tat5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tat5->Location = System::Drawing::Point(545, 312);
			this->tat5->Name = L"tat5";
			this->tat5->Size = System::Drawing::Size(0, 20);
			this->tat5->TabIndex = 34;
			this->tat5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tat5->Click += gcnew System::EventHandler(this, &MyForm::tat5_Click);
			// 
			// wt5
			// 
			this->wt5->AutoSize = true;
			this->wt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wt5->Location = System::Drawing::Point(656, 312);
			this->wt5->Name = L"wt5";
			this->wt5->Size = System::Drawing::Size(0, 20);
			this->wt5->TabIndex = 39;
			this->wt5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// wt4
			// 
			this->wt4->AutoSize = true;
			this->wt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wt4->Location = System::Drawing::Point(656, 274);
			this->wt4->Name = L"wt4";
			this->wt4->Size = System::Drawing::Size(0, 20);
			this->wt4->TabIndex = 38;
			this->wt4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// wt3
			// 
			this->wt3->AutoSize = true;
			this->wt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wt3->Location = System::Drawing::Point(656, 239);
			this->wt3->Name = L"wt3";
			this->wt3->Size = System::Drawing::Size(0, 20);
			this->wt3->TabIndex = 37;
			this->wt3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// wt2
			// 
			this->wt2->AutoSize = true;
			this->wt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wt2->Location = System::Drawing::Point(656, 200);
			this->wt2->Name = L"wt2";
			this->wt2->Size = System::Drawing::Size(0, 20);
			this->wt2->TabIndex = 36;
			this->wt2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// wt1
			// 
			this->wt1->AutoSize = true;
			this->wt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wt1->Location = System::Drawing::Point(656, 161);
			this->wt1->Name = L"wt1";
			this->wt1->Size = System::Drawing::Size(0, 20);
			this->wt1->TabIndex = 35;
			this->wt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ct5
			// 
			this->ct5->AutoSize = true;
			this->ct5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct5->Location = System::Drawing::Point(415, 312);
			this->ct5->Name = L"ct5";
			this->ct5->Size = System::Drawing::Size(0, 20);
			this->ct5->TabIndex = 45;
			this->ct5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ct4
			// 
			this->ct4->AutoSize = true;
			this->ct4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct4->Location = System::Drawing::Point(415, 274);
			this->ct4->Name = L"ct4";
			this->ct4->Size = System::Drawing::Size(0, 20);
			this->ct4->TabIndex = 44;
			this->ct4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ct3
			// 
			this->ct3->AutoSize = true;
			this->ct3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct3->Location = System::Drawing::Point(415, 239);
			this->ct3->Name = L"ct3";
			this->ct3->Size = System::Drawing::Size(0, 20);
			this->ct3->TabIndex = 43;
			this->ct3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ct2
			// 
			this->ct2->AutoSize = true;
			this->ct2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct2->Location = System::Drawing::Point(415, 200);
			this->ct2->Name = L"ct2";
			this->ct2->Size = System::Drawing::Size(0, 20);
			this->ct2->TabIndex = 42;
			this->ct2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ct1
			// 
			this->ct1->AutoSize = true;
			this->ct1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct1->Location = System::Drawing::Point(415, 161);
			this->ct1->Name = L"ct1";
			this->ct1->Size = System::Drawing::Size(0, 20);
			this->ct1->TabIndex = 41;
			this->ct1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(382, 78);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 40);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Completion\r\nTime";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// gant1
			// 
			this->gant1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gant1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gant1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gant1->Location = System::Drawing::Point(12, 435);
			this->gant1->Name = L"gant1";
			this->gant1->Size = System::Drawing::Size(100, 20);
			this->gant1->TabIndex = 46;
			this->gant1->Text = L" ";
			this->gant1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GanttChart
			// 
			this->GanttChart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->GanttChart->AutoSize = true;
			this->GanttChart->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->GanttChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GanttChart->Location = System::Drawing::Point(312, 501);
			this->GanttChart->Name = L"GanttChart";
			this->GanttChart->Size = System::Drawing::Size(104, 20);
			this->GanttChart->TabIndex = 47;
			this->GanttChart->Text = L"Gantt Chart";
			// 
			// gant2
			// 
			this->gant2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gant2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gant2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gant2->Location = System::Drawing::Point(118, 435);
			this->gant2->Name = L"gant2";
			this->gant2->Size = System::Drawing::Size(100, 20);
			this->gant2->TabIndex = 48;
			this->gant2->Text = L" ";
			this->gant2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gant3
			// 
			this->gant3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gant3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gant3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gant3->Location = System::Drawing::Point(224, 435);
			this->gant3->Name = L"gant3";
			this->gant3->Size = System::Drawing::Size(100, 20);
			this->gant3->TabIndex = 49;
			this->gant3->Text = L" ";
			this->gant3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gant4
			// 
			this->gant4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gant4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gant4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gant4->Location = System::Drawing::Point(330, 435);
			this->gant4->Name = L"gant4";
			this->gant4->Size = System::Drawing::Size(100, 20);
			this->gant4->TabIndex = 50;
			this->gant4->Text = L" ";
			this->gant4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gant5
			// 
			this->gant5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->gant5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gant5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gant5->Location = System::Drawing::Point(436, 435);
			this->gant5->Name = L"gant5";
			this->gant5->Size = System::Drawing::Size(100, 20);
			this->gant5->TabIndex = 51;
			this->gant5->Text = L" ";
			this->gant5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ctg5
			// 
			this->ctg5->BackColor = System::Drawing::Color::Transparent;
			this->ctg5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ctg5->Location = System::Drawing::Point(490, 465);
			this->ctg5->Name = L"ctg5";
			this->ctg5->Size = System::Drawing::Size(100, 20);
			this->ctg5->TabIndex = 56;
			this->ctg5->Text = L"0";
			this->ctg5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ctg4
			// 
			this->ctg4->BackColor = System::Drawing::Color::Transparent;
			this->ctg4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ctg4->Location = System::Drawing::Point(384, 465);
			this->ctg4->Name = L"ctg4";
			this->ctg4->Size = System::Drawing::Size(100, 20);
			this->ctg4->TabIndex = 55;
			this->ctg4->Text = L"0";
			this->ctg4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ctg3
			// 
			this->ctg3->BackColor = System::Drawing::Color::Transparent;
			this->ctg3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ctg3->Location = System::Drawing::Point(278, 465);
			this->ctg3->Name = L"ctg3";
			this->ctg3->Size = System::Drawing::Size(100, 20);
			this->ctg3->TabIndex = 54;
			this->ctg3->Text = L"0";
			this->ctg3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ctg2
			// 
			this->ctg2->BackColor = System::Drawing::Color::Transparent;
			this->ctg2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ctg2->Location = System::Drawing::Point(172, 465);
			this->ctg2->Name = L"ctg2";
			this->ctg2->Size = System::Drawing::Size(100, 20);
			this->ctg2->TabIndex = 53;
			this->ctg2->Text = L"0";
			this->ctg2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ctg1
			// 
			this->ctg1->BackColor = System::Drawing::Color::Transparent;
			this->ctg1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctg1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ctg1->Location = System::Drawing::Point(66, 465);
			this->ctg1->Name = L"ctg1";
			this->ctg1->Size = System::Drawing::Size(100, 20);
			this->ctg1->TabIndex = 52;
			this->ctg1->Text = L"0";
			this->ctg1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(-31, 465);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 20);
			this->label12->TabIndex = 57;
			this->label12->Text = L"0";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 541);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->ctg5);
			this->Controls->Add(this->ctg4);
			this->Controls->Add(this->ctg3);
			this->Controls->Add(this->ctg2);
			this->Controls->Add(this->ctg1);
			this->Controls->Add(this->gant5);
			this->Controls->Add(this->gant4);
			this->Controls->Add(this->gant3);
			this->Controls->Add(this->gant2);
			this->Controls->Add(this->GanttChart);
			this->Controls->Add(this->gant1);
			this->Controls->Add(this->ct5);
			this->Controls->Add(this->ct4);
			this->Controls->Add(this->ct3);
			this->Controls->Add(this->ct2);
			this->Controls->Add(this->ct1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->wt5);
			this->Controls->Add(this->wt4);
			this->Controls->Add(this->wt3);
			this->Controls->Add(this->wt2);
			this->Controls->Add(this->wt1);
			this->Controls->Add(this->tat5);
			this->Controls->Add(this->tat4);
			this->Controls->Add(this->tat3);
			this->Controls->Add(this->tat2);
			this->Controls->Add(this->tat1);
			this->Controls->Add(this->bt5);
			this->Controls->Add(this->bt4);
			this->Controls->Add(this->bt3);
			this->Controls->Add(this->bt2);
			this->Controls->Add(this->bt1);
			this->Controls->Add(this->at5);
			this->Controls->Add(this->at4);
			this->Controls->Add(this->at3);
			this->Controls->Add(this->at2);
			this->Controls->Add(this->at1);
			this->Controls->Add(this->pid5);
			this->Controls->Add(this->pid4);
			this->Controls->Add(this->pid3);
			this->Controls->Add(this->pid2);
			this->Controls->Add(this->pid1);
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->buttonGenerate);
			this->Controls->Add(this->processGenerate);
			this->Controls->Add(this->labelNumberOfProcesses);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(790, 580);
			this->MinimumSize = System::Drawing::Size(790, 580);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {

	// importing process id
	pro[0].process_id = Convert::ToInt32(pid1->Text);
	pro[1].process_id = Convert::ToInt32(pid2->Text);
	pro[2].process_id = Convert::ToInt32(pid3->Text);
	pro[3].process_id = Convert::ToInt32(pid4->Text);
	pro[4].process_id = Convert::ToInt32(pid5->Text);

	// importing arrival time
	pro[0].Arrival_time = Convert::ToInt32(at1->Text);
	pro[1].Arrival_time = Convert::ToInt32(at2->Text);
	pro[2].Arrival_time = Convert::ToInt32(at3->Text);
	pro[3].Arrival_time = Convert::ToInt32(at4->Text);
	pro[4].Arrival_time = Convert::ToInt32(at5->Text);

	// impoting  Burst_time data 
	pro[0].Burst_time = Convert::ToInt32(bt1->Text);
	pro[1].Burst_time = Convert::ToInt32(bt2->Text);
	pro[2].Burst_time = Convert::ToInt32(bt3->Text);
	pro[3].Burst_time = Convert::ToInt32(bt4->Text);
	pro[4].Burst_time = Convert::ToInt32(bt5->Text);

	sort_arrival(pro, 5);
	find_FCFS(pro, 5);


	// exporting completion time

	ct1->Text = pro[0].Completion_time.ToString();
	ct2->Text = pro[1].Completion_time.ToString();
	ct3->Text = pro[2].Completion_time.ToString();
	ct4->Text = pro[3].Completion_time.ToString();
	ct5->Text = pro[4].Completion_time.ToString();

	//exporting turnaround_time data

	tat1->Text = pro[0].Turn_around_time.ToString();
	tat2->Text = pro[1].Turn_around_time.ToString();
	tat3->Text = pro[2].Turn_around_time.ToString();
	tat4->Text = pro[3].Turn_around_time.ToString();
	tat5->Text = pro[4].Turn_around_time.ToString();

	//exporting waiting_time data

	wt1->Text = pro[0].Waiting_time.ToString();
	wt2->Text = pro[1].Waiting_time.ToString();
	wt3->Text = pro[2].Waiting_time.ToString();
	wt4->Text = pro[3].Waiting_time.ToString();
	wt5->Text = pro[4].Waiting_time.ToString();

	//exporting to gant chart


	gant1->Text = pro[0].process_id.ToString();
	gant2->Text = pro[1].process_id.ToString();
	gant3->Text = pro[2].process_id.ToString();
	gant4->Text = pro[3].process_id.ToString();
	gant5->Text = pro[4].process_id.ToString();


	// exporting Gant completion time

	ctg1->Text = pro[0].Completion_time.ToString();
	ctg2->Text = pro[1].Completion_time.ToString();
	ctg3->Text = pro[2].Completion_time.ToString();
	ctg4->Text = pro[3].Completion_time.ToString();
	ctg5->Text = pro[4].Completion_time.ToString();
}

	   void sort_arrival(process pro[], int n)
	   {
		   for (int i = 0; i < n - 1; i++)
		   {
			   for (int j = 0; j < n - i - 1; j++)
			   {
				   if (pro[j].Arrival_time > pro[j + 1].Arrival_time)
				   {
					   process temp = pro[j];
					   pro[j] = pro[j + 1];
					   pro[j + 1] = temp;
				   }
			   }
		   }
	   }

	   void Find_Completion(process pro[], int n)
	   {
		   pro[0].Completion_time = pro[0].Burst_time;
		   for (int i = 1;i < n;i++)
		   {
			   pro[i].Completion_time = pro[i - 1].Completion_time + pro[i].Burst_time;
			   if (pro[i].Arrival_time > pro[i - 1].Completion_time)
			   {
				   int count = pro[i].Arrival_time - pro[i - 1].Completion_time;

				   pro[i].Completion_time = pro[i].Completion_time + count;
			   }
		   }
	   }

	   void Find_Turnaround(process pro[], int n)
	   {
		   for (int i = 0;i < n;i++)
		   {
			   pro[i].Turn_around_time = pro[i].Completion_time - pro[i].Arrival_time;
		   }
	   }


	   void Find_Waiting(process pro[], int n)
	   {
		   pro[0].Waiting_time = 0;
		   for (int i = 1;i < n;i++)
		   {
			   pro[i].Waiting_time = pro[i].Turn_around_time - pro[i].Burst_time;
		   }
	   }

	   void find_FCFS(process pro[], int n)
	   {
		   Find_Completion(pro, n);
		   Find_Turnaround(pro, n);
		   Find_Waiting(pro, n);

	   }
private: System::Void tat5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxNumberOfProcesses_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
