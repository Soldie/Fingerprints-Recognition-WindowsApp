#pragma once
#include <stdlib.h>		//		rand()
#include "common.h"		//		IplImage * cv_img;
#include <msclr\marshal_cppstd.h>

#include "Preprocessing.h"
#include "Thinning.h"
#include "Detection.h"
#include "FalseMinutiae.h"
#include "Matching.h"

namespace CLRSample {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Browse Target File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Browse Source File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(12, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Preprocessing";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(206, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(430, 675);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(642, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(430, 675);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(12, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 32);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Thinning";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Zhang-Suen", L"Guo-Hall", L"Lu-Wang", L"Kwon-Woong-Kang",
					L"Zhang-Wang", L"Hilditch", L"Arabic Parallel", L"Efficient Parallel", L"Stentiford", L"Proposed"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 131);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Choose Thinning Algorithm";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(12, 196);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 32);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Minutiae Detection";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(12, 274);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 32);
			this->button6->TabIndex = 8;
			this->button6->Text = L"False Minutiae Cleaning";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Generate Pairs", L"Generate Graph 5", L"Generate Graph 10",
					L"Delaunay Triangulation"
			});
			this->comboBox2->Location = System::Drawing::Point(12, 312);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(161, 21);
			this->comboBox2->TabIndex = 9;
			this->comboBox2->Text = L"Choose Matching Algorithm";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(12, 339);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(161, 32);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Matching";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Frame:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(77, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(77, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(202, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Target:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(642, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Source:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(12, 590);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Matched Minutiae:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(12, 387);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Target Image:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(14, 417);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Detected Ending: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(14, 447);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Detected Delta: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(14, 546);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 20);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Detected Delta: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(14, 516);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Detected Ending: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(12, 486);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 20);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Source Image:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 661);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"MyForm";
			this->Text = L"Fingerprints Recognition";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	///browse target file
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "C:\\Data";
	openFileDialog1->Filter = "bmp files (*.bmp)|*.bmp|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::String^ Path;
		Path = openFileDialog1->FileName;
		std::string standardString = msclr::interop::marshal_as< std::string >(Path);
		char znak;
		std::string String;
		for (int i = 0; i < Path->Length; i++){
			znak = Path[i];
			if (znak == '\\'){
				znak = '/';
			}
			String += znak;
		}
		image_target = cv::imread(String, 1);
		Bitmap ^ bm = gcnew Bitmap(Path);
		pictureBox1->Width = bm->Width;
		pictureBox1->Height = bm->Height;
		pictureBox1->Image = bm;
		this->AutoSize = true;
		browse1 = true;

		if (browse2 == true)
		{
			ClearAll();
			button3->Enabled = true;
		}
			
		//pictureBox1->ImageLocation = Path;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	///browse source file

	OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;

	openFileDialog2->InitialDirectory = "C:\\Data";
	openFileDialog2->Filter = "bmp files (*.bmp)|*.bmp|All files (*.*)|*.*";
	openFileDialog2->FilterIndex = 2;
	openFileDialog2->RestoreDirectory = true;

	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::String^ Path;
		Path = openFileDialog2->FileName;
		std::string standardString = msclr::interop::marshal_as< std::string >(Path);
		char znak;
		std::string String;
		for (int i = 0; i < Path->Length; i++){
			znak = Path[i];
			if (znak == '\\'){
				znak = '/';
			}
			String += znak;
		}
		image_source = cv::imread(String, 1);
		Bitmap ^ bm = gcnew Bitmap(Path);
		pictureBox2->Width = bm->Width;
		pictureBox2->Height = bm->Height;
		pictureBox2->Image = bm;
		this->AutoSize = true;
		//pictureBox1->ImageLocation = Path;
		browse2 = true;

		if (browse1 == true)
		{
			ClearAll();
			button3->Enabled = true;
		}

	}
}

		 System::String^ ThinningAlgorithm;
		 System::String^ MatchingAlgorithm;
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	//PREPROCESSING
	//klonowanie odcisk wzorcowy i odcisk1
	image = image_target.clone();
	image1 = image_source.clone();

	//resize wzorcowy
	cv::Size size(3 * image.cols, 3 * image.rows); //wczesniej bylo 6
	resize(image, image, size);
	cvtColor(image, image, CV_BGR2GRAY);

	//resize odcisk 1
	resize(image1, image1, size);
	cvtColor(image1, image1, CV_BGR2GRAY);

	//WINDOWING wzorcowy
	Preprocessing PreprocesingObject;
	PreprocesingObject.Windowing(image);

	//Windowing odiskc 1
	PreprocesingObject.Windowing(image1);

	//MEDIAN FILTER odcisk wzorcowy
	PreprocesingObject.Filter(image);
	PreprocesingObject.Filter(image);
	PreprocesingObject.Filter(image);

	//MEDIAN FILTER odcisk 1
	PreprocesingObject.Filter(image1);
	PreprocesingObject.Filter(image1);
	PreprocesingObject.Filter(image1);

	////THRESHOLD odcisk wzorcowy
	adaptiveThreshold(image, image, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 75, 1);

	//THRESHOLD odcisk 1
	adaptiveThreshold(image1, image1, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 75, 1);


	////RESIZE odcisk wzorcowy
	cv::Size size1(image.cols / 2, image.rows / 2); //bylo /3
	resize(image, image, size1);
	//threshold(image, image, 240, 255, CV_THRESH_BINARY);
	/////filtracja porow odcisk wzorcowy
	PreprocesingObject.FilterPores(image);


	////RESIZE odcisk 1
	resize(image1, image1, size1);
	//threshold(image1, image1, 240, 255, CV_THRESH_BINARY);
	//threshold(image1, image1, 240, 255, CV_THRESH_BINARY);
	//threshold(image1, image1, 240, 255, CV_THRESH_BINARY);
	//threshold(image1, image1, 240, 255, CV_THRESH_BINARY);
	/////filtracja porow odcisk 1
	PreprocesingObject.FilterPores(image1);

	//zapis odcisk wzorcowy
	imwrite("Program/Preprocessing.bmp", image);

	//zapis odcisk1
	imwrite("Program/Preprocessing1.bmp", image1);

	auto img = System::Drawing::Image::FromFile("Program\\Preprocessing.bmp");
	auto img1 = System::Drawing::Image::FromFile("Program\\Preprocessing1.bmp");

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap(img);
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;
	
	//wyswietlanie odcisk 1
	bm = gcnew Bitmap(img1);
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

	delete img;
	delete img1;

	ThinningAlgorithm = comboBox1->Text;

	Preproc = true;
	if (ThinningAlgorithm != "Choose Thinning Algorithm")
		button4->Enabled = true;

}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Preproc == true){
		button4->Enabled = true;
	}
}
		 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//THINNING
	Thinning ThinningObject;
	image_thinning = image.clone();
	image_thinning1 = image1.clone();

	ThinningAlgorithm = comboBox1->GetItemText(comboBox1->SelectedItem);
	
	if (ThinningAlgorithm == "Zhang-Suen"){
		ThinningObject.ZhangSuenThinning(image, image_thinning);
		ThinningObject.ZhangSuenThinning(image1, image_thinning1);
	}
	if (ThinningAlgorithm == "Guo-Hall"){
		ThinningObject.GuoHallThinning(image, image_thinning);
		ThinningObject.GuoHallThinning(image1, image_thinning1);
		//ThinningObject.Negative(image_thinning);
	}
	if (ThinningAlgorithm == "Lu-Wang"){
		ThinningObject.LuWangThinning(image_thinning, image_thinning);
		ThinningObject.LuWangThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Kwon-Woong-Kang"){
		ThinningObject.KwonWoongKangThinning(image_thinning, image_thinning);
		ThinningObject.KwonWoongKangThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Zhang-Wang"){
		ThinningObject.ZhangWangThinning(image_thinning, image_thinning);
		ThinningObject.ZhangWangThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Hilditch"){
		ThinningObject.HilditchThinning(image_thinning, image_thinning);
		ThinningObject.HilditchThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Arabic Parallel"){
		ThinningObject.ArabicParallelThinning(image_thinning, image_thinning);
		ThinningObject.ArabicParallelThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Efficient Parallel"){
		ThinningObject.EfficientParallelThinning(image_thinning, image_thinning);
		ThinningObject.EfficientParallelThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Stentiford"){
		ThinningObject.StentifordThinning(image_thinning, image_thinning);
		ThinningObject.StentifordThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Proposed"){
		ThinningObject.ImprovedArabicParallelThinning(image_thinning, image_thinning);
		ThinningObject.ImprovedArabicParallelThinning(image_thinning1, image_thinning1);
	}

	imwrite("Program/Thinning.bmp", image_thinning);
	imwrite("Program/Thinning1.bmp", image_thinning1);

	auto img = System::Drawing::Image::FromFile("Program\\Thinning.bmp");
	auto img1 = System::Drawing::Image::FromFile("Program\\Thinning1.bmp");

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap(img);
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;

	//wyswietlanie odcisk 1
	bm = gcnew Bitmap(img1);
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

	ThinningObject.~Thinning();
	ThinningAlgorithm = "";
	/*image_thinning.~Mat();
	image_thinning1.~Mat();*/

	delete img;
	delete img1;
	Thinn = true;
	button5->Enabled = true;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	Detection DetectionObject;

	//detekcja obraz wzorcowy
	image_Detection = image_thinning.clone();
	DetectionObject.EndingDetectionCN(image_thinning, image_Detection, EndListX, EndListY, Direction_Ending);
	//std::cout << "TARGET IMAGE - DETECTED ENDING: " << EndListX.size() << std::endl;
	label8->Text = "Detected Ending: " + EndListX.size();
	DetectionObject.DeltaDetectionCN(image_thinning, image_Detection, DeltaListX, DeltaListY, Direction_Delta);
	//std::cout << "TARGET IMAGE - DETECTED DELTA: " << DeltaListX.size() << std::endl;
	label9->Text = "Detected Delta: " + DeltaListX.size();

	//detekcja image source
	image_Detection1 = image_thinning1.clone();
	DetectionObject.EndingDetectionCN(image_thinning1, image_Detection1, EndListX1, EndListY1, Direction_Ending1);
	//std::cout << "SOURCE IMAGE - DETECTED ENDING: " << EndListX.size() << std::endl;
	label11->Text = "Detected Ending: " + EndListX1.size();
	DetectionObject.DeltaDetectionCN(image_thinning1, image_Detection1, DeltaListX1, DeltaListY1, Direction_Delta1);
	//std::cout << "SOURCE IMAGE - DETECTED DELTA: " << DeltaListX.size() << std::endl;
	label10->Text = "Detected Delta: " + DeltaListX1.size();

	//zapis
	imwrite("Program/Detection.bmp", image_Detection);
	imwrite("Program/Detection1.bmp", image_Detection1);

	auto img = System::Drawing::Image::FromFile("Program\\Detection.bmp");
	auto img1 = System::Drawing::Image::FromFile("Program\\Detection1.bmp");

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap(img);
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;

	//wyswietlanie odcisk 1
	bm = gcnew Bitmap(img1);
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

	delete img;
	delete img1;

	label2->Text = "Click on Target \n to mark frame";
	Detect = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//False minutiae cleaning
	//False minutiae cleaner - odcisk wzorcowy
	FalseMinutiae FalseMinutiaeObject;
	
	Minutiae = image_thinning.clone();
	CleanMinutiae = Minutiae.clone();
	
	FalseMinutiaeObject.EndingDetectionCleaner(EndListX, EndListY, Minutiae, OutEndListX, OutEndListY, Direction_Ending,
		OutDirection_Ending);
	FalseMinutiaeObject.DeltaDetectionCleaner(DeltaListX, DeltaListY, Minutiae, OutDeltaListX, OutDeltaListY, Direction_Delta,
		OutDirection_Delta);
	if (X0 > X1){
		int pomoc = X0;
		X0 = X1;
		X1 = pomoc;
	}
	if (Y0 > Y1){
		int pomoc = Y0;
		Y0 = Y1;
		Y1 = pomoc;
	}

	FalseMinutiaeObject.FrameMark(X0, Y0, X1, Y1, OutEndListX, OutEndListY, CleanEndListX, CleanEndListY, OutDeltaListX,
		OutDeltaListY, CleanDeltaListX, CleanDeltaListY, CleanMinutiae, OutDirection_Ending, CleanDirection_Ending, OutDirection_Delta,
		CleanDirection_Delta);
	label8->Text = "Detected Ending: " + CleanEndListX.size();
	label9->Text = "Detected Delta: " + CleanDeltaListX.size();

	//false minutiae cleaner - odcisk 1
	Minutiae1 = image_thinning1.clone();
	CleanMinutiae1 = Minutiae1.clone();
	FalseMinutiaeObject.EndingDetectionCleaner(EndListX1, EndListY1, Minutiae1, OutEndListX1, OutEndListY1, Direction_Ending1,
		OutDirection_Ending1);
	FalseMinutiaeObject.DeltaDetectionCleaner(DeltaListX1, DeltaListY1, Minutiae1, OutDeltaListX1, OutDeltaListY1, Direction_Delta1,
		OutDirection_Delta1);
	FalseMinutiaeObject.FrameMark(X0, Y0, X1, Y1, OutEndListX1, OutEndListY1, CleanEndListX1, CleanEndListY1, OutDeltaListX1,
		OutDeltaListY1, CleanDeltaListX1, CleanDeltaListY1, CleanMinutiae1, OutDirection_Ending1, CleanDirection_Ending1, OutDirection_Delta1,
		CleanDirection_Delta1);
	label11->Text = "Detected Ending: " + CleanEndListX1.size();
	label10->Text = "Detected Delta: " + CleanDeltaListX1.size();


	//zapis
	imwrite("Program/Clean_Minutiae.bmp", CleanMinutiae);
	imwrite("Program/Clean_Minutiae1.bmp", CleanMinutiae1);

	auto img = System::Drawing::Image::FromFile("Program\\Clean_Minutiae.bmp");
	auto img1 = System::Drawing::Image::FromFile("Program\\Clean_Minutiae1.bmp");

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap(img);
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;

	//wyswietlanie odcisk 1
	bm = gcnew Bitmap(img1);
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

	delete img;
	delete img1;

	FalseDetect = true;
	
	MatchingAlgorithm = comboBox2->Text;

	if (MatchingAlgorithm != "Choose Matching Algorithm")
		button7->Enabled = true;

	
}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		//Matching
		MatchingAlgorithm = comboBox2->GetItemText(comboBox2->SelectedItem);

		//konstruowanie obiektow - target image;
		for (int i = 0; i < CleanDeltaListX.size() + CleanEndListX.size(); i++){
			if (i < CleanEndListX.size()){
				Matching MatchingObject = Matching(CleanEndListX[i], CleanEndListY[i], "EndList", CleanDirection_Ending[i]);
				MinutiaeList.push_back(MatchingObject);
				MatchingObject.~Matching();
			}
			if (i >= CleanEndListX.size()){
				Matching MatchingObject = Matching(CleanDeltaListX[i - CleanEndListX.size()], CleanDeltaListY[i - CleanEndListX.size()],
					"DeltaList", CleanDirection_Delta[i - CleanEndListX.size()]);
				MinutiaeList.push_back(MatchingObject);
				MatchingObject.~Matching();
			}
		}

		//konstruowanie obiektow - source image
		for (int i = 0; i < CleanDeltaListX1.size() + CleanEndListX1.size(); i++){
			if (i < CleanEndListX1.size()){
				Matching MatchingObject1 = Matching(CleanEndListX1[i], CleanEndListY1[i], "EndList", CleanDirection_Ending1[i]);
				MinutiaeList1.push_back(MatchingObject1);
				MatchingObject1.~Matching();
			}
			if (i >= CleanEndListX1.size()){
				Matching MatchingObject1 = Matching(CleanDeltaListX1[i - CleanEndListX1.size()], CleanDeltaListY1[i - CleanEndListX1.size()],
					"DeltaList", CleanDirection_Delta1[i - CleanEndListX1.size()]);
				MinutiaeList1.push_back(MatchingObject1);
				MatchingObject1.~Matching();
			}
		}

		Matching MatchingObject;
		PairsImage = CleanMinutiae.clone();

		PairsImage1 = CleanMinutiae1.clone();
		std::vector<int> MatchedMinutiae;

		if (MatchingAlgorithm!="Delaunay Triangulation"){
			//similar pairs
			if (MatchingAlgorithm == "Generate Pairs"){
				MatchingObject.GeneratePairs(MinutiaeList, PairsImage, Pairs);
				imwrite("Program/Match.bmp", PairsImage);
				//std::cout << "TARGET IMAGE - GENERATED MINUTIAE PAIRS: " << Pairs.size() << std::endl;
				MatchingObject.GeneratePairs(MinutiaeList1, PairsImage1, Pairs1);
				imwrite("Program/Match1.bmp", PairsImage1);
				//std::cout << "SOURCE IMAGE - GENERATED MINUTIAE PAIRS: " << Pairs1.size() << std::endl;
			}
			//graph5
			if (MatchingAlgorithm == "Generate Graph 5"){
				MatchingObject.GenerateGraph5(MinutiaeList, PairsImage, Pairs);
				imwrite("Program/Match.bmp", PairsImage);
				//std::cout << "TARGET IMAGE - GENERATED MINUTIAE PAIRS: " << Pairs.size() << std::endl;
				MatchingObject.GenerateGraph5(MinutiaeList1, PairsImage1, Pairs1);
				imwrite("Program/Match1.bmp", PairsImage1);
				//std::cout << "SOURCE IMAGE - GENERATED MINUTIAE PAIRS: " << Pairs1.size() << std::endl;
			}

			//graph10
			if (MatchingAlgorithm == "Generate Graph 10"){
				MatchingObject.GenerateGraph10(MinutiaeList, PairsImage, Pairs);
				imwrite("Program/Match.bmp", PairsImage);
				//std::cout << "TARGET IMAGE - GENERATED MINUTIAE PAIRS: " << Pairs.size() << std::endl;
				MatchingObject.GenerateGraph10(MinutiaeList1, PairsImage1, Pairs1);
				imwrite("Program/Match1.bmp", PairsImage1);
				//std::cout << "SOURCE IMAGE - GENERATED MINUTIAE PAIRS: " << Pairs1.size() << std::endl;
			}

			bool SimilarPairsResult;
			bool ExtractTransformationResult;
			bool SuffcientMatchesResult;
			float Rotation;
			float TranslationX;
			float TranslationY;
			std::vector<Matching> MinutiaeListSource;
			MinutiaeListSource = MinutiaeList1;
			for (int i = 0; i < Pairs.size(); i++){
				for (int j = 0; j < Pairs1.size(); j++){
					///similar pairs
					MatchingObject.SimilarPairs(Pairs[i], Pairs1[j], SimilarPairsResult);
					if (SimilarPairsResult == true){
						MatchingObject.ExtractTransformationParams(Pairs[i], Pairs1[j], ExtractTransformationResult, Rotation,
							TranslationX, TranslationY);
						if (ExtractTransformationResult == true){
							MatchingObject.DoTranslation(TranslationX, TranslationY, MinutiaeListSource);
							MatchingObject.ExistSufficentMatches(MinutiaeListSource, MinutiaeList, SuffcientMatchesResult, MatchedMinutiae);
							if (SuffcientMatchesResult == true){
							}
							//restore
							MinutiaeListSource = MinutiaeList1;

						}
					}
				}
			}
	}
	
		if (MatchingAlgorithm == "Delaunay Triangulation"){
			MatchingObject.DelaunayTriangulation(MatchedMinutiae);
		}


	auto img = System::Drawing::Image::FromFile("Program\\Match.bmp");
	auto img1 = System::Drawing::Image::FromFile("Program\\Match1.bmp");

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap(img);
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;

	//wyswietlanie odcisk 1
	bm = gcnew Bitmap(img1);
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

	delete img;
	delete img1;

	label6->Text = "Matched Minutiae: "+ *std::max_element(MatchedMinutiae.begin(), MatchedMinutiae.end());
	button7->Enabled = false;

	//std::cout << "MATCHED MINUTIAE :" << *std::max_element(MatchedMinutiae.begin(), MatchedMinutiae.end()) << std::endl;
}
//private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
//	/*MouseEventArgs me = (MouseEventArgs)e;
//	System::Drawing::Point coordinates = me.Location;*/
//	//MousePosition.X;
//	//MousePosition.Y;
//
//	//label2->Text = "X: " + MousePosition.X + " Y: " + MousePosition.Y;
//
//	
//}
int licznik = 0;

