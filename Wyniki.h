#pragma once
#include "GraczForm.h"
#include "GameForm.h"
#include <fstream>

namespace statki_gui2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Wyniki
	/// </summary>
	public ref class Wyniki : public System::Windows::Forms::Form
	{
	public:
		Wyniki(double wynik)
		{
			this->wynik = wynik;
			InitializeComponent();
			gracz = gcnew GraczForm();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Wyniki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ nick;
	private: System::Windows::Forms::Button^ nick_ok;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ accept_wybor;
	private: System::Windows::Forms::Label^ score;
	private: System::Windows::Forms::Label^ tabela_wynikow;
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		GraczForm^ gracz;
	private:
		double wynik;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nick = (gcnew System::Windows::Forms::TextBox());
			this->nick_ok = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->accept_wybor = (gcnew System::Windows::Forms::Button());
			this->score = (gcnew System::Windows::Forms::Label());
			this->tabela_wynikow = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// nick
			// 
			this->nick->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nick->Location = System::Drawing::Point(244, 78);
			this->nick->Margin = System::Windows::Forms::Padding(4);
			this->nick->Name = L"nick";
			this->nick->Size = System::Drawing::Size(148, 23);
			this->nick->TabIndex = 0;
			this->nick->Text = L"YOUR NICK";
			this->nick->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// nick_ok
			// 
			this->nick_ok->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->nick_ok->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nick_ok->Location = System::Drawing::Point(432, 72);
			this->nick_ok->Margin = System::Windows::Forms::Padding(4);
			this->nick_ok->Name = L"nick_ok";
			this->nick_ok->Size = System::Drawing::Size(112, 33);
			this->nick_ok->TabIndex = 1;
			this->nick_ok->Text = L"ACCEPT";
			this->nick_ok->UseVisualStyleBackColor = false;
			this->nick_ok->Click += gcnew System::EventHandler(this, &Wyniki::nick_ok_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(188, 44);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Wprowadz swoj nick i kliknij ACCEPT\r\n";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(202, 275);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 23);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"ENTER 0 OR 1";
			this->textBox1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(215, 197);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 48);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Chcesz zapisac swoj wynik w:\r\nINT - 0\r\nDOUBLE - 1 ";
			this->label2->Visible = false;
			// 
			// accept_wybor
			// 
			this->accept_wybor->BackColor = System::Drawing::SystemColors::ControlDark;
			this->accept_wybor->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accept_wybor->Location = System::Drawing::Point(407, 269);
			this->accept_wybor->Margin = System::Windows::Forms::Padding(4);
			this->accept_wybor->Name = L"accept_wybor";
			this->accept_wybor->Size = System::Drawing::Size(112, 33);
			this->accept_wybor->TabIndex = 5;
			this->accept_wybor->Text = L"ACCEPT";
			this->accept_wybor->UseVisualStyleBackColor = false;
			this->accept_wybor->Visible = false;
			this->accept_wybor->Click += gcnew System::EventHandler(this, &Wyniki::accept_wybor_Click);
			// 
			// score
			// 
			this->score->AutoSize = true;
			this->score->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score->Location = System::Drawing::Point(215, 137);
			this->score->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(14, 19);
			this->score->TabIndex = 6;
			this->score->Text = L".";
			// 
			// tabela_wynikow
			// 
			this->tabela_wynikow->AutoSize = true;
			this->tabela_wynikow->Location = System::Drawing::Point(189, 345);
			this->tabela_wynikow->Name = L"tabela_wynikow";
			this->tabela_wynikow->Size = System::Drawing::Size(11, 16);
			this->tabela_wynikow->TabIndex = 7;
			this->tabela_wynikow->Text = L".";
			// 
			// Wyniki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(876, 566);
			this->Controls->Add(this->tabela_wynikow);
			this->Controls->Add(this->score);
			this->Controls->Add(this->accept_wybor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nick_ok);
			this->Controls->Add(this->nick);
			this->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Wyniki";
			this->Text = L"Wyniki";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void nick_ok_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nickName = nick->Text;

	if (gracz != nullptr) {
		gracz->setNazwa(nickName);
	}

	nick->Visible = false;
	nick_ok->Visible = false;

	score->Text = "Gracz: " + gracz->getNazwa() + "Wynik: " + wynik;

	label2->Visible = true;
	textBox1->Visible = true;
	accept_wybor->Visible = true;
	
	score->Text = "Gracz: " + gracz->getNazwa() + "  Wynik: " + wynik;

}
private: System::Void accept_wybor_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Visible = false;
	try {

		double wybor = System::Convert::ToDouble(textBox1->Text);

		if (wybor >= 0 && wybor <= 1) {
			if (wybor == 0 && wybor!=1) {
				int wynikInt = static_cast<int>(wynik);
				gracz->setIntWynik(wynikInt);
				
				std::fstream plik;
				plik.open("wyniki_Int.txt", std::ios::out | std::ios::binary | std::ios::app);
				if (plik.is_open()) {
					plik.write(reinterpret_cast<char*>(&wynikInt), sizeof(wynikInt));
					plik.close();
				}
				else {
					MessageBox::Show("Unable to open the file for writing.");
				}
				std::fstream plikInt;
				plikInt.open("wyniki_Int.txt", std::ios::in | std::ios::binary);

				if (plikInt.is_open()) {

					int wynikInt;
					while (plikInt.read(reinterpret_cast<char*>(&wynikInt), sizeof(wynikInt))) {

						tabela_wynikow->Text = "Tabela wynikow: (INT)  " + wynikInt;
					}

					plikInt.close();
				}
				else {
					MessageBox::Show("Unable to open the file wyniki_Int.txt for reading.");
				}

			}
			if (wybor == 1 && wybor != 0) {
				double wynikDouble = static_cast<double>(wynik);
				std::fstream plik;
				plik.open("wyniki_Double.txt", std::ios::out | std::ios::binary | std::ios::app);
				if (plik.is_open()) {
					plik.write(reinterpret_cast<char*>(&wynikDouble), sizeof(wynikDouble));
					plik.close();
				}
				else {
					MessageBox::Show("Unable to open the file for writing.");
				}
				std::fstream plikDouble;
				plikDouble.open("wyniki_Double.txt", std::ios::in | std::ios::binary);

				if (plikDouble.is_open()) {
					// Odczytaj wartoœæ z pliku
					double wynikDouble;
					while (plikDouble.read(reinterpret_cast<char*>(&wynikDouble), sizeof(wynikDouble))) {
						tabela_wynikow->Text = "Tabela wynikow: (DOUBLE)" + wynikDouble;
					}

					plikDouble.close();
				}
				else {
					MessageBox::Show("Unable to open the file wyniki_Double.txt for reading.");
				}

			}

		}
		else {
			MessageBox::Show("Podana liczba musi byæ z przedzia³u 0-1.");
		}
	}
	catch (System::FormatException^) {
		MessageBox::Show("Podaj poprawn¹ liczbê.");
	}
	catch (System::OverflowException^) {
		MessageBox::Show("Podana liczba jest zbyt du¿a lub zbyt ma³a!");
	}
}

};
}
