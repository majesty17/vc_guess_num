#pragma once


namespace guess_num {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: array<Button^>^ btn_num;
	private: int num_len;
	private: String^ str_in_heart;


	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox_len;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button_new;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  button_0;
	private: System::Windows::Forms::Button^  button_2;


	private: System::Windows::Forms::Button^  button_1;
	private: System::Windows::Forms::Button^  button_9;


	private: System::Windows::Forms::Button^  button_8;

	private: System::Windows::Forms::Button^  button_7;

	private: System::Windows::Forms::Button^  button_6;

	private: System::Windows::Forms::Button^  button_5;

	private: System::Windows::Forms::Button^  button_4;

	private: System::Windows::Forms::Button^  button_3;

	private: System::Windows::Forms::Label^  label_show;
	private: System::Windows::Forms::Button^  button_commit;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button_clear;
	private: System::Windows::Forms::Label^  label_pool;
	private: System::Windows::Forms::ListView^  listView_pool;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Label^  label_black;

	private: System::Windows::Forms::ListView^  listView_black;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox_changdu;

	private: System::Windows::Forms::Button^  button_try;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox_candi;
	private: System::Windows::Forms::TextBox^  textBox_B;

	private: System::Windows::Forms::TextBox^  textBox_A;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::TextBox^  textBox_log;
	private: System::Windows::Forms::Button^  button_a0;
	private: System::Windows::Forms::Button^  button_b5;
	private: System::Windows::Forms::Button^  button_b4;
	private: System::Windows::Forms::Button^  button_b3;
	private: System::Windows::Forms::Button^  button_b2;
	private: System::Windows::Forms::Button^  button_b1;
	private: System::Windows::Forms::Button^  button_b0;







	private: System::Windows::Forms::Button^  button_a5;

	private: System::Windows::Forms::Button^  button_a4;

	private: System::Windows::Forms::Button^  button_a3;

	private: System::Windows::Forms::Button^  button_a2;

