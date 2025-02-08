#pragma once
#include "Rules.h"
#include "PlayerData.h"
#include "Computer.h"
#include "GameForm.h"
#include "Person.h"
#include <cstdlib>   
#include <ctime>     
#include <random>
#include "Scores.h"

using namespace statki_gui2;

namespace CppCLRWinFormsProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(array<System::String^>^ args)
		{
			InitializeComponent();
			if (game == nullptr) {
				game = gcnew GameForm();
			}
			commandLineArgs = args;

			if (args->Length > 0 && args[0] == "blockResize")
			{
				this->MaximizeBox = false;
				this->MinimizeBox = false;
			}
			game->setComputerShip();
			game->setPersonShip();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete game;
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Panel^ Computer;
		System::Windows::Forms::Panel^ Person;
	    System::Windows::Forms::Label^ start;
	    System::Windows::Forms::Button^ rules_button;
		System::Windows::Forms::Button^ start_button;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		GameForm^ game = nullptr;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label_score;
		System::ComponentModel::Container^ components;
		array<System::String^>^ commandLineArgs;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->Computer = (gcnew System::Windows::Forms::Panel());
			this->Person = (gcnew System::Windows::Forms::Panel());
			this->start = (gcnew System::Windows::Forms::Label());
			this->rules_button = (gcnew System::Windows::Forms::Button());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label_score = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Computer
			// 
			this->Computer->Location = System::Drawing::Point(81, 242);
			this->Computer->Name = L"Computer";
			this->Computer->Size = System::Drawing::Size(350, 350);
			this->Computer->TabIndex = 0;
			this->Computer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Computer_Paint);
			this->Computer->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Computer_MouseClick);
			// 
			// Person
			// 
			this->Person->Location = System::Drawing::Point(593, 242);
			this->Person->Name = L"Person";
			this->Person->Size = System::Drawing::Size(350, 350);
			this->Person->TabIndex = 1;
			this->Person->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Person_Paint);
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->start->Location = System::Drawing::Point(355, 65);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(310, 88);
			this->start->TabIndex = 2;
			this->start->Text = L"BATTLESHIP\r\n\r\nTo open the game rules, click RULES\r\nTo start game, click START";
			this->start->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// rules_button
			// 
			this->rules_button->BackColor = System::Drawing::SystemColors::HotTrack;
			this->rules_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->rules_button->Location = System::Drawing::Point(147, 92);
			this->rules_button->Name = L"rules_button";
			this->rules_button->Size = System::Drawing::Size(120, 50);
			this->rules_button->TabIndex = 3;
			this->rules_button->Text = L"RULES";
			this->rules_button->UseVisualStyleBackColor = false;
			this->rules_button->Click += gcnew System::EventHandler(this, &Form1::rules_button_Click);
			// 
			// start_button
			// 
			this->start_button->BackColor = System::Drawing::SystemColors::HotTrack;
			this->start_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->start_button->Location = System::Drawing::Point(720, 92);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(120, 50);
			this->start_button->TabIndex = 4;
			this->start_button->Text = L"START";
			this->start_button->UseVisualStyleBackColor = false;
			this->start_button->Click += gcnew System::EventHandler(this, &Form1::start_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(684, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"YOUR BOARD";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(143, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"COMPUTER BOARD";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(303, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"y       0        1        2        3       4        5         6       7        8 "
				L"      9";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(45, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 315);
			this->label4->TabIndex = 12;
			this->label4->Text = L"x\r\n\r\n0\r\n\r\n1\r\n\r\n2\r\n\r\n3\r\n\r\n4\r\n\r\n5\r\n\r\n6\r\n\r\n7\r\n\r\n8\r\n\r\n9";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(577, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(303, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"y       0        1        2        3       4        5         6       7        8 "
				L"      9";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(557, 226);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 315);
			this->label6->TabIndex = 14;
			this->label6->Text = L"x\r\n\r\n0\r\n\r\n1\r\n\r\n2\r\n\r\n3\r\n\r\n4\r\n\r\n5\r\n\r\n6\r\n\r\n7\r\n\r\n8\r\n\r\n9";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(350, 65);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(315, 31);
			this->label7->TabIndex = 15;
			this->label7->Text = L"TIME FOR THE SHOTS!";
			this->label7->Visible = false;
			// 
			// label_score
			// 
			this->label_score->AutoSize = true;
			this->label_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_score->Location = System::Drawing::Point(20, 20);
			this->label_score->Name = L"label_score";
			this->label_score->Size = System::Drawing::Size(83, 20);
			this->label_score->TabIndex = 16;
			this->label_score->Text = L"Punkty: 0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->label_score);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->start_button);
			this->Controls->Add(this->rules_button);
			this->Controls->Add(this->start);
			this->Controls->Add(this->Person);
			this->Controls->Add(this->Computer);
			this->Name = L"Form1";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Computer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		if (game->getGameStarted()) {

			Graphics^ g = e->Graphics;

			int boardSize = 10;
			int cellSize = 30;
			for (int i = 0; i < boardSize; i++)
			{
				for (int j = 0; j < boardSize; j++)
				{
					int x = i * cellSize;
					int y = j * cellSize;

					g->DrawRectangle(Pens::Black, x, y, cellSize, cellSize);

					//if (game->getTabComputer(i, j) == 'O')
					//{
					//	SolidBrush^ brush = gcnew SolidBrush(Color::Blue); 
					//	g->FillRectangle(brush, x, y, cellSize, cellSize);
					//}
					if (game->getTabComputer(i, j) == 'T')
					{
						SolidBrush^ brush = gcnew SolidBrush(Color::Orange); 
						g->FillRectangle(brush, x, y, cellSize, cellSize);
					}
					else if (game->getTabComputer(i, j) == 'X')
					{
						SolidBrush^ brush = gcnew SolidBrush(Color::Red); 
						g->FillRectangle(brush, x, y, cellSize, cellSize);
					}
					else if (game->getTabComputer(i, j) == 'P')
					{
						SolidBrush^ brush = gcnew SolidBrush(Color::Gray); 
						g->FillRectangle(brush, x, y, cellSize, cellSize);
					}
					else{}
				}
			}
		}
	}
private: System::Void Person_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{
	if (game->getGameStarted()) {
		Graphics^ g = e->Graphics;

		int boardSize = 10;
		int cellSize = 30;

		for (int i = 0; i < boardSize; i++)
		{
			for (int j = 0; j < boardSize; j++)
			{
				int x = i * cellSize;
				int y = j * cellSize;

				g->DrawRectangle(Pens::Black, x, y, cellSize, cellSize);

				if (game->getTabPerson(i, j) == 'O')
				{
					SolidBrush^ brush = gcnew SolidBrush(Color::Blue);
					g->FillRectangle(brush, x, y, cellSize, cellSize);
				}
				else if (game->getTabPerson(i, j) == 'T')
				{
					SolidBrush^ brush = gcnew SolidBrush(Color::Orange);
					g->FillRectangle(brush, x, y, cellSize, cellSize);
				}
				else if (game->getTabPerson(i, j) == 'X')
				{
					SolidBrush^ brush = gcnew SolidBrush(Color::Red);
					g->FillRectangle(brush, x, y, cellSize, cellSize);
				}
				else if (game->getTabPerson(i, j) == 'P')
				{
					SolidBrush^ brush = gcnew SolidBrush(Color::Gray);
					g->FillRectangle(brush, x, y, cellSize, cellSize);
				}
				else {}
			}
		}
	}
}
private: System::Void start_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	rules_button->Visible = false;
	start_button->Visible = false;
	//start->Visible = false;
	this->start->Text = L"\n\nRight - click on the square where you want to shoot.";
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;

	if (game != nullptr) {
		game->setGameStartedTrue();
		Computer->Invalidate();
		Person->Invalidate();
	}
}
private: System::Void rules_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Rules^ rules = gcnew Rules();
	rules->Show();
}
private: System::Void Computer_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (game->getGameStarted())
	{
		int cellSize = 30;
		int boardSize = 10;

		int i = e->X / cellSize;
		int j = e->Y / cellSize;

		if (i >= 0 && i < boardSize && j >= 0 && j < boardSize)
		{
			if (game->ComputerShot(i, j)) {
				if (!game->ComputerFlooding()) {
					MessageBox::Show("Hit! + 4 points");
					game->setScore(4);
				}
				else{
					MessageBox::Show("Sunk! + 4 points");
					game->setScore(4);
				}
			}
			else{
				MessageBox::Show("Miss! -0.2 points");
				game->setScore(-0.2);
			}
			label_score->Text = L"Punkty: " + game->getScore();

			if (game->getComputerLoose()) {
				MessageBox::Show("You won!");
				Scores^ scores = gcnew Scores(game->getScore());
				scores->Show();
			}
			else {
				int roww = 0;
				int koll = 0;

				if (game->PersonShot(roww, koll)) {
					if (!game->PersonFlooding()) {
						MessageBox::Show("The computer hit your ship! - 0.5 points.");
						game->setScore(-0.5);
					}
					else {
						MessageBox::Show("Your ship has been sunk!");
					}
				}
				else {
					MessageBox::Show("The computer missed your ship!");
				}
				label_score->Text = L"Punkty: " + game->getScore();
				if (game->getPersonLoose()) {
					MessageBox::Show("You lost! Game over.");
					Scores^ scores = gcnew Scores(game->getScore());
					scores->Show();
				}
			}
			Computer->Invalidate();
			Person->Invalidate();
		}
	}
}
private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
