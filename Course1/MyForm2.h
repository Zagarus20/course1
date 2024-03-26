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
	/// Сводка для MyForm2
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_NemeGame;
	private: System::Windows::Forms::TextBox^ textBox_CodGame;
	private: System::Windows::Forms::TextBox^ textBox_SettingsGame;
	private: System::Windows::Forms::TextBox^ textBox_Minimal_FPS;
	private: System::Windows::Forms::TextBox^ textBox_Average_FPS;
	private: System::Windows::Forms::TextBox^ textBox_Maximum_FPS;














	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_NemeGame = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CodGame = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SettingsGame = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Minimal_FPS = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Average_FPS = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Maximum_FPS = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox_Modele->Location = System::Drawing::Point(7, 30);
			this->textBox_Modele->Name = L"textBox_Modele";
			this->textBox_Modele->Size = System::Drawing::Size(100, 20);
			this->textBox_Modele->TabIndex = 1;
			// 
			// textBox_Architecture
			// 
			this->textBox_Architecture->Location = System::Drawing::Point(7, 56);
			this->textBox_Architecture->Name = L"textBox_Architecture";
			this->textBox_Architecture->Size = System::Drawing::Size(100, 20);
			this->textBox_Architecture->TabIndex = 2;
			// 
			// textBox_CoreFrequncy
			// 
			this->textBox_CoreFrequncy->Location = System::Drawing::Point(7, 82);
			this->textBox_CoreFrequncy->Name = L"textBox_CoreFrequncy";
			this->textBox_CoreFrequncy->Size = System::Drawing::Size(100, 20);
			this->textBox_CoreFrequncy->TabIndex = 3;
			// 
			// textBox_VideoMemoryFrency
			// 
			this->textBox_VideoMemoryFrency->Location = System::Drawing::Point(7, 108);
			this->textBox_VideoMemoryFrency->Name = L"textBox_VideoMemoryFrency";
			this->textBox_VideoMemoryFrency->Size = System::Drawing::Size(100, 20);
			this->textBox_VideoMemoryFrency->TabIndex = 4;
			// 
			// textBox_VideoMemory
			// 
			this->textBox_VideoMemory->Location = System::Drawing::Point(7, 134);
			this->textBox_VideoMemory->Name = L"textBox_VideoMemory";
			this->textBox_VideoMemory->Size = System::Drawing::Size(100, 20);
			this->textBox_VideoMemory->TabIndex = 5;
			// 
			// textBox_MemoryBusBitsize
			// 
			this->textBox_MemoryBusBitsize->Location = System::Drawing::Point(7, 160);
			this->textBox_MemoryBusBitsize->Name = L"textBox_MemoryBusBitsize";
			this->textBox_MemoryBusBitsize->Size = System::Drawing::Size(100, 20);
			this->textBox_MemoryBusBitsize->TabIndex = 6;
			// 
			// textBox_Energy
			// 
			this->textBox_Energy->Location = System::Drawing::Point(7, 186);
			this->textBox_Energy->Name = L"textBox_Energy";
			this->textBox_Energy->Size = System::Drawing::Size(100, 20);
			this->textBox_Energy->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Відеокарта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Результати в іграх";
			// 
			// textBox_NemeGame
			// 
			this->textBox_NemeGame->Location = System::Drawing::Point(134, 30);
			this->textBox_NemeGame->Name = L"textBox_NemeGame";
			this->textBox_NemeGame->Size = System::Drawing::Size(100, 20);
			this->textBox_NemeGame->TabIndex = 10;
			// 
			// textBox_CodGame
			// 
			this->textBox_CodGame->Location = System::Drawing::Point(136, 82);
			this->textBox_CodGame->Name = L"textBox_CodGame";
			this->textBox_CodGame->Size = System::Drawing::Size(100, 20);
			this->textBox_CodGame->TabIndex = 11;
			// 
			// textBox_SettingsGame
			// 
			this->textBox_SettingsGame->Location = System::Drawing::Point(134, 56);
			this->textBox_SettingsGame->Name = L"textBox_SettingsGame";
			this->textBox_SettingsGame->Size = System::Drawing::Size(100, 20);
			this->textBox_SettingsGame->TabIndex = 12;
			// 
			// textBox_Minimal_FPS
			// 
			this->textBox_Minimal_FPS->Location = System::Drawing::Point(134, 108);
			this->textBox_Minimal_FPS->Name = L"textBox_Minimal_FPS";
			this->textBox_Minimal_FPS->Size = System::Drawing::Size(100, 20);
			this->textBox_Minimal_FPS->TabIndex = 13;
			// 
			// textBox_Average_FPS
			// 
			this->textBox_Average_FPS->Location = System::Drawing::Point(134, 134);
			this->textBox_Average_FPS->Name = L"textBox_Average_FPS";
			this->textBox_Average_FPS->Size = System::Drawing::Size(100, 20);
			this->textBox_Average_FPS->TabIndex = 14;
			// 
			// textBox_Maximum_FPS
			// 
			this->textBox_Maximum_FPS->Location = System::Drawing::Point(134, 160);
			this->textBox_Maximum_FPS->Name = L"textBox_Maximum_FPS";
			this->textBox_Maximum_FPS->Size = System::Drawing::Size(100, 20);
			this->textBox_Maximum_FPS->TabIndex = 15;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 383);
			this->Controls->Add(this->textBox_Maximum_FPS);
			this->Controls->Add(this->textBox_Average_FPS);
			this->Controls->Add(this->textBox_Minimal_FPS);
			this->Controls->Add(this->textBox_SettingsGame);
			this->Controls->Add(this->textBox_CodGame);
			this->Controls->Add(this->textBox_NemeGame);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
		//Запис даних з textBoxt в структуру
		VideoCart videoCart;
		TestGame testGame;
		//Характеристи відеокарт
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
		//Тести в играх
		tmp = textBox_NemeGame->Text;
		strcpy_s(testGame.NemeGame, ctx->marshal_as<const char*>(tmp));
		tmp = textBox_SettingsGame->Text;
		strcpy_s(testGame.SettingsGame, ctx->marshal_as<const char*>(tmp));
		testGame.CodGame = int::Parse(textBox_CodGame->Text);
		testGame.Minimal_FPS = int::Parse(textBox_Minimal_FPS->Text);
		testGame.Average_FPS = int::Parse(textBox_Average_FPS->Text);
		testGame.Maximum_FPS = int::Parse(textBox_Maximum_FPS->Text);


	}
	};
}