	private: System::Windows::Forms::Button^  button_a1;








	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
		this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
		this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
		this->listView_pool = (gcnew System::Windows::Forms::ListView());
		this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
		this->label_pool = (gcnew System::Windows::Forms::Label());
		this->button_clear = (gcnew System::Windows::Forms::Button());
		this->button_commit = (gcnew System::Windows::Forms::Button());
		this->label_show = (gcnew System::Windows::Forms::Label());
		this->button_9 = (gcnew System::Windows::Forms::Button());
		this->button_8 = (gcnew System::Windows::Forms::Button());
		this->button_7 = (gcnew System::Windows::Forms::Button());
		this->button_6 = (gcnew System::Windows::Forms::Button());
		this->button_5 = (gcnew System::Windows::Forms::Button());
		this->button_4 = (gcnew System::Windows::Forms::Button());
		this->button_3 = (gcnew System::Windows::Forms::Button());
		this->button_2 = (gcnew System::Windows::Forms::Button());
		this->button_1 = (gcnew System::Windows::Forms::Button());
		this->button_0 = (gcnew System::Windows::Forms::Button());
		this->listView1 = (gcnew System::Windows::Forms::ListView());
		this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
		this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
		this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->button_new = (gcnew System::Windows::Forms::Button());
		this->textBox_len = (gcnew System::Windows::Forms::TextBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
		this->button_b5 = (gcnew System::Windows::Forms::Button());
		this->button_b4 = (gcnew System::Windows::Forms::Button());
		this->button_b3 = (gcnew System::Windows::Forms::Button());
		this->button_b2 = (gcnew System::Windows::Forms::Button());
		this->button_b1 = (gcnew System::Windows::Forms::Button());
		this->button_b0 = (gcnew System::Windows::Forms::Button());
		this->button_a5 = (gcnew System::Windows::Forms::Button());
		this->button_a4 = (gcnew System::Windows::Forms::Button());
		this->button_a3 = (gcnew System::Windows::Forms::Button());
		this->button_a2 = (gcnew System::Windows::Forms::Button());
		this->button_a1 = (gcnew System::Windows::Forms::Button());
		this->button_a0 = (gcnew System::Windows::Forms::Button());
		this->textBox_log = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->textBox_B = (gcnew System::Windows::Forms::TextBox());
		this->textBox_A = (gcnew System::Windows::Forms::TextBox());
		this->textBox_candi = (gcnew System::Windows::Forms::TextBox());
		this->button_try = (gcnew System::Windows::Forms::Button());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->textBox_changdu = (gcnew System::Windows::Forms::TextBox());
		this->label_black = (gcnew System::Windows::Forms::Label());
		this->listView_black = (gcnew System::Windows::Forms::ListView());
		this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->tabControl1->SuspendLayout();
		this->tabPage1->SuspendLayout();
		this->groupBox1->SuspendLayout();
		this->tabPage2->SuspendLayout();
		this->SuspendLayout();
		// 
		// tabControl1
		// 
		this->tabControl1->Controls->Add(this->tabPage1);
		this->tabControl1->Controls->Add(this->tabPage2);
		this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tabControl1->Location = System::Drawing::Point(0, 0);
		this->tabControl1->Name = L"tabControl1";
		this->tabControl1->SelectedIndex = 0;
		this->tabControl1->Size = System::Drawing::Size(519, 336);
		this->tabControl1->TabIndex = 0;
		// 
		// tabPage1
		// 
		this->tabPage1->Controls->Add(this->listView_pool);
		this->tabPage1->Controls->Add(this->label_pool);
		this->tabPage1->Controls->Add(this->button_clear);
		this->tabPage1->Controls->Add(this->button_commit);
		this->tabPage1->Controls->Add(this->label_show);
		this->tabPage1->Controls->Add(this->button_9);
		this->tabPage1->Controls->Add(this->button_8);
		this->tabPage1->Controls->Add(this->button_7);
		this->tabPage1->Controls->Add(this->button_6);
		this->tabPage1->Controls->Add(this->button_5);
		this->tabPage1->Controls->Add(this->button_4);
		this->tabPage1->Controls->Add(this->button_3);
		this->tabPage1->Controls->Add(this->button_2);
		this->tabPage1->Controls->Add(this->button_1);
		this->tabPage1->Controls->Add(this->button_0);
		this->tabPage1->Controls->Add(this->listView1);
		this->tabPage1->Controls->Add(this->groupBox1);
		this->tabPage1->Location = System::Drawing::Point(4, 22);
		this->tabPage1->Name = L"tabPage1";
		this->tabPage1->Padding = System::Windows::Forms::Padding(3);
		this->tabPage1->Size = System::Drawing::Size(511, 310);
		this->tabPage1->TabIndex = 0;
		this->tabPage1->Text = L"游戏";
		this->tabPage1->UseVisualStyleBackColor = true;
		// 
		// listView_pool
		// 
		this->listView_pool->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) {this->columnHeader4});
		this->listView_pool->Location = System::Drawing::Point(11, 115);
		this->listView_pool->Name = L"listView_pool";
		this->listView_pool->Size = System::Drawing::Size(113, 186);
		this->listView_pool->TabIndex = 16;
		this->listView_pool->UseCompatibleStateImageBehavior = false;
		this->listView_pool->View = System::Windows::Forms::View::Details;
		// 
		// columnHeader4
		// 
		this->columnHeader4->Text = L"候选";
		// 
		// label_pool
		// 
		this->label_pool->AutoSize = true;
		this->label_pool->Location = System::Drawing::Point(9, 99);
		this->label_pool->Name = L"label_pool";
		this->label_pool->Size = System::Drawing::Size(41, 12);
		this->label_pool->TabIndex = 15;
		this->label_pool->Text = L"label2";
		// 
		// button_clear
		// 
		this->button_clear->Location = System::Drawing::Point(453, 264);
		this->button_clear->Name = L"button_clear";
		this->button_clear->Size = System::Drawing::Size(41, 37);
		this->button_clear->TabIndex = 14;
		this->button_clear->Text = L"清空";
		this->button_clear->UseVisualStyleBackColor = true;
		this->button_clear->Click += gcnew System::EventHandler(this, &Form1::button_clear_Click);
		// 
		// button_commit
		// 
		this->button_commit->Location = System::Drawing::Point(303, 264);
		this->button_commit->Name = L"button_commit";
		this->button_commit->Size = System::Drawing::Size(144, 37);
		this->button_commit->TabIndex = 13;
		this->button_commit->Text = L"尝试";
		this->button_commit->UseVisualStyleBackColor = true;
		this->button_commit->Click += gcnew System::EventHandler(this, &Form1::button_commit_Click);
		// 
		// label_show
		// 
		this->label_show->AutoSize = true;
		this->label_show->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(134)));
		this->label_show->ForeColor = System::Drawing::Color::DarkRed;
		this->label_show->Location = System::Drawing::Point(327, 66);
		this->label_show->Name = L"label_show";
		this->label_show->Size = System::Drawing::Size(120, 46);
		this->label_show->TabIndex = 12;
		this->label_show->Text = L"label2";
		// 
		// button_9
		// 
		this->button_9->Location = System::Drawing::Point(453, 209);
		this->button_9->Name = L"button_9";
		this->button_9->Size = System::Drawing::Size(32, 32);
		this->button_9->TabIndex = 11;
		this->button_9->Text = L"0";
		this->button_9->UseVisualStyleBackColor = true;
		// 
		// button_8
		// 
		this->button_8->Location = System::Drawing::Point(415, 209);
		this->button_8->Name = L"button_8";
		this->button_8->Size = System::Drawing::Size(32, 32);
		this->button_8->TabIndex = 10;
		this->button_8->Text = L"0";
		this->button_8->UseVisualStyleBackColor = true;
		// 
		// button_7
		// 
		this->button_7->Location = System::Drawing::Point(377, 209);
		this->button_7->Name = L"button_7";
		this->button_7->Size = System::Drawing::Size(32, 32);
		this->button_7->TabIndex = 9;
		this->button_7->Text = L"0";
		this->button_7->UseVisualStyleBackColor = true;
		// 
		// button_6
		// 
		this->button_6->Location = System::Drawing::Point(339, 209);
		this->button_6->Name = L"button_6";
		this->button_6->Size = System::Drawing::Size(32, 32);
		this->button_6->TabIndex = 8;
		this->button_6->Text = L"0";
		this->button_6->UseVisualStyleBackColor = true;
		// 
		// button_5
		// 
		this->button_5->Location = System::Drawing::Point(301, 209);
		this->button_5->Name = L"button_5";
		this->button_5->Size = System::Drawing::Size(32, 32);
		this->button_5->TabIndex = 7;
		this->button_5->Text = L"0";
		this->button_5->UseVisualStyleBackColor = true;
		// 
		// button_4
		// 
		this->button_4->Location = System::Drawing::Point(453, 171);
		this->button_4->Name = L"button_4";
		this->button_4->Size = System::Drawing::Size(32, 32);
		this->button_4->TabIndex = 6;
		this->button_4->Text = L"0";
		this->button_4->UseVisualStyleBackColor = true;
		// 
		// button_3
		// 
		this->button_3->Location = System::Drawing::Point(415, 171);
		this->button_3->Name = L"button_3";
		this->button_3->Size = System::Drawing::Size(32, 32);
		this->button_3->TabIndex = 5;
		this->button_3->Text = L"0";
		this->button_3->UseVisualStyleBackColor = true;
		// 
		// button_2
		// 
		this->button_2->Location = System::Drawing::Point(377, 171);
		this->button_2->Name = L"button_2";
		this->button_2->Size = System::Drawing::Size(32, 32);
		this->button_2->TabIndex = 4;
		this->button_2->Text = L"0";
		this->button_2->UseVisualStyleBackColor = true;
		// 
		// button_1
		// 
		this->button_1->Location = System::Drawing::Point(339, 171);
		this->button_1->Name = L"button_1";
		this->button_1->Size = System::Drawing::Size(32, 32);
		this->button_1->TabIndex = 3;
		this->button_1->Text = L"0";
		this->button_1->UseVisualStyleBackColor = true;
		// 
		// button_0
		// 
		this->button_0->Location = System::Drawing::Point(301, 171);
		this->button_0->Name = L"button_0";
		this->button_0->Size = System::Drawing::Size(32, 32);
		this->button_0->TabIndex = 2;
		this->button_0->Text = L"0";
		this->button_0->UseVisualStyleBackColor = true;
		// 
		// listView1
		// 
		this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
			this->columnHeader3});
		this->listView1->Location = System::Drawing::Point(131, 7);
		this->listView1->Name = L"listView1";
		this->listView1->Size = System::Drawing::Size(146, 294);
		this->listView1->TabIndex = 1;
		this->listView1->UseCompatibleStateImageBehavior = false;
		this->listView1->View = System::Windows::Forms::View::Details;
		// 
		// columnHeader1
		// 
		this->columnHeader1->Text = L"No";
		this->columnHeader1->Width = 27;
		// 
		// columnHeader2
		// 
		this->columnHeader2->Text = L"尝试";
		// 
		// columnHeader3
		// 
		this->columnHeader3->Text = L"结果";
		this->columnHeader3->Width = 55;
		// 
		// groupBox1
		// 
		this->groupBox1->Controls->Add(this->button_new);
		this->groupBox1->Controls->Add(this->textBox_len);
		this->groupBox1->Controls->Add(this->label1);
		this->groupBox1->Location = System::Drawing::Point(9, 7);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Size = System::Drawing::Size(115, 81);
		this->groupBox1->TabIndex = 0;
		this->groupBox1->TabStop = false;
		this->groupBox1->Text = L"游戏设置";
		// 
		// button_new
		// 
		this->button_new->Location = System::Drawing::Point(17, 45);
		this->button_new->Name = L"button_new";
		this->button_new->Size = System::Drawing::Size(75, 23);
		this->button_new->TabIndex = 2;
		this->button_new->Text = L"新游戏";
		this->button_new->UseVisualStyleBackColor = true;
		this->button_new->Click += gcnew System::EventHandler(this, &Form1::button_new_Click);
		// 
		// textBox_len
		// 
		this->textBox_len->Location = System::Drawing::Point(42, 18);
		this->textBox_len->Name = L"textBox_len";
		this->textBox_len->Size = System::Drawing::Size(50, 21);
		this->textBox_len->TabIndex = 1;
		this->textBox_len->Text = L"3";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(7, 21);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(29, 12);
		this->label1->TabIndex = 0;
		this->label1->Text = L"位数";
		// 
		// tabPage2
		// 
		this->tabPage2->Controls->Add(this->button_b5);
		this->tabPage2->Controls->Add(this->button_b4);
		this->tabPage2->Controls->Add(this->button_b3);
		this->tabPage2->Controls->Add(this->button_b2);
		this->tabPage2->Controls->Add(this->button_b1);
		this->tabPage2->Controls->Add(this->button_b0);
		this->tabPage2->Controls->Add(this->button_a5);
		this->tabPage2->Controls->Add(this->button_a4);
		this->tabPage2->Controls->Add(this->button_a3);
		this->tabPage2->Controls->Add(this->button_a2);
		this->tabPage2->Controls->Add(this->button_a1);
		this->tabPage2->Controls->Add(this->button_a0);
		this->tabPage2->Controls->Add(this->textBox_log);
		this->tabPage2->Controls->Add(this->button1);
		this->tabPage2->Controls->Add(this->textBox_B);
		this->tabPage2->Controls->Add(this->textBox_A);
		this->tabPage2->Controls->Add(this->textBox_candi);
		this->tabPage2->Controls->Add(this->button_try);
		this->tabPage2->Controls->Add(this->label3);
		this->tabPage2->Controls->Add(this->textBox_changdu);
		this->tabPage2->Controls->Add(this->label_black);
		this->tabPage2->Controls->Add(this->listView_black);
		this->tabPage2->Controls->Add(this->label4);
		this->tabPage2->Location = System::Drawing::Point(4, 22);
		this->tabPage2->Name = L"tabPage2";
		this->tabPage2->Padding = System::Windows::Forms::Padding(3);
		this->tabPage2->Size = System::Drawing::Size(511, 310);
		this->tabPage2->TabIndex = 1;
		this->tabPage2->Text = L"黑盒破解";
		this->tabPage2->UseVisualStyleBackColor = true;
		// 
		// button_b5
		// 
		this->button_b5->BackColor = System::Drawing::Color::Silver;
		this->button_b5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_b5->Location = System::Drawing::Point(390, 187);
		this->button_b5->Name = L"button_b5";
		this->button_b5->Size = System::Drawing::Size(30, 24);
		this->button_b5->TabIndex = 22;
		this->button_b5->Text = L"5";
		this->button_b5->UseVisualStyleBackColor = false;
		this->button_b5->Click += gcnew System::EventHandler(this, &Form1::button_B_Click);
		// 
		// button_b4
		// 
		this->button_b4->BackColor = System::Drawing::Color::Silver;
		this->button_b4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_b4->Location = System::Drawing::Point(390, 157);
		this->button_b4->Name = L"button_b4";
		this->button_b4->Size = System::Drawing::Size(30, 24);
		this->button_b4->TabIndex = 21;
		this->button_b4->Text = L"4";
		this->button_b4->UseVisualStyleBackColor = false;
		this->button_b4->Click += gcnew System::EventHandler(this, &Form1::button_B_Click);
		// 
		// button_b3
		// 
		this->button_b3->BackColor = System::Drawing::Color::Silver;
		this->button_b3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_b3->Location = System::Drawing::Point(390, 127);
		this->button_b3->Name = L"button_b3";
		this->button_b3->Size = System::Drawing::Size(30, 24);
		this->button_b3->TabIndex = 20;
		this->button_b3->Text = L"3";
		this->button_b3->UseVisualStyleBackColor = false;
		this->button_b3->Click += gcnew System::EventHandler(this, &Form1::button_B_Click);
		// 
		// button_b2
		// 
		this->button_b2->BackColor = System::Drawing::Color::Silver;
		this->button_b2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_b2->Location = System::Drawing::Point(390, 97);
		this->button_b2->Name = L"button_b2";
		this->button_b2->Size = System::Drawing::Size(30, 24);
		this->button_b2->TabIndex = 19;
		this->button_b2->Text = L"2";
		this->button_b2->UseVisualStyleBackColor = false;
		this->button_b2->Click += gcnew System::EventHandler(this, &Form1::button_B_Click);
		// 
		// button_b1
		// 
		this->button_b1->BackColor = System::Drawing::Color::Silver;
		this->button_b1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_b1->Location = System::Drawing::Point(390, 67);
		this->button_b1->Name = L"button_b1";
		this->button_b1->Size = System::Drawing::Size(30, 24);
		this->button_b1->TabIndex = 18;
		this->button_b1->Text = L"1";
		this->button_b1->UseVisualStyleBackColor = false;
		this->button_b1->Click += gcnew System::EventHandler(this, &Form1::button_B_Click);
		// 
		// button_b0
		// 
		this->button_b0->BackColor = System::Drawing::Color::Silver;
		this->button_b0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_b0->Location = System::Drawing::Point(390, 37);
		this->button_b0->Name = L"button_b0";
		this->button_b0->Size = System::Drawing::Size(30, 24);
		this->button_b0->TabIndex = 17;
		this->button_b0->Text = L"0";
		this->button_b0->UseVisualStyleBackColor = false;
		this->button_b0->Click += gcnew System::EventHandler(this, &Form1::button_B_Click);
		// 
		// button_a5
		// 
		this->button_a5->BackColor = System::Drawing::Color::Silver;
		this->button_a5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_a5->Location = System::Drawing::Point(340, 187);
		this->button_a5->Name = L"button_a5";
		this->button_a5->Size = System::Drawing::Size(30, 24);
		this->button_a5->TabIndex = 16;
		this->button_a5->Text = L"5";
		this->button_a5->UseVisualStyleBackColor = false;
		this->button_a5->Click += gcnew System::EventHandler(this, &Form1::button_A_Click);
		// 
		// button_a4
		// 
		this->button_a4->BackColor = System::Drawing::Color::Silver;
		this->button_a4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_a4->Location = System::Drawing::Point(340, 157);
		this->button_a4->Name = L"button_a4";
		this->button_a4->Size = System::Drawing::Size(30, 24);
		this->button_a4->TabIndex = 15;
		this->button_a4->Text = L"4";
		this->button_a4->UseVisualStyleBackColor = false;
		this->button_a4->Click += gcnew System::EventHandler(this, &Form1::button_A_Click);
		// 
		// button_a3
		// 
		this->button_a3->BackColor = System::Drawing::Color::Silver;
		this->button_a3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_a3->Location = System::Drawing::Point(340, 127);
		this->button_a3->Name = L"button_a3";
		this->button_a3->Size = System::Drawing::Size(30, 24);
		this->button_a3->TabIndex = 14;
		this->button_a3->Text = L"3";
		this->button_a3->UseVisualStyleBackColor = false;
		this->button_a3->Click += gcnew System::EventHandler(this, &Form1::button_A_Click);
		// 
		// button_a2
		// 
		this->button_a2->BackColor = System::Drawing::Color::Silver;
		this->button_a2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_a2->Location = System::Drawing::Point(340, 97);
		this->button_a2->Name = L"button_a2";
		this->button_a2->Size = System::Drawing::Size(30, 24);
		this->button_a2->TabIndex = 13;
		this->button_a2->Text = L"2";
		this->button_a2->UseVisualStyleBackColor = false;
		this->button_a2->Click += gcnew System::EventHandler(this, &Form1::button_A_Click);
		// 
		// button_a1
		// 
		this->button_a1->BackColor = System::Drawing::Color::Silver;
		this->button_a1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_a1->Location = System::Drawing::Point(340, 67);
		this->button_a1->Name = L"button_a1";
		this->button_a1->Size = System::Drawing::Size(30, 24);
		this->button_a1->TabIndex = 12;
		this->button_a1->Text = L"1";
		this->button_a1->UseVisualStyleBackColor = false;
		this->button_a1->Click += gcnew System::EventHandler(this, &Form1::button_A_Click);
		// 
		// button_a0
		// 
		this->button_a0->BackColor = System::Drawing::Color::Silver;
		this->button_a0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button_a0->Location = System::Drawing::Point(340, 37);
		this->button_a0->Name = L"button_a0";
		this->button_a0->Size = System::Drawing::Size(30, 24);
		this->button_a0->TabIndex = 11;
		this->button_a0->Text = L"0";
		this->button_a0->UseVisualStyleBackColor = false;
		this->button_a0->Click += gcnew System::EventHandler(this, &Form1::button_A_Click);
		// 
		// textBox_log
		// 
		this->textBox_log->AcceptsReturn = true;
		this->textBox_log->Location = System::Drawing::Point(138, 45);
		this->textBox_log->Multiline = true;
		this->textBox_log->Name = L"textBox_log";
		this->textBox_log->ReadOnly = true;
		this->textBox_log->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
		this->textBox_log->Size = System::Drawing::Size(153, 257);
		this->textBox_log->TabIndex = 10;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(426, 243);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(75, 59);
		this->button1->TabIndex = 9;
		this->button1->Text = L"重置";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		// 
		// textBox_B
		// 
		this->textBox_B->Location = System::Drawing::Point(390, 9);
		this->textBox_B->Name = L"textBox_B";
		this->textBox_B->Size = System::Drawing::Size(30, 21);
		this->textBox_B->TabIndex = 8;
		// 
		// textBox_A
		// 
		this->textBox_A->Location = System::Drawing::Point(340, 9);
		this->textBox_A->Name = L"textBox_A";
		this->textBox_A->Size = System::Drawing::Size(30, 21);
		this->textBox_A->TabIndex = 7;
		// 
		// textBox_candi
		// 
		this->textBox_candi->Location = System::Drawing::Point(258, 9);
		this->textBox_candi->Name = L"textBox_candi";
		this->textBox_candi->Size = System::Drawing::Size(63, 21);
		this->textBox_candi->TabIndex = 6;
		// 
		// button_try
		// 
		this->button_try->Location = System::Drawing::Point(426, 7);
		this->button_try->Name = L"button_try";
		this->button_try->Size = System::Drawing::Size(69, 23);
		this->button_try->TabIndex = 4;
		this->button_try->Text = L"提交一次";
		this->button_try->UseVisualStyleBackColor = true;
		this->button_try->Click += gcnew System::EventHandler(this, &Form1::button_try_Click);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(136, 12);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(29, 12);
		this->label3->TabIndex = 3;
		this->label3->Text = L"长度";
		// 
		// textBox_changdu
		// 
		this->textBox_changdu->Location = System::Drawing::Point(171, 9);
		this->textBox_changdu->Name = L"textBox_changdu";
		this->textBox_changdu->Size = System::Drawing::Size(46, 21);
		this->textBox_changdu->TabIndex = 2;
		this->textBox_changdu->Text = L"5";
		// 
		// label_black
		// 
		this->label_black->AutoSize = true;
		this->label_black->Location = System::Drawing::Point(9, 7);
		this->label_black->Name = L"label_black";
		this->label_black->Size = System::Drawing::Size(41, 12);
		this->label_black->TabIndex = 1;
		this->label_black->Text = L"label2";
		// 
		// listView_black
		// 
		this->listView_black->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) {this->columnHeader5});
		this->listView_black->FullRowSelect = true;
		this->listView_black->GridLines = true;
		this->listView_black->Location = System::Drawing::Point(9, 22);
		this->listView_black->MultiSelect = false;
		this->listView_black->Name = L"listView_black";
		this->listView_black->Size = System::Drawing::Size(109, 280);
		this->listView_black->TabIndex = 0;
		this->listView_black->UseCompatibleStateImageBehavior = false;
		this->listView_black->View = System::Windows::Forms::View::Details;
		this->listView_black->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::listView_black_MouseDoubleClick);
		// 
		// columnHeader5
		// 
		this->columnHeader5->Text = L"候选";
		this->columnHeader5->Width = 82;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(223, 12);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(161, 12);
		this->label4->TabIndex = 5;
		this->label4->Text = L"候选             A       B";
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(519, 336);
		this->Controls->Add(this->tabControl1);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->MaximizeBox = false;
		this->Name = L"Form1";
		this->Text = L"Guess Num";
		this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		this->tabControl1->ResumeLayout(false);
		this->tabPage1->ResumeLayout(false);
		this->tabPage1->PerformLayout();
		this->groupBox1->ResumeLayout(false);
		this->groupBox1->PerformLayout();
		this->tabPage2->ResumeLayout(false);
		this->tabPage2->PerformLayout();
		this->ResumeLayout(false);

			}
