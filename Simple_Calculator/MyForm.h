#pragma once

namespace $safeprojectname$ {

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
	private: System::Windows::Forms::Label^ INPUT_LABEL;
	private: System::Windows::Forms::Label^ OUTPUT_LABEL;
	private: System::Windows::Forms::Label^ OPERATOR_LABEL;
	private: System::Windows::Forms::TextBox^ INP1;
	private: System::Windows::Forms::TextBox^ INP2;
	private: System::Windows::Forms::TextBox^ OUTPUT;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_sub;

	private: System::Windows::Forms::Button^ button_mul;

	private: System::Windows::Forms::Button^ button_div;
	private: System::Windows::Forms::Label^ NA;




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
			this->INPUT_LABEL = (gcnew System::Windows::Forms::Label());
			this->OUTPUT_LABEL = (gcnew System::Windows::Forms::Label());
			this->OPERATOR_LABEL = (gcnew System::Windows::Forms::Label());
			this->INP1 = (gcnew System::Windows::Forms::TextBox());
			this->INP2 = (gcnew System::Windows::Forms::TextBox());
			this->OUTPUT = (gcnew System::Windows::Forms::TextBox());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_sub = (gcnew System::Windows::Forms::Button());
			this->button_mul = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->NA = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// INPUT_LABEL
			// 
			this->INPUT_LABEL->AutoSize = true;
			this->INPUT_LABEL->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INPUT_LABEL->Location = System::Drawing::Point(30, 33);
			this->INPUT_LABEL->Name = L"INPUT_LABEL";
			this->INPUT_LABEL->Size = System::Drawing::Size(135, 41);
			this->INPUT_LABEL->TabIndex = 0;
			this->INPUT_LABEL->Text = L"INPUT :";
			// 
			// OUTPUT_LABEL
			// 
			this->OUTPUT_LABEL->AutoSize = true;
			this->OUTPUT_LABEL->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OUTPUT_LABEL->Location = System::Drawing::Point(30, 561);
			this->OUTPUT_LABEL->Name = L"OUTPUT_LABEL";
			this->OUTPUT_LABEL->Size = System::Drawing::Size(167, 41);
			this->OUTPUT_LABEL->TabIndex = 1;
			this->OUTPUT_LABEL->Text = L"OUTPUT :";
			// 
			// OPERATOR_LABEL
			// 
			this->OPERATOR_LABEL->AutoSize = true;
			this->OPERATOR_LABEL->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OPERATOR_LABEL->Location = System::Drawing::Point(30, 206);
			this->OPERATOR_LABEL->Name = L"OPERATOR_LABEL";
			this->OPERATOR_LABEL->Size = System::Drawing::Size(220, 41);
			this->OPERATOR_LABEL->TabIndex = 2;
			this->OPERATOR_LABEL->Text = L"OPERATOR :";
			// 
			// INP1
			// 
			this->INP1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->INP1->Font = (gcnew System::Drawing::Font(L"The Bold Font", 22.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INP1->Location = System::Drawing::Point(97, 97);
			this->INP1->Name = L"INP1";
			this->INP1->Size = System::Drawing::Size(203, 73);
			this->INP1->TabIndex = 3;
			// 
			// INP2
			// 
			this->INP2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->INP2->Font = (gcnew System::Drawing::Font(L"The Bold Font", 22.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INP2->Location = System::Drawing::Point(453, 97);
			this->INP2->Name = L"INP2";
			this->INP2->Size = System::Drawing::Size(203, 73);
			this->INP2->TabIndex = 4;
			// 
			// OUTPUT
			// 
			this->OUTPUT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OUTPUT->Font = (gcnew System::Drawing::Font(L"The Bold Font", 22.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OUTPUT->Location = System::Drawing::Point(97, 628);
			this->OUTPUT->Name = L"OUTPUT";
			this->OUTPUT->Size = System::Drawing::Size(559, 73);
			this->OUTPUT->TabIndex = 5;
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(206, 270);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(165, 123);
			this->button_add->TabIndex = 6;
			this->button_add->Text = L"+";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_sub
			// 
			this->button_sub->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sub->Location = System::Drawing::Point(392, 272);
			this->button_sub->Name = L"button_sub";
			this->button_sub->Size = System::Drawing::Size(165, 121);
			this->button_sub->TabIndex = 7;
			this->button_sub->Text = L"-";
			this->button_sub->UseVisualStyleBackColor = true;
			this->button_sub->Click += gcnew System::EventHandler(this, &MyForm::button_sub_Click);
			// 
			// button_mul
			// 
			this->button_mul->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mul->Location = System::Drawing::Point(206, 415);
			this->button_mul->Name = L"button_mul";
			this->button_mul->Size = System::Drawing::Size(165, 123);
			this->button_mul->TabIndex = 8;
			this->button_mul->Text = L"*";
			this->button_mul->UseVisualStyleBackColor = true;
			this->button_mul->Click += gcnew System::EventHandler(this, &MyForm::button_mul_Click);
			// 
			// button_div
			// 
			this->button_div->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_div->Location = System::Drawing::Point(392, 415);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(165, 123);
			this->button_div->TabIndex = 9;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = true;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_div_Click);
			// 
			// NA
			// 
			this->NA->AutoSize = true;
			this->NA->Font = (gcnew System::Drawing::Font(L"The Bold Font", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NA->Location = System::Drawing::Point(368, 114);
			this->NA->Name = L"NA";
			this->NA->Size = System::Drawing::Size(0, 41);
			this->NA->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 804);
			this->Controls->Add(this->NA);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_mul);
			this->Controls->Add(this->button_sub);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->OUTPUT);
			this->Controls->Add(this->INP2);
			this->Controls->Add(this->INP1);
			this->Controls->Add(this->OPERATOR_LABEL);
			this->Controls->Add(this->OUTPUT_LABEL);
			this->Controls->Add(this->INPUT_LABEL);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"SIMPLE_CALCULATOR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NA->Text = button_add->Text;
		double result = System::Convert::ToDouble(INP1->Text) + System::Convert::ToDouble(INP2->Text);
		OUTPUT->Text = System::Convert::ToString(result);
	}
	private: System::Void button_sub_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NA->Text = button_sub->Text;
		double result = System::Convert::ToDouble(INP1->Text) - System::Convert::ToDouble(INP2->Text);
		OUTPUT->Text = System::Convert::ToString(result);
	}
	private: System::Void button_mul_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NA->Text = button_mul->Text;
		double result = System::Convert::ToDouble(INP1->Text) * System::Convert::ToDouble(INP2->Text);
		OUTPUT->Text = System::Convert::ToString(result);
	}
	private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NA->Text = button_div->Text;
		double result = System::Convert::ToDouble(INP1->Text) / System::Convert::ToDouble(INP2->Text);
		OUTPUT->Text = System::Convert::ToString(result);
	}
};
}
