#pragma once
//#include <iostream>
//#include <cmath>
//#include <string>
using namespace std;
namespace nagruzka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ _zag;
	protected:
	private: System::Windows::Forms::Label^ label_res;
	private: System::Windows::Forms::Label^ label_k;
	private: System::Windows::Forms::TextBox^ textBox_k;

	private: System::Windows::Forms::Label^ label_p;
	private: System::Windows::Forms::TextBox^ textBox_p;
	private: System::Windows::Forms::Label^ label_Kf;
	private: System::Windows::Forms::TextBox^ textBox_KF;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_help;




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
			this->_zag = (gcnew System::Windows::Forms::Label());
			this->label_res = (gcnew System::Windows::Forms::Label());
			this->label_k = (gcnew System::Windows::Forms::Label());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->label_p = (gcnew System::Windows::Forms::Label());
			this->textBox_p = (gcnew System::Windows::Forms::TextBox());
			this->label_Kf = (gcnew System::Windows::Forms::Label());
			this->textBox_KF = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// _zag
			// 
			this->_zag->AutoSize = true;
			this->_zag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_zag->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->_zag->Location = System::Drawing::Point(12, 9);
			this->_zag->Name = L"_zag";
			this->_zag->Size = System::Drawing::Size(399, 15);
			this->_zag->TabIndex = 0;
			this->_zag->Text = L"Средняя нагрузка по мощности нагрузки по средней мощности, кВт";
			// 
			// label_res
			// 
			this->label_res->AutoSize = true;
			this->label_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_res->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_res->Location = System::Drawing::Point(417, 3);
			this->label_res->Name = L"label_res";
			this->label_res->Size = System::Drawing::Size(21, 24);
			this->label_res->TabIndex = 1;
			this->label_res->Text = L"0";
			// 
			// label_k
			// 
			this->label_k->Location = System::Drawing::Point(15, 38);
			this->label_k->Name = L"label_k";
			this->label_k->Size = System::Drawing::Size(224, 39);
			this->label_k->TabIndex = 2;
			this->label_k->Text = L"Среднее значение коэффициента использования электроприемника (ед.), через пробел";
			// 
			// textBox_k
			// 
			this->textBox_k->Location = System::Drawing::Point(236, 57);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(294, 20);
			this->textBox_k->TabIndex = 3;
			this->textBox_k->Text = L"1";
			// 
			// label_p
			// 
			this->label_p->Location = System::Drawing::Point(15, 80);
			this->label_p->Name = L"label_p";
			this->label_p->Size = System::Drawing::Size(221, 32);
			this->label_p->TabIndex = 4;
			this->label_p->Text = L"Номинальная мощность электроприемника (кВт), через пробел";
			// 
			// textBox_p
			// 
			this->textBox_p->Location = System::Drawing::Point(236, 91);
			this->textBox_p->Name = L"textBox_p";
			this->textBox_p->Size = System::Drawing::Size(294, 20);
			this->textBox_p->TabIndex = 5;
			this->textBox_p->Text = L"1";
			// 
			// label_Kf
			// 
			this->label_Kf->Location = System::Drawing::Point(18, 116);
			this->label_Kf->Name = L"label_Kf";
			this->label_Kf->Size = System::Drawing::Size(218, 33);
			this->label_Kf->TabIndex = 6;
			this->label_Kf->Text = L"Коэффициент формы графика нагрузки по активной мощности (1-1.5)";
			// 
			// textBox_KF
			// 
			this->textBox_KF->Location = System::Drawing::Point(236, 129);
			this->textBox_KF->Name = L"textBox_KF";
			this->textBox_KF->Size = System::Drawing::Size(58, 20);
			this->textBox_KF->TabIndex = 7;
			this->textBox_KF->Text = L"1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(236, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_help
			// 
			this->button_help->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_help->Location = System::Drawing::Point(503, 28);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(26, 23);
			this->button_help->TabIndex = 9;
			this->button_help->Text = L"\?";
			this->button_help->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->button_help->UseVisualStyleBackColor = false;
			this->button_help->Click += gcnew System::EventHandler(this, &MyForm::button_help_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 261);
			this->Controls->Add(this->button_help);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_KF);
			this->Controls->Add(this->label_Kf);
			this->Controls->Add(this->textBox_p);
			this->Controls->Add(this->label_p);
			this->Controls->Add(this->textBox_k);
			this->Controls->Add(this->label_k);
			this->Controls->Add(this->label_res);
			this->Controls->Add(this->_zag);
			this->Name = L"MyForm";
			this->Text = L"Определение расчетной нагрузки по средней мощности";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/*int c = Int32::Parse(textBox_p->Text);
		int sum = 0;
		array<String^>^ sNums = textBox_k->Text->Split(' ');
		array<int>^ nums = gcnew array<int>(c);
		for (int i = 0; i < c; i++)
			nums[i] = Int32::Parse(sNums[i]);
		for (int i = 0; i < c; i++)
			sum += nums[i];
		for each (int var in nums)
		string s = textBox_p;
		MessageBox::Show(s + "\t"); // выводит массив в окно поэлементно рабочиц код*/
		//System::String^ sng = textBox_p->Text;
		//System::String^ snd = textBox_k->Text;
		// float sng = System::Convert::ToInt32(textBox_p->Text), snd = System::Convert::ToInt32(textBox_k->Text);
		//float c = sng + snd;
		array<String^>^ sng = gcnew array<String^>(100);
		sng = textBox_p->Text->Split(' ');
		int count_p = sng->Length;
		array<String^>^ snd = gcnew array<String^>(100);
		snd = textBox_k->Text->Split(' ');
		//int count_k = snd->Length;
		float sumpr = 0;
		for (int i = 0; i < count_p; i++)
		{
			//for (int j = 0; j < count_k; j++)
			{
				sumpr=sumpr + (Convert::ToSingle(snd[i]) * Convert::ToSingle(sng[i])); // так сумма произведений ссылка задаем масситв и  с помощью Convert.Single(TextBox.Text) ей и будет присвоено значение введенное пользователем в 1 текстбокс  И потом этот массив перемножать операцией for
			}
			
			
		}
		float	kf = System::Convert::ToSingle(textBox_KF->Text);
		float itog = sumpr * kf; // средняя нагрузка	
		label_res->Text = itog.ToString();
	}	   
private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("В поля Средненее значение... и Номинальная  нагрузка...\n вносится равное количество значений через пробел\n каждому коэффициенту использования своя нагрузка\n Для практических целей с достаточной точностью можно принимать Кф = 1 - 1, 2. При этом значение уменьшается по направлению от низших ступеней СЭС к высшим\n Дробные знаки отделяются запятой", "Справка");
}
};
}