#pragma endregion
//新游戏
private: System::Void button_new_Click(System::Object^  sender, System::EventArgs^  e) {
	this->num_len=Convert::ToInt32(textBox_len->Text);
	this->str_in_heart=initNum(Convert::ToInt32(textBox_len->Text,10));
	//this->Text="Hint:"+this->str_in_heart;
	//MessageBox::Show(this->str_in_heart);
	for(int i=0;i<10;i++){
		btn_num[i]->Enabled=true;
	}
	label_show->Text="";
	listView1->Items->Clear();
	button_commit->Enabled=false;
	this->initPool();
}





//初始化一串数字
public: static String^ initNum(int len){
	Random^ ran=gcnew Random(Environment::TickCount);
	String^ ret= String::Format("{0:D"+len+"}",ran->Next(pow10(len)));
	while(hasSame(ret)==true){
		ret= String::Format("{0:D"+len+"}",ran->Next(pow10(len)));
	}
	return ret;
}
//10的次方
public: static int pow10(int n){
	int ret=1;
	while(n--){
		ret*=10;
	}
	return ret;
}
//查重
public: static bool hasSame(String^ str){
	ArrayList^ char_arr=gcnew ArrayList();
	for(int i=0;i<str->Length;i++){
		if(char_arr->Contains(str[i]) ){
			return true;
		}
		char_arr->Add(str[i]);
	}
	return false;
}

