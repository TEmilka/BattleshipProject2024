#pragma once
namespace statki_gui2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Rules : public System::Windows::Forms::Form
	{
	public:
		Rules(void)
		{
			InitializeComponent();
		}

	protected:
		~Rules()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rules::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(232, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RULES";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(371, 112);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->Click += gcnew System::EventHandler(this, &Rules::label2_Click);
			// 
			// Rules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(548, 293);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Rules";
			this->Text = L"Rules";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