private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (Detect == true){
		if (licznik == 0){
			//X0 = e->X;
			//Y0 = e->Y;
			X0 = 35;
			Y0 = 149;
			licznik++;
			label2->Text = "X: " + X0 + " Y: " + Y0;
		}
		else if (licznik == 1){
			//X1 = e->X;
			//Y1 = e->Y;
			X1 = 299;
			Y1 = 629;
			licznik = 0;
			label3->Text = "X: " + X1 + " Y: " + Y1;
			button6->Enabled = true;
		}
	}
	
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (FalseDetect == true){
		button7->Enabled = true;
	}
}

void ClearAll(){
	Preproc = false;
	Thinn = false;
	Detect = false;
	FalseDetect = false;
	Match = false;


	DeltaListX.clear();
	DeltaListY.clear();
	EndListX.clear();
	EndListY.clear();
	Direction_Ending.clear();
	Direction_Delta.clear();

	DeltaListX1.clear();
	DeltaListY1.clear();
	EndListX1.clear();
	EndListY1.clear();
	Direction_Ending1.clear();
	Direction_Delta1.clear();

	OutEndListX.clear();
	OutEndListY.clear();
	OutDeltaListX.clear();
	OutDeltaListY.clear();
	CleanEndListX.clear();
	CleanEndListY.clear();
	CleanDeltaListX.clear();
	CleanDeltaListY.clear();
	OutDirection_Ending.clear();
	CleanDirection_Ending.clear();
	OutDirection_Delta.clear();
	CleanDirection_Delta.clear();

	OutEndListX1.clear();
	OutEndListY1.clear();
	OutDeltaListX1.clear();
	OutDeltaListY1.clear();
	CleanEndListX1.clear();
	CleanEndListY1.clear();
	CleanDeltaListX1.clear();
	CleanDeltaListY1.clear();
	OutDirection_Ending1.clear();
	CleanDirection_Ending1.clear();
	OutDirection_Delta1.clear();
	CleanDirection_Delta1.clear();

	MinutiaeList.clear();
	MinutiaeList1.clear();
	Pairs.clear();
	Pairs1.clear();

	label2->Text = "";
	label3->Text = "";
	label8->Text = "Detected Ending: ";
	label9->Text = "Detected Delta: ";
	label10->Text = "Detected Delta: ";
	label11->Text = "Detected Ending: ";
	label6->Text = "Matched Minutiae: ";
	}
};
}
