#pragma once
namespace FstProectGUI {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dizarizago;


	protected:

	protected:



	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ button_ac;


	private: System::Windows::Forms::Button^ button_ravn;
	private: System::Windows::Forms::Button^ button_dot;


	private: System::Windows::Forms::Button^ btn_num0;
	private: System::Windows::Forms::Button^ button_plus;



	private: System::Windows::Forms::Button^ btn_num9;

	private: System::Windows::Forms::Button^ btn_num8;

	private: System::Windows::Forms::Button^ btn_num7;
	private: System::Windows::Forms::Button^ button_minus;


	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn_num6;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btn_num5;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_num4;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button_umnozh;

	private: System::Windows::Forms::Button^ btn_num3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn_num2;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btn_num1;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_delenie;
	private: System::Windows::Forms::Button^ button_percent;



	private: System::Windows::Forms::Button^ button_minPlus;









	private: System::ComponentModel::IContainer^ components;

	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_minPlus = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_delenie = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->btn_num9 = (gcnew System::Windows::Forms::Button());
			this->btn_num8 = (gcnew System::Windows::Forms::Button());
			this->btn_num7 = (gcnew System::Windows::Forms::Button());
			this->button_ravn = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->btn_num0 = (gcnew System::Windows::Forms::Button());
			this->btn_num1 = (gcnew System::Windows::Forms::Button());
			this->btn_num2 = (gcnew System::Windows::Forms::Button());
			this->btn_num3 = (gcnew System::Windows::Forms::Button());
			this->button_umnozh = (gcnew System::Windows::Forms::Button());
			this->btn_num4 = (gcnew System::Windows::Forms::Button());
			this->btn_num5 = (gcnew System::Windows::Forms::Button());
			this->btn_num6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button_exit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::Info;
			this->button_exit->Location = System::Drawing::Point(12, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(27, 30);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"x";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::Color::White;
			this->result_label->Location = System::Drawing::Point(12, 12);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(278, 59);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_ac
			// 
			this->button_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ac->ForeColor = System::Drawing::Color::White;
			this->button_ac->Location = System::Drawing::Point(12, 95);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(65, 50);
			this->button_ac->TabIndex = 2;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_minPlus
			// 
			this->button_minPlus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button_minPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minPlus->ForeColor = System::Drawing::Color::White;
			this->button_minPlus->Location = System::Drawing::Point(83, 95);
			this->button_minPlus->Name = L"button_minPlus";
			this->button_minPlus->Size = System::Drawing::Size(65, 50);
			this->button_minPlus->TabIndex = 3;
			this->button_minPlus->Text = L"+/-";
			this->button_minPlus->UseVisualStyleBackColor = false;
			this->button_minPlus->Click += gcnew System::EventHandler(this, &MyForm::button_minPlus_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_percent->ForeColor = System::Drawing::Color::White;
			this->button_percent->Location = System::Drawing::Point(154, 95);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(65, 50);
			this->button_percent->TabIndex = 4;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// button_delenie
			// 
			this->button_delenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button_delenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delenie->ForeColor = System::Drawing::Color::White;
			this->button_delenie->Location = System::Drawing::Point(225, 95);
			this->button_delenie->Name = L"button_delenie";
			this->button_delenie->Size = System::Drawing::Size(65, 50);
			this->button_delenie->TabIndex = 5;
			this->button_delenie->Text = L"/";
			this->button_delenie->UseVisualStyleBackColor = false;
			this->button_delenie->Click += gcnew System::EventHandler(this, &MyForm::button_delenie_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(225, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 50);
			this->button5->TabIndex = 9;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(154, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(83, 162);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(12, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 50);
			this->button8->TabIndex = 6;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(225, 228);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 50);
			this->button9->TabIndex = 13;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(154, 228);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 50);
			this->button10->TabIndex = 12;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(83, 228);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 50);
			this->button11->TabIndex = 11;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(12, 228);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 50);
			this->button12->TabIndex = 10;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(225, 293);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(65, 50);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// btn_num9
			// 
			this->btn_num9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num9->ForeColor = System::Drawing::Color::White;
			this->btn_num9->Location = System::Drawing::Point(154, 293);
			this->btn_num9->Name = L"btn_num9";
			this->btn_num9->Size = System::Drawing::Size(65, 50);
			this->btn_num9->TabIndex = 16;
			this->btn_num9->Text = L"9";
			this->btn_num9->UseVisualStyleBackColor = false;
			this->btn_num9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num8
			// 
			this->btn_num8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num8->ForeColor = System::Drawing::Color::White;
			this->btn_num8->Location = System::Drawing::Point(83, 293);
			this->btn_num8->Name = L"btn_num8";
			this->btn_num8->Size = System::Drawing::Size(65, 50);
			this->btn_num8->TabIndex = 15;
			this->btn_num8->Text = L"8";
			this->btn_num8->UseVisualStyleBackColor = false;
			this->btn_num8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num7
			// 
			this->btn_num7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num7->ForeColor = System::Drawing::Color::White;
			this->btn_num7->Location = System::Drawing::Point(12, 293);
			this->btn_num7->Name = L"btn_num7";
			this->btn_num7->Size = System::Drawing::Size(65, 50);
			this->btn_num7->TabIndex = 14;
			this->btn_num7->Text = L"7";
			this->btn_num7->UseVisualStyleBackColor = false;
			this->btn_num7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_ravn
			// 
			this->button_ravn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button_ravn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ravn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ravn->ForeColor = System::Drawing::Color::White;
			this->button_ravn->Location = System::Drawing::Point(225, 361);
			this->button_ravn->Name = L"button_ravn";
			this->button_ravn->Size = System::Drawing::Size(65, 50);
			this->button_ravn->TabIndex = 21;
			this->button_ravn->Text = L"=";
			this->button_ravn->UseVisualStyleBackColor = false;
			this->button_ravn->Click += gcnew System::EventHandler(this, &MyForm::button_ravn_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::Color::White;
			this->button_dot->Location = System::Drawing::Point(154, 361);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(65, 50);
			this->button_dot->TabIndex = 20;
			this->button_dot->Text = L",";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// btn_num0
			// 
			this->btn_num0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num0->ForeColor = System::Drawing::Color::White;
			this->btn_num0->Location = System::Drawing::Point(12, 361);
			this->btn_num0->Name = L"btn_num0";
			this->btn_num0->Size = System::Drawing::Size(136, 50);
			this->btn_num0->TabIndex = 19;
			this->btn_num0->Text = L"0";
			this->btn_num0->UseVisualStyleBackColor = false;
			this->btn_num0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num1
			// 
			this->btn_num1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num1->ForeColor = System::Drawing::Color::White;
			this->btn_num1->Location = System::Drawing::Point(12, 162);
			this->btn_num1->Name = L"btn_num1";
			this->btn_num1->Size = System::Drawing::Size(65, 50);
			this->btn_num1->TabIndex = 6;
			this->btn_num1->Text = L"1";
			this->btn_num1->UseVisualStyleBackColor = false;
			this->btn_num1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num2
			// 
			this->btn_num2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num2->ForeColor = System::Drawing::Color::White;
			this->btn_num2->Location = System::Drawing::Point(83, 162);
			this->btn_num2->Name = L"btn_num2";
			this->btn_num2->Size = System::Drawing::Size(65, 50);
			this->btn_num2->TabIndex = 7;
			this->btn_num2->Text = L"2";
			this->btn_num2->UseVisualStyleBackColor = false;
			this->btn_num2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num3
			// 
			this->btn_num3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num3->ForeColor = System::Drawing::Color::White;
			this->btn_num3->Location = System::Drawing::Point(154, 162);
			this->btn_num3->Name = L"btn_num3";
			this->btn_num3->Size = System::Drawing::Size(65, 50);
			this->btn_num3->TabIndex = 8;
			this->btn_num3->Text = L"3";
			this->btn_num3->UseVisualStyleBackColor = false;
			this->btn_num3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_umnozh
			// 
			this->button_umnozh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button_umnozh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_umnozh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_umnozh->ForeColor = System::Drawing::Color::White;
			this->button_umnozh->Location = System::Drawing::Point(225, 162);
			this->button_umnozh->Name = L"button_umnozh";
			this->button_umnozh->Size = System::Drawing::Size(65, 50);
			this->button_umnozh->TabIndex = 9;
			this->button_umnozh->Text = L"*";
			this->button_umnozh->UseVisualStyleBackColor = false;
			this->button_umnozh->Click += gcnew System::EventHandler(this, &MyForm::button_umnozh_Click);
			// 
			// btn_num4
			// 
			this->btn_num4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num4->ForeColor = System::Drawing::Color::White;
			this->btn_num4->Location = System::Drawing::Point(12, 228);
			this->btn_num4->Name = L"btn_num4";
			this->btn_num4->Size = System::Drawing::Size(65, 50);
			this->btn_num4->TabIndex = 10;
			this->btn_num4->Text = L"4";
			this->btn_num4->UseVisualStyleBackColor = false;
			this->btn_num4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num5
			// 
			this->btn_num5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num5->ForeColor = System::Drawing::Color::White;
			this->btn_num5->Location = System::Drawing::Point(83, 228);
			this->btn_num5->Name = L"btn_num5";
			this->btn_num5->Size = System::Drawing::Size(65, 50);
			this->btn_num5->TabIndex = 11;
			this->btn_num5->Text = L"5";
			this->btn_num5->UseVisualStyleBackColor = false;
			this->btn_num5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_num6
			// 
			this->btn_num6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btn_num6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_num6->ForeColor = System::Drawing::Color::White;
			this->btn_num6->Location = System::Drawing::Point(154, 228);
			this->btn_num6->Name = L"btn_num6";
			this->btn_num6->Size = System::Drawing::Size(65, 50);
			this->btn_num6->TabIndex = 12;
			this->btn_num6->Text = L"6";
			this->btn_num6->UseVisualStyleBackColor = false;
			this->btn_num6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(225, 228);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(65, 50);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 54);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->CancelButton = this->button_exit;
			this->ClientSize = System::Drawing::Size(300, 434);
			this->Controls->Add(this->button_ravn);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->btn_num0);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->btn_num9);
			this->Controls->Add(this->btn_num8);
			this->Controls->Add(this->btn_num7);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn_num6);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->btn_num5);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->btn_num4);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button_umnozh);
			this->Controls->Add(this->btn_num3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_num2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btn_num1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button_delenie);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_minPlus);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(7, 10, 7, 10);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->TopMost = true;
			this->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		//преобразование из типа данных Object в Button
		Button^ button = safe_cast<Button^>(sender);
		//this->result_label->Text = button->Text;
		if (this->result_label->Text == "0" || is_equal)
		{
			this->result_label->Text = button->Text;
			is_equal = false;
		}
			
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}

	private: System::Void button_delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void button_umnozh_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void button_ravn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;

		//преобразование из string в int
		float second = System::Convert::ToDouble(this->result_label->Text);
		float res;
		switch (this->user_action)
		{
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '/': 
			if (second == 0)
			{
				res = 0;
				this->result_label->ForeColor = Color::DarkRed;
				//всплывающее окно с ошибкой
				MessageBox::Show(this, "ƒействие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;
		case '%': res = this->first_num * second / 100; break;
		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void button_minPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}

	private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if(!text->Contains(","))
			this->result_label->Text = text + ",";
	}
};
}
