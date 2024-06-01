#pragma once
#include <cstdlib>
//#include <unistd>
namespace XtremChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Web;
	using namespace System::Net::Mail;
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
			//timer1->Start();
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

	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
			 System::Speech::Synthesis::SpeechSynthesizer speach;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label2;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(111, 448);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(485, 38);
			this->textBox2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(627, 448);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(42, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(781, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(211, 350);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gigi", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(793, 366);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 48);
			this->label1->TabIndex = 4;
			this->label1->Text = L"XtremChat";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(44, 43);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(713, 379);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(134, 77);
			this->label2->MaximumSize = System::Drawing::Size(350, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(1038, 533);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Name = L"MyForm";
			this->Text = L"Xtrem Chat";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ Input;
		Input = textBox2->Text;
		String^ value;
		//STARTUPINFO startInfo = {0};
		//PROCESS_INFORMATION processInfo = { 0 };
		if (Input->Contains("hello") || Input->Contains("hi") || Input->Contains("hey")) {
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input+"\r\nXtrem : Hello Sir\r\n";
		
			speach.SpeakAsync("Hello Sir");

		}
		else if (Input->Contains("how are you")) {
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Sir i am fine.\r\n";
			speach.SpeakAsync("Sir i am fine");

		}
		else if (Input->Contains("who")) {
			textBox2->Text = "";
			speach.SpeakAsync("Sir My name is Xtrem Chat .I am smart Chatbot .");
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Sir My name is Xtrem Chat .I am smart Chatbot .\r\n";
			

		}
		else if (Input->Contains("dumb")) {
			textBox2->Text = "";
			speach.SpeakAsync("Sir i am dumb now but in future my developer evolve my funtion and I am become smart .");
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Sir i am dumb now but in future my developer evolve my funtion and I become smart .\r\n";


		}
		else if (Input->Contains("i love you")) {
			textBox2->Text = "";
			speach.SpeakAsync("sorry i have already have boyfriend and another time you ask this question again i call my boyfriend Ahad.");
			label2->Text = "ME : \t" + Input + "\r\nXtrem :sorry i have already have boyfriend and another time you ask this question again i call my boyfriend Aahad.\r\n";


		}
		else if (Input->Contains("developer"))
		{
				textBox2->Text = "";
				label2->Text = "ME : \t" + Input + "\r\nXtrem : Sir my Developer name is Muhammad Tayyab ";
				speach.SpeakAsync("Sir my Developer name is Muhammad Tayyab ");
		}
		else if (Input->Contains("notepad")) {
			speach.SpeakAsync("open notepad successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input +"\r\nXtrem : Opening Notepad" ;
				//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
				system("notepad");
				//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);
				
			
		}
		else if (Input->Contains("youtube")) {
			speach.SpeakAsync("start open youtube successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Youtube";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("start https://www.youtube.com/");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}
		else if (Input->Contains("google")) {
			speach.SpeakAsync("Open google successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Google";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("start https://www.google.com/");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}
		else if (Input->Contains("facebook")) {
			speach.SpeakAsync("Open Facebook successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Facebook";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("start https://www.facebook.com//");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}
		else if (Input->Contains("instagram")) {
			speach.SpeakAsync("Open Instagram successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Instagram";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("start https://www.instagram.com/");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}
		else if (Input->Contains("muet") || Input->Contains("mehran")) {
			speach.SpeakAsync("Here is the Mehran University Website Which you get all information");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Mehran Website";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("start https://muet.edu.pk/");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}
		else if (Input->Contains("calculator")) {
			speach.SpeakAsync("Calculator open Successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Calculator";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("calc");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}
		
		else if (Input->Contains("wordpad")) {
			speach.SpeakAsync("Wordpad open Successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening WordPad";
			//ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOWNORMAL);
			system("write");
			//CreateProcess(TEXT("C:\\Windows\\notepad.exe"), Null, Null, Null, False, Null, Null, Null, &startInfo, &processInfo);


		}

		else if (Input->Contains("ms word")) {
			speach.SpeakAsync("Ms Word open Successfully");
			textBox2->Text = "";
			label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Ms Word";
			system("start winword");
			


		}
		else if (Input->Contains("ms excel")) {
		speach.SpeakAsync("Ms Excel open Successfully");
		textBox2->Text = "";
		label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Ms Excel";
		
		system("start excel");
	


		}
		else if (Input->Contains("ppt")) {
		speach.SpeakAsync("Ms PowerPoint open Successfully");
		textBox2->Text = "";
		label2->Text = "ME : \t" + Input + "\r\nXtrem : Opening Ms PowerPoint";

		system("start powerpnt");


		}
		
		else if (Input->Contains("time")) {
		DateTime dt = DateTime::Now;
		speach.SpeakAsync("The time is now " + dt.Now.ToLongTimeString());
		textBox2->Text = "";
		
		label2->Text = "ME : \t" + Input + "\r\nXtrem : "+dt.Now.ToLongTimeString();
		


		}
		else if (Input->Contains("day") || Input->Contains("date")) {
		DateTime da = DateTime::Now;
		speach.SpeakAsync("Today Date is " + da.Now.ToLongDateString());
		textBox2->Text = "";

		label2->Text = "ME : \t" + Input + "\r\nXtrem : " + da.Now.ToLongDateString();
		


		}
		else if (Input->Contains("close")) {
			speach.SpeakAsync("Good by sir");
			textBox2->Text = "";
			label2->Text = "ME: \t+Input+\r\nXtrem: Good by Sir";
			
			//sleep(1);
			this->Close();

		} 
		else {
			textBox2->Text = "";
			label2->Text = "Sir I can't understand this command i will try next time";
			speach.SpeakAsync("Sir I can't understand this command i will try next time");
		}
	}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
