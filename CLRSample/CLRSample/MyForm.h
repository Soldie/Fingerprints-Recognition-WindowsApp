#pragma once
#include <stdlib.h>		//		rand()
#include "common.h"		//		IplImage * cv_img;
#include <msclr\marshal_cppstd.h>

#include "Preprocessing.h"
#include "Thinning.h"

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
					L"Zhang-Wang", L"Hilditch", L"Arabic Parallel", L"Efficient Parallel", L"Stentiford", L"Proposed "
			});
			this->comboBox1->Location = System::Drawing::Point(12, 131);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Choose Thinning Algorithm";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 661);
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
		image = cv::imread(String, 1);
		Bitmap ^ bm = gcnew Bitmap(image.cols, image.rows, image.step, Imaging::PixelFormat::Format24bppRgb, IntPtr(image.data));
		//pictureBox1->Left = 0;
		//pictureBox1->Top = 0;
		pictureBox1->Width = bm->Width;
		pictureBox1->Height = bm->Height;
		pictureBox1->Image = bm;
		this->AutoSize = true;
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
		image1 = cv::imread(String, 1);
		Bitmap ^ bm = gcnew Bitmap(image1.cols, image1.rows, image1.step, Imaging::PixelFormat::Format24bppRgb, IntPtr(image1.data));
		//pictureBox1->Left = 0;
		//pictureBox1->Top = 0;
		pictureBox2->Width = bm->Width;
		pictureBox2->Height = bm->Height;
		pictureBox2->Image = bm;
		this->AutoSize = true;
		//pictureBox1->ImageLocation = Path;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//PREPROCESSING
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
	cv::Size size1(image.cols * 0.5, image.rows * 0.5); //bylo /3
	resize(image, image, size1);

	/////filtracja porow odcisk wzorcowy
	PreprocesingObject.FilterPores(image);


	////RESIZE odcisk 1
	resize(image1, image1, size1);
	/////filtracja porow odcisk 1
	PreprocesingObject.FilterPores(image1);

	//zapis odcisk wzorcowy
	imwrite("preprocessing.bmp", image);

	//zapis odcisk1
	imwrite("preprocessing1.bmp", image1);

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap("preprocessing.bmp");
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;
	
	//wyswietlanie odcisk 1
	bm = gcnew Bitmap("preprocessing1.bmp");
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 System::String^ ThinningAlgorithm;
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Thinning ThinningObject;
	cv::Mat image_thinning;
	cv::Mat image_thinning1;
	image_thinning = image.clone();
	image_thinning1 = image1.clone();

	ThinningAlgorithm = comboBox1->GetItemText(comboBox1->SelectedItem);
	
	if (ThinningAlgorithm == "Zhang-Suen"){
		ThinningObject.ZhangSuenThinning(image_thinning, image_thinning);
		ThinningObject.ZhangSuenThinning(image_thinning1, image_thinning1);
	}
	if (ThinningAlgorithm == "Guo-Hall"){
		ThinningObject.GuoHallThinning(image_thinning, image_thinning);
		ThinningObject.GuoHallThinning(image_thinning1, image_thinning1);
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

	imwrite("Thinning.bmp", image_thinning);
	imwrite("Thinning1.bmp", image_thinning1);

	////wyswietlanie odcisk wzorcowy
	Bitmap ^ bm = gcnew Bitmap("Thinning.bmp");
	pictureBox1->Width = bm->Width;
	pictureBox1->Height = bm->Height;
	pictureBox1->Image = bm;
	this->AutoSize = true;

	//wyswietlanie odcisk 1
	bm = gcnew Bitmap("Thinning1.bmp");
	pictureBox2->Width = bm->Width;
	pictureBox2->Height = bm->Height;
	pictureBox2->Image = bm;
	this->AutoSize = true;

	ThinningObject.~Thinning();
	ThinningAlgorithm = "";
	image_thinning.~Mat();
	image_thinning1.~Mat();
}
};
}