//窗口初始化
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	btn_num=gcnew array<Button^>(10);
	btn_num[0]=button_0;
	btn_num[1]=button_1;
	btn_num[2]=button_2;
	btn_num[3]=button_3;
	btn_num[4]=button_4;
	btn_num[5]=button_5;
	btn_num[6]=button_6;
	btn_num[7]=button_7;
	btn_num[8]=button_8;
	btn_num[9]=button_9;
	for(int i=0;i<10;i++){
		btn_num[i]->Click += gcnew System::EventHandler(this, &Form1::button_num_Click);
		btn_num[i]->Text=Convert::ToString(i,10);
	}

	//自动开启游戏
	button_new_Click(sender,e);
}
//数字按钮事件
private: System::Void button_num_Click(System::Object^  sender, System::EventArgs^  e) {
	Button^ this_btn=(Button^)sender;
	int ind=Array::IndexOf(btn_num,this_btn);
	if(label_show->Text->Length<this->num_len){
		label_show->Text+=ind+"";
		this_btn->Enabled=false;
	}
	if(label_show->Text->Length==this->num_len){
		button_commit->Enabled=true;
	}
}


//提交一次尝试
private: System::Void button_commit_Click(System::Object^  sender, System::EventArgs^  e) {
	if(label_show->Text->Length!=this->num_len){
		return;
	}


	//把按钮打开
	for(int i=0;i<10;i++){
		btn_num[i]->Enabled=true;
	}
	//清空label_show
	String^ str=label_show->Text;
	label_show->Text="";

	int A=0,B=0;
	for(int i=0;i<this->num_len;i++){
		if(str[i]==this->str_in_heart[i]){
			A++;
		}
	}

	for(int i=0;i<this->num_len;i++){
		for(int j=0;j<this->num_len;j++){
			if(str[i]==this->str_in_heart[j]){
				B++;
			}
		}
	}
	//MessageBox::Show("str:"+str+"\nresult:A"+A+",B"+B);
	ListViewItem^ item=gcnew ListViewItem(""+(listView1->Items->Count+1) );

	item->SubItems->Add(str);
	item->SubItems->Add("A"+A+",B"+B);
	listView1->Items->Add(item);
	button_commit->Enabled=false;

	if(A==this->num_len){
		MessageBox::Show("Bingo! It's : "+str);
	}


	cleanPool(A,B,str);
}


