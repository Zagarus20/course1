#pragma once
#include "Struct.h"
#include <fstream>
#include <iostream>
#include <msclr\marshal.h>

using namespace std;
namespace Course1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	/// <summary>
	/// —водка дл€ MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox_Modele;
	private: System::Windows::Forms::TextBox^ textBox_Architecture;
	private: System::Windows::Forms::TextBox^ textBox_CoreFrequncy;
	private: System::Windows::Forms::TextBox^ textBox_VideoMemoryFrency;
	private: System::Windows::Forms::TextBox^ textBox_VideoMemory;
	private: System::Windows::Forms::TextBox^ textBox_MemoryBusBitsize;
	private: System::Windows::Forms::TextBox^ textBox_Energy;








	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_Modele = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Architecture = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CoreFrequncy = (gcnew System::Windows::Forms::TextBox());
			this->textBox_VideoMemoryFrency = (gcnew System::Windows::Forms::TextBox());
			this->textBox_VideoMemory = (gcnew System::Windows::Forms::TextBox());
			this->textBox_MemoryBusBitsize = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Energy = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(382, 348);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox_Modele
			// 
			this->textBox_Modele->Location = System::Drawing::Point(134, 58);
			this->textBox_Modele->Name = L"textBox_Modele";
			this->textBox_Modele->Size = System::Drawing::Size(100, 20);
			this->textBox_Modele->TabIndex = 1;
			// 
			// textBox_Architecture
			// 
			this->textBox_Architecture->Location = System::Drawing::Point(134, 84);
			this->textBox_Architecture->Name = L"textBox_Architecture";
			this->textBox_Architecture->Size = System::Drawing::Size(100, 20);
			this->textBox_Architecture->TabIndex = 2;
			// 
			// textBox_CoreFrequncy
			// 
			this->textBox_CoreFrequncy->Location = System::Drawing::Point(134, 110);
			this->textBox_CoreFrequncy->Name = L"textBox_CoreFrequncy";
			this->textBox_CoreFrequncy->Size = System::Drawing::Size(100, 20);
			this->textBox_CoreFrequncy->TabIndex = 3;
			// 
			// textBox_VideoMemoryFrency
			// 
			this->textBox_VideoMemoryFrency->Location = System::Drawing::Point(134, 136);
			this->textBox_VideoMemoryFrency->Name = L"textBox_VideoMemoryFrency";
			this->textBox_VideoMemoryFrency->Size = System::Drawing::Size(100, 20);
			this->textBox_VideoMemoryFrency->TabIndex = 4;
			// 
			// textBox_VideoMemory
			// 
			this->textBox_VideoMemory->Location = System::Drawing::Point(134, 162);
			this->textBox_VideoMemory->Name = L"textBox_VideoMemory";
			this->textBox_VideoMemory->Size = System::Drawing::Size(100, 20);
			this->textBox_VideoMemory->TabIndex = 5;
			// 
			// textBox_MemoryBusBitsize
			// 
			this->textBox_MemoryBusBitsize->Location = System::Drawing::Point(134, 188);
			this->textBox_MemoryBusBitsize->Name = L"textBox_MemoryBusBitsize";
			this->textBox_MemoryBusBitsize->Size = System::Drawing::Size(100, 20);
			this->textBox_MemoryBusBitsize->TabIndex = 6;
			// 
			// textBox_Energy
			// 
			this->textBox_Energy->Location = System::Drawing::Point(134, 214);
			this->textBox_Energy->Name = L"textBox_Energy";
			this->textBox_Energy->Size = System::Drawing::Size(100, 20);
			this->textBox_Energy->TabIndex = 7;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 383);
			this->Controls->Add(this->textBox_Energy);
			this->Controls->Add(this->textBox_MemoryBusBitsize);
			this->Controls->Add(this->textBox_VideoMemory);
			this->Controls->Add(this->textBox_VideoMemoryFrency);
			this->Controls->Add(this->textBox_CoreFrequncy);
			this->Controls->Add(this->textBox_Architecture);
			this->Controls->Add(this->textBox_Modele);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//«апис даних з textBoxt в структуру
		VideoCart videoCart;
		marshal_context^ ctx = gcnew marshal_context();
		String^ tmp;
		tmp = textBox_Modele->Text;
		strcpy_s(videoCart.Modele, ctx->marshal_as<const char*>(tmp));
		tmp = textBox_Architecture->Text;
		strcpy_s(videoCart.Architecture, ctx->marshal_as<const char*>(tmp));

		videoCart.CoreFrequncy = int::Parse(textBox_CoreFrequncy->Text);
		videoCart.VideoMemoryFrency = int::Parse(textBox_CoreFrequncy->Text);
		videoCart.VideoMemory = int::Parse(textBox_CoreFrequncy->Text);
		videoCart.MemoryBusBitsize = int::Parse(textBox_CoreFrequncy->Text);;
		videoCart.Energy = int::Parse(textBox_CoreFrequncy->Text);

	}
	};
}
