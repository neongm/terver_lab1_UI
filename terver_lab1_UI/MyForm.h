#pragma once


namespace terverlab1UI {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button_normal_dist;

	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ hisrogram;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ listbox_DEBUG;
	private: System::Windows::Forms::Button^ button_exponent_dist;
	private: System::Windows::Forms::Button^ button_uniform_dist;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel_normal_dist;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numeric_normal_expectation;
	private: System::Windows::Forms::NumericUpDown^ numeric_normal_dispersion;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numeric_uniform_to;

	private: System::Windows::Forms::NumericUpDown^ numeric_uniform_from;
	private: System::Windows::Forms::NumericUpDown^ numeric_exponent_coefficient;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkbox_autoclear;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkbox_debug;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::CheckBox^ checkbox_chances;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ emperical;

	private: System::Windows::Forms::NumericUpDown^ numeric_hist_columns;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numeric_experiments_amount;

	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::NumericUpDown^ numeric_kde_window_width;

	private: System::Windows::Forms::Label^ label12;







	private:
		/// <summary>
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numeric_kde_window_width = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numeric_experiments_amount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numeric_hist_columns = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkbox_chances = (gcnew System::Windows::Forms::CheckBox());
			this->hisrogram = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_uniform_dist = (gcnew System::Windows::Forms::Button());
			this->button_exponent_dist = (gcnew System::Windows::Forms::Button());
			this->button_normal_dist = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkbox_debug = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkbox_autoclear = (gcnew System::Windows::Forms::CheckBox());
			this->listbox_DEBUG = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numeric_uniform_to = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_uniform_from = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->numeric_exponent_coefficient = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_normal_dist = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numeric_normal_expectation = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_normal_dispersion = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->emperical = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_kde_window_width))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_experiments_amount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_hist_columns))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hisrogram))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_uniform_to))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_uniform_from))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_exponent_coefficient))->BeginInit();
			this->panel_normal_dist->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_normal_expectation))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_normal_dispersion))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emperical))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->numeric_kde_window_width);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->numeric_experiments_amount);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->numeric_hist_columns);
			this->panel1->Controls->Add(this->checkbox_chances);
			this->panel1->Controls->Add(this->hisrogram);
			this->panel1->Location = System::Drawing::Point(10, 187);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(526, 338);
			this->panel1->TabIndex = 0;
			// 
			// numeric_kde_window_width
			// 
			this->numeric_kde_window_width->Location = System::Drawing::Point(212, 311);
			this->numeric_kde_window_width->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numeric_kde_window_width->Name = L"numeric_kde_window_width";
			this->numeric_kde_window_width->Size = System::Drawing::Size(51, 20);
			this->numeric_kde_window_width->TabIndex = 7;
			this->numeric_kde_window_width->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(130, 314);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"kde width: 10 /";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(269, 314);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"experiments:";
			// 
			// numeric_experiments_amount
			// 
			this->numeric_experiments_amount->Location = System::Drawing::Point(337, 311);
			this->numeric_experiments_amount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numeric_experiments_amount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numeric_experiments_amount->Name = L"numeric_experiments_amount";
			this->numeric_experiments_amount->Size = System::Drawing::Size(65, 20);
			this->numeric_experiments_amount->TabIndex = 4;
			this->numeric_experiments_amount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(409, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"columns:";
			// 
			// numeric_hist_columns
			// 
			this->numeric_hist_columns->Location = System::Drawing::Point(461, 311);
			this->numeric_hist_columns->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numeric_hist_columns->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numeric_hist_columns->Name = L"numeric_hist_columns";
			this->numeric_hist_columns->Size = System::Drawing::Size(60, 20);
			this->numeric_hist_columns->TabIndex = 2;
			this->numeric_hist_columns->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numeric_hist_columns->ValueChanged += gcnew System::EventHandler(this, &MyForm::numeric_hist_columns_ValueChanged);
			// 
			// checkbox_chances
			// 
			this->checkbox_chances->AutoSize = true;
			this->checkbox_chances->Checked = true;
			this->checkbox_chances->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkbox_chances->Location = System::Drawing::Point(4, 313);
			this->checkbox_chances->Name = L"checkbox_chances";
			this->checkbox_chances->Size = System::Drawing::Size(67, 17);
			this->checkbox_chances->TabIndex = 1;
			this->checkbox_chances->Text = L"chances";
			this->checkbox_chances->UseVisualStyleBackColor = true;
			// 
			// hisrogram
			// 
			this->hisrogram->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->hisrogram->BackColor = System::Drawing::Color::Transparent;
			this->hisrogram->BackImageTransparentColor = System::Drawing::SystemColors::Window;
			this->hisrogram->BackSecondaryColor = System::Drawing::Color::Gray;
			this->hisrogram->BorderlineColor = System::Drawing::Color::DimGray;
			this->hisrogram->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->hisrogram->BorderSkin->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea1->Name = L"ChartArea1";
			this->hisrogram->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->hisrogram->Legends->Add(legend1);
			this->hisrogram->Location = System::Drawing::Point(3, 3);
			this->hisrogram->Name = L"hisrogram";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"histogram";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->MarkerColor = System::Drawing::Color::White;
			series2->Name = L"true func";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Legend = L"Legend1";
			series3->Name = L"appox func";
			this->hisrogram->Series->Add(series1);
			this->hisrogram->Series->Add(series2);
			this->hisrogram->Series->Add(series3);
			this->hisrogram->Size = System::Drawing::Size(518, 303);
			this->hisrogram->TabIndex = 0;
			this->hisrogram->Text = L"chart1";
			// 
			// button_uniform_dist
			// 
			this->button_uniform_dist->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_uniform_dist->Location = System::Drawing::Point(3, 104);
			this->button_uniform_dist->Name = L"button_uniform_dist";
			this->button_uniform_dist->Size = System::Drawing::Size(126, 23);
			this->button_uniform_dist->TabIndex = 3;
			this->button_uniform_dist->Text = L"сгенерировать";
			this->button_uniform_dist->UseVisualStyleBackColor = true;
			this->button_uniform_dist->Click += gcnew System::EventHandler(this, &MyForm::button_uniform_dist_Click);
			// 
			// button_exponent_dist
			// 
			this->button_exponent_dist->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_exponent_dist->Location = System::Drawing::Point(3, 104);
			this->button_exponent_dist->Name = L"button_exponent_dist";
			this->button_exponent_dist->Size = System::Drawing::Size(126, 23);
			this->button_exponent_dist->TabIndex = 2;
			this->button_exponent_dist->Text = L"сгенерировать";
			this->button_exponent_dist->UseVisualStyleBackColor = true;
			this->button_exponent_dist->Click += gcnew System::EventHandler(this, &MyForm::button_exponent_dist_Click);
			// 
			// button_normal_dist
			// 
			this->button_normal_dist->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_normal_dist->Location = System::Drawing::Point(3, 104);
			this->button_normal_dist->Name = L"button_normal_dist";
			this->button_normal_dist->Size = System::Drawing::Size(126, 23);
			this->button_normal_dist->TabIndex = 1;
			this->button_normal_dist->Text = L"сгенерировать";
			this->button_normal_dist->UseVisualStyleBackColor = true;
			this->button_normal_dist->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->checkbox_debug);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->checkbox_autoclear);
			this->panel2->Controls->Add(this->listbox_DEBUG);
			this->panel2->Location = System::Drawing::Point(542, 187);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(426, 338);
			this->panel2->TabIndex = 1;
			// 
			// checkbox_debug
			// 
			this->checkbox_debug->AutoSize = true;
			this->checkbox_debug->Location = System::Drawing::Point(127, 313);
			this->checkbox_debug->Name = L"checkbox_debug";
			this->checkbox_debug->Size = System::Drawing::Size(56, 17);
			this->checkbox_debug->TabIndex = 5;
			this->checkbox_debug->Text = L"debug";
			this->checkbox_debug->UseVisualStyleBackColor = true;
			this->checkbox_debug->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbox_debug_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// checkbox_autoclear
			// 
			this->checkbox_autoclear->AutoSize = true;
			this->checkbox_autoclear->Checked = true;
			this->checkbox_autoclear->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkbox_autoclear->Location = System::Drawing::Point(51, 313);
			this->checkbox_autoclear->Name = L"checkbox_autoclear";
			this->checkbox_autoclear->Size = System::Drawing::Size(70, 17);
			this->checkbox_autoclear->TabIndex = 3;
			this->checkbox_autoclear->Text = L"autoclear";
			this->checkbox_autoclear->UseVisualStyleBackColor = true;
			this->checkbox_autoclear->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbox_autoclear_CheckedChanged);
			// 
			// listbox_DEBUG
			// 
			this->listbox_DEBUG->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listbox_DEBUG->BackColor = System::Drawing::SystemColors::Highlight;
			this->listbox_DEBUG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listbox_DEBUG->ForeColor = System::Drawing::SystemColors::Window;
			this->listbox_DEBUG->FormattingEnabled = true;
			this->listbox_DEBUG->HorizontalScrollbar = true;
			this->listbox_DEBUG->Location = System::Drawing::Point(4, 4);
			this->listbox_DEBUG->Name = L"listbox_DEBUG";
			this->listbox_DEBUG->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listbox_DEBUG->Size = System::Drawing::Size(416, 301);
			this->listbox_DEBUG->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel_normal_dist);
			this->panel3->Location = System::Drawing::Point(542, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(426, 169);
			this->panel3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(1, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"распределения и их параметры";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->numeric_uniform_to);
			this->panel5->Controls->Add(this->numeric_uniform_from);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->button_uniform_dist);
			this->panel5->Location = System::Drawing::Point(284, 30);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(134, 132);
			this->panel5->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(2, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"до:";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(2, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"от:";
			// 
			// numeric_uniform_to
			// 
			this->numeric_uniform_to->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->numeric_uniform_to->Location = System::Drawing::Point(3, 78);
			this->numeric_uniform_to->Name = L"numeric_uniform_to";
			this->numeric_uniform_to->Size = System::Drawing::Size(125, 20);
			this->numeric_uniform_to->TabIndex = 6;
			this->numeric_uniform_to->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numeric_uniform_from
			// 
			this->numeric_uniform_from->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->numeric_uniform_from->Location = System::Drawing::Point(3, 39);
			this->numeric_uniform_from->Name = L"numeric_uniform_from";
			this->numeric_uniform_from->Size = System::Drawing::Size(126, 20);
			this->numeric_uniform_from->TabIndex = 5;
			this->numeric_uniform_from->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, -1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"равномерное";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->numeric_exponent_coefficient);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->button_exponent_dist);
			this->panel4->Location = System::Drawing::Point(144, 30);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(134, 132);
			this->panel4->TabIndex = 1;
			// 
			// numeric_exponent_coefficient
			// 
			this->numeric_exponent_coefficient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->numeric_exponent_coefficient->Location = System::Drawing::Point(3, 39);
			this->numeric_exponent_coefficient->Name = L"numeric_exponent_coefficient";
			this->numeric_exponent_coefficient->Size = System::Drawing::Size(126, 20);
			this->numeric_exponent_coefficient->TabIndex = 5;
			this->numeric_exponent_coefficient->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"params:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"экспоненциальное";
			// 
			// panel_normal_dist
			// 
			this->panel_normal_dist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_normal_dist->Controls->Add(this->label6);
			this->panel_normal_dist->Controls->Add(this->label5);
			this->panel_normal_dist->Controls->Add(this->numeric_normal_expectation);
			this->panel_normal_dist->Controls->Add(this->numeric_normal_dispersion);
			this->panel_normal_dist->Controls->Add(this->label2);
			this->panel_normal_dist->Controls->Add(this->button_normal_dist);
			this->panel_normal_dist->Location = System::Drawing::Point(4, 30);
			this->panel_normal_dist->Name = L"panel_normal_dist";
			this->panel_normal_dist->Size = System::Drawing::Size(134, 132);
			this->panel_normal_dist->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"дисперсия:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"мат. ожидание:";
			// 
			// numeric_normal_expectation
			// 
			this->numeric_normal_expectation->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->numeric_normal_expectation->Location = System::Drawing::Point(3, 39);
			this->numeric_normal_expectation->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numeric_normal_expectation->Name = L"numeric_normal_expectation";
			this->numeric_normal_expectation->Size = System::Drawing::Size(125, 20);
			this->numeric_normal_expectation->TabIndex = 4;
			this->numeric_normal_expectation->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numeric_normal_dispersion
			// 
			this->numeric_normal_dispersion->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->numeric_normal_dispersion->Location = System::Drawing::Point(3, 78);
			this->numeric_normal_dispersion->Name = L"numeric_normal_dispersion";
			this->numeric_normal_dispersion->Size = System::Drawing::Size(126, 20);
			this->numeric_normal_dispersion->TabIndex = 3;
			this->numeric_normal_dispersion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"нормальное";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->emperical);
			this->panel6->Location = System::Drawing::Point(10, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(526, 169);
			this->panel6->TabIndex = 3;
			// 
			// emperical
			// 
			this->emperical->BorderlineColor = System::Drawing::Color::DimGray;
			this->emperical->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea2->Name = L"ChartArea1";
			this->emperical->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->emperical->Legends->Add(legend2);
			this->emperical->Location = System::Drawing::Point(4, 3);
			this->emperical->Name = L"emperical";
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"emperical";
			this->emperical->Series->Add(series4);
			this->emperical->Size = System::Drawing::Size(517, 161);
			this->emperical->TabIndex = 0;
			this->emperical->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(980, 535);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_kde_window_width))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_experiments_amount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_hist_columns))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hisrogram))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_uniform_to))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_uniform_from))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_exponent_coefficient))->EndInit();
			this->panel_normal_dist->ResumeLayout(false);
			this->panel_normal_dist->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_normal_expectation))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_normal_dispersion))->EndInit();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emperical))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// EVENTS
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_exponent_dist_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_uniform_dist_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void checkbox_autoclear_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
		private: System::Void checkbox_debug_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void numeric_hist_columns_ValueChanged(System::Object^ sender, System::EventArgs^ e);
};
}