//清空当前输入
private: System::Void button_clear_Click(System::Object^  sender, System::EventArgs^  e) {
	for(int i=0;i<10;i++){
		btn_num[i]->Enabled=true;
	}
	button_commit->Enabled=false;
	label_show->Text="";
}


//充pool
private: void initPool(){
	listView_pool->Items->Clear();
	for(int i=0;i<pow10(this->num_len);i++){
		String^ ap=String::Format("{0:D"+num_len+"}",i);
		if(this->hasSame(ap)==true){
			continue;
		}
		ListViewItem^ item=gcnew ListViewItem(ap);

		listView_pool->Items->Add(item);
	}
	label_pool->Text=""+listView_pool->Items->Count;

}
//过滤pool
private:void cleanPool(int A,int B,String^ give){
	int pool_len=listView_pool->Items->Count;
	for (int i=pool_len-1;i>=0;i--){
		ListViewItem^ lv=listView_pool->Items[i];
		String^ str_in_pool=lv->SubItems[0]->Text;
		int a=0,b=0;
		//MessageBox::Show(str_in_pool);
		for(int m=0;m<this->num_len;m++){
			if(str_in_pool[m]==give[m])
				a++;
			for(int n=0;n<this->num_len;n++){
				if(str_in_pool[m]==give[n])
					b++;
			}
		}
		if(A!=a || B!=b){
			listView_pool->Items->RemoveAt(i);

		}
	}
	label_pool->Text=""+listView_pool->Items->Count;
}






//hack-reset
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int len=Convert::ToInt32(textBox_changdu->Text,10);
	listView_black->Items->Clear();
	
	

	for(int i=0;i<pow10(len);i++){
		String^ ap=String::Format("{0:D"+len+"}",i);
		if(this->hasSame(ap)==true){
			continue;
		}


		listView_black->Items->Add(ap);
	}
	label_black->Text=""+listView_black->Items->Count;
	textBox_log->Clear();
}


//提交一次答案
private: System::Void button_try_Click(System::Object^  sender, System::EventArgs^  e) {
	if(textBox_A->Text=="" || textBox_B->Text=="" || textBox_candi->Text=="" || textBox_changdu->Text==""){
		MessageBox::Show("输入不能为空！");
		return;
	}
	int len=Convert::ToInt32(textBox_changdu->Text,10);
	int A=Convert::ToInt32(textBox_A->Text,10);
	int B=Convert::ToInt32(textBox_B->Text,10);
	String^ str=textBox_candi->Text;

	if(A<0 || B<0 || A>len || B>len || str->Length!=len || this->hasSame(str)){
		MessageBox::Show("非法输入");
		return;
	}

	int pool_len=listView_black->Items->Count;
	String^ give=str;
	for (int i=pool_len-1;i>=0;i--){
		ListViewItem^ lv=listView_black->Items[i];
		String^ str_in_pool=lv->SubItems[0]->Text;
		int a=0,b=0;
		//MessageBox::Show(str_in_pool);
		for(int m=0;m<len;m++){
			if(str_in_pool[m]==give[m])
				a++;
			for(int n=0;n<len;n++){
				if(str_in_pool[m]==give[n])
					b++;
				}
			}
		if(A!=a || B!=b){
			listView_black->Items->RemoveAt(i);

		}
	}
	label_black->Text=""+listView_black->Items->Count;

	//更新textbox
	textBox_log->Text=textBox_log->Text+textBox_candi->Text+"  ->  A"+A+",B"+B+"\r\n";
}


//双击listview_bl
private: System::Void listView_black_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	String^ val=((ListViewItem^)(listView_black->SelectedItems[0]))->SubItems[0]->Text;
	textBox_candi->Text=val;
}



//填数字
private: System::Void button_A_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox_A->Text=((Button^)sender)->Text;
}
private: System::Void button_B_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox_B->Text=((Button^)sender)->Text;
}
};
}

