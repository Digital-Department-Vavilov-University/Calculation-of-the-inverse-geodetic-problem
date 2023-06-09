#pragma once
#include <msclr\marshal_cppstd.h>
#include <algorithm>
# define M_PI           3.14159265358979323846  

namespace Project10 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBoxXa;
    private: System::Windows::Forms::TextBox^ textBoxYa;
    private: System::Windows::Forms::TextBox^ textBoxXb;
    private: System::Windows::Forms::TextBox^ textBoxYb;








	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ labelAlpha;
	private: System::Windows::Forms::Label^ labelRadius;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::TextBox^ textBoxDeltaX;
    private: System::Windows::Forms::TextBox^ textBoxDeltaY;
    private: System::Windows::Forms::TextBox^ textBoxTgr;
    private: System::Windows::Forms::TextBox^ textBoxRadius;
    private: System::Windows::Forms::TextBox^ textBoxAplha;
    private: System::Windows::Forms::TextBox^ textBoxAplhaAB;
    private: System::Windows::Forms::TextBox^ textBoxD1;
    private: System::Windows::Forms::TextBox^ textBoxD2;
    private: System::Windows::Forms::TextBox^ textBoxD3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::TextBox^ textBoxDmean;




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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBoxXa = (gcnew System::Windows::Forms::TextBox());
            this->textBoxYa = (gcnew System::Windows::Forms::TextBox());
            this->textBoxXb = (gcnew System::Windows::Forms::TextBox());
            this->textBoxYb = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->labelAlpha = (gcnew System::Windows::Forms::Label());
            this->labelRadius = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->textBoxDeltaX = (gcnew System::Windows::Forms::TextBox());
            this->textBoxDeltaY = (gcnew System::Windows::Forms::TextBox());
            this->textBoxTgr = (gcnew System::Windows::Forms::TextBox());
            this->textBoxRadius = (gcnew System::Windows::Forms::TextBox());
            this->textBoxAplha = (gcnew System::Windows::Forms::TextBox());
            this->textBoxAplhaAB = (gcnew System::Windows::Forms::TextBox());
            this->textBoxD1 = (gcnew System::Windows::Forms::TextBox());
            this->textBoxD2 = (gcnew System::Windows::Forms::TextBox());
            this->textBoxD3 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->textBoxDmean = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 21);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(115, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Введите данные";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 67);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(143, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Координаты точки A:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(12, 205);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(143, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Координаты точки B:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(13, 102);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(35, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"X1 = ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(12, 240);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(35, 16);
            this->label5->TabIndex = 4;
            this->label5->Text = L"X2 = ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(12, 134);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(36, 16);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Y1 = ";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(12, 272);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(36, 16);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Y2 = ";
            // 
            // textBoxXa
            // 
            this->textBoxXa->Location = System::Drawing::Point(64, 96);
            this->textBoxXa->Name = L"textBoxXa";
            this->textBoxXa->Size = System::Drawing::Size(100, 22);
            this->textBoxXa->TabIndex = 7;
            // 
            // textBoxYa
            // 
            this->textBoxYa->Location = System::Drawing::Point(64, 128);
            this->textBoxYa->Name = L"textBoxYa";
            this->textBoxYa->Size = System::Drawing::Size(100, 22);
            this->textBoxYa->TabIndex = 8;
            // 
            // textBoxXb
            // 
            this->textBoxXb->Location = System::Drawing::Point(64, 234);
            this->textBoxXb->Name = L"textBoxXb";
            this->textBoxXb->Size = System::Drawing::Size(100, 22);
            this->textBoxXb->TabIndex = 9;
            // 
            // textBoxYb
            // 
            this->textBoxYb->Location = System::Drawing::Point(64, 266);
            this->textBoxYb->Name = L"textBoxYb";
            this->textBoxYb->Size = System::Drawing::Size(100, 22);
            this->textBoxYb->TabIndex = 10;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(26, 327);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(130, 16);
            this->label8->TabIndex = 11;
            this->label8->Text = L"Необходимо найти";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(26, 362);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(158, 16);
            this->label9->TabIndex = 12;
            this->label9->Text = L"Дирекционный угол AB";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(26, 396);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(187, 16);
            this->label10->TabIndex = 13;
            this->label10->Text = L"Расстояние между точками";
            // 
            // labelAlpha
            // 
            this->labelAlpha->AutoSize = true;
            this->labelAlpha->BackColor = System::Drawing::Color::Transparent;
            this->labelAlpha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelAlpha->Location = System::Drawing::Point(362, 211);
            this->labelAlpha->Name = L"labelAlpha";
            this->labelAlpha->Size = System::Drawing::Size(40, 25);
            this->labelAlpha->TabIndex = 16;
            this->labelAlpha->Text = L"α =";
            // 
            // labelRadius
            // 
            this->labelRadius->AutoSize = true;
            this->labelRadius->BackColor = System::Drawing::Color::Transparent;
            this->labelRadius->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelRadius->Location = System::Drawing::Point(362, 173);
            this->labelRadius->Name = L"labelRadius";
            this->labelRadius->Size = System::Drawing::Size(35, 25);
            this->labelRadius->TabIndex = 17;
            this->labelRadius->Text = L"r =";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::Transparent;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(359, 135);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(40, 25);
            this->label12->TabIndex = 19;
            this->label12->Text = L"ΔX";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Transparent;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(359, 110);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(45, 25);
            this->label13->TabIndex = 20;
            this->label13->Text = L"___";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(360, 107);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(39, 25);
            this->label11->TabIndex = 21;
            this->label11->Text = L"ΔY";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Transparent;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(410, 122);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(103, 25);
            this->label14->TabIndex = 22;
            this->label14->Text = L"= tg r       =";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::Transparent;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(462, 138);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(25, 16);
            this->label15->TabIndex = 23;
            this->label15->Text = L"AB";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->Location = System::Drawing::Point(361, 66);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(136, 25);
            this->label17->TabIndex = 25;
            this->label17->Text = L"ΔY = Y  -  Y = ";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(469, 39);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(16, 16);
            this->label18->TabIndex = 26;
            this->label18->Text = L"A";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::Transparent;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(361, 18);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(139, 25);
            this->label16->TabIndex = 28;
            this->label16->Text = L"ΔX = X  -  X = ";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(429, 39);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(16, 16);
            this->label19->TabIndex = 29;
            this->label19->Text = L"B";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->Location = System::Drawing::Point(362, 249);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(70, 25);
            this->label20->TabIndex = 30;
            this->label20->Text = L"α       =";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->Location = System::Drawing::Point(377, 266);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(35, 16);
            this->label21->TabIndex = 31;
            this->label21->Text = L"A - B";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->Location = System::Drawing::Point(362, 318);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(45, 25);
            this->label22->TabIndex = 32;
            this->label22->Text = L"d = ";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::Transparent;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(412, 303);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(45, 25);
            this->label24->TabIndex = 34;
            this->label24->Text = L"___";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->BackColor = System::Drawing::Color::Transparent;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label25->Location = System::Drawing::Point(412, 328);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(59, 25);
            this->label25->TabIndex = 33;
            this->label25->Text = L"cosα ";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::Transparent;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label23->Location = System::Drawing::Point(413, 300);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(40, 25);
            this->label23->TabIndex = 35;
            this->label23->Text = L"ΔX";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->BackColor = System::Drawing::Color::Transparent;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label26->Location = System::Drawing::Point(459, 311);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(29, 25);
            this->label26->TabIndex = 36;
            this->label26->Text = L"= ";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->BackColor = System::Drawing::Color::Transparent;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->Location = System::Drawing::Point(459, 375);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(29, 25);
            this->label27->TabIndex = 41;
            this->label27->Text = L"= ";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->BackColor = System::Drawing::Color::Transparent;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(413, 364);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(39, 25);
            this->label28->TabIndex = 40;
            this->label28->Text = L"ΔY";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->BackColor = System::Drawing::Color::Transparent;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(412, 367);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(45, 25);
            this->label29->TabIndex = 39;
            this->label29->Text = L"___";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->BackColor = System::Drawing::Color::Transparent;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label30->Location = System::Drawing::Point(412, 392);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(53, 25);
            this->label30->TabIndex = 38;
            this->label30->Text = L"sinα ";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::Transparent;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label31->Location = System::Drawing::Point(362, 382);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(45, 25);
            this->label31->TabIndex = 37;
            this->label31->Text = L"d = ";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::Transparent;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label32->Location = System::Drawing::Point(362, 441);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(145, 25);
            this->label32->TabIndex = 42;
            this->label32->Text = L"d = √ΔX+ΔY = ";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->BackColor = System::Drawing::Color::Transparent;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label33->Location = System::Drawing::Point(436, 429);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(14, 16);
            this->label33->TabIndex = 43;
            this->label33->Text = L"2";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->BackColor = System::Drawing::Color::Transparent;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label34->Location = System::Drawing::Point(474, 430);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(14, 16);
            this->label34->TabIndex = 44;
            this->label34->Text = L"2";
            // 
            // textBoxDeltaX
            // 
            this->textBoxDeltaX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxDeltaX->Location = System::Drawing::Point(506, 15);
            this->textBoxDeltaX->Name = L"textBoxDeltaX";
            this->textBoxDeltaX->ReadOnly = true;
            this->textBoxDeltaX->Size = System::Drawing::Size(183, 30);
            this->textBoxDeltaX->TabIndex = 45;
            // 
            // textBoxDeltaY
            // 
            this->textBoxDeltaY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxDeltaY->Location = System::Drawing::Point(506, 63);
            this->textBoxDeltaY->Name = L"textBoxDeltaY";
            this->textBoxDeltaY->ReadOnly = true;
            this->textBoxDeltaY->Size = System::Drawing::Size(183, 30);
            this->textBoxDeltaY->TabIndex = 46;
            // 
            // textBoxTgr
            // 
            this->textBoxTgr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxTgr->Location = System::Drawing::Point(519, 124);
            this->textBoxTgr->Name = L"textBoxTgr";
            this->textBoxTgr->ReadOnly = true;
            this->textBoxTgr->Size = System::Drawing::Size(183, 30);
            this->textBoxTgr->TabIndex = 47;
            // 
            // textBoxRadius
            // 
            this->textBoxRadius->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxRadius->Location = System::Drawing::Point(403, 173);
            this->textBoxRadius->Name = L"textBoxRadius";
            this->textBoxRadius->ReadOnly = true;
            this->textBoxRadius->Size = System::Drawing::Size(183, 30);
            this->textBoxRadius->TabIndex = 48;
            // 
            // textBoxAplha
            // 
            this->textBoxAplha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxAplha->Location = System::Drawing::Point(403, 208);
            this->textBoxAplha->Name = L"textBoxAplha";
            this->textBoxAplha->ReadOnly = true;
            this->textBoxAplha->Size = System::Drawing::Size(183, 30);
            this->textBoxAplha->TabIndex = 49;
            // 
            // textBoxAplhaAB
            // 
            this->textBoxAplhaAB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxAplhaAB->Location = System::Drawing::Point(438, 246);
            this->textBoxAplhaAB->Name = L"textBoxAplhaAB";
            this->textBoxAplhaAB->ReadOnly = true;
            this->textBoxAplhaAB->Size = System::Drawing::Size(183, 30);
            this->textBoxAplhaAB->TabIndex = 50;
            // 
            // textBoxD1
            // 
            this->textBoxD1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxD1->Location = System::Drawing::Point(494, 311);
            this->textBoxD1->Name = L"textBoxD1";
            this->textBoxD1->ReadOnly = true;
            this->textBoxD1->Size = System::Drawing::Size(183, 30);
            this->textBoxD1->TabIndex = 51;
            // 
            // textBoxD2
            // 
            this->textBoxD2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxD2->Location = System::Drawing::Point(494, 372);
            this->textBoxD2->Name = L"textBoxD2";
            this->textBoxD2->ReadOnly = true;
            this->textBoxD2->Size = System::Drawing::Size(183, 30);
            this->textBoxD2->TabIndex = 52;
            // 
            // textBoxD3
            // 
            this->textBoxD3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxD3->Location = System::Drawing::Point(506, 441);
            this->textBoxD3->Name = L"textBoxD3";
            this->textBoxD3->ReadOnly = true;
            this->textBoxD3->Size = System::Drawing::Size(183, 30);
            this->textBoxD3->TabIndex = 53;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(29, 441);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(184, 79);
            this->button1->TabIndex = 54;
            this->button1->Text = L"Расчитать";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->BackColor = System::Drawing::Color::Transparent;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label35->Location = System::Drawing::Point(362, 487);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(40, 25);
            this->label35->TabIndex = 55;
            this->label35->Text = L"d =";
            // 
            // textBoxDmean
            // 
            this->textBoxDmean->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxDmean->Location = System::Drawing::Point(408, 484);
            this->textBoxDmean->Name = L"textBoxDmean";
            this->textBoxDmean->ReadOnly = true;
            this->textBoxDmean->Size = System::Drawing::Size(183, 30);
            this->textBoxDmean->TabIndex = 56;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(724, 536);
            this->Controls->Add(this->textBoxDmean);
            this->Controls->Add(this->label35);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBoxD3);
            this->Controls->Add(this->textBoxD2);
            this->Controls->Add(this->textBoxD1);
            this->Controls->Add(this->textBoxAplhaAB);
            this->Controls->Add(this->textBoxAplha);
            this->Controls->Add(this->textBoxRadius);
            this->Controls->Add(this->textBoxTgr);
            this->Controls->Add(this->textBoxDeltaY);
            this->Controls->Add(this->textBoxDeltaX);
            this->Controls->Add(this->label34);
            this->Controls->Add(this->label33);
            this->Controls->Add(this->label32);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label29);
            this->Controls->Add(this->label30);
            this->Controls->Add(this->label31);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->labelRadius);
            this->Controls->Add(this->labelAlpha);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBoxYb);
            this->Controls->Add(this->textBoxXb);
            this->Controls->Add(this->textBoxYa);
            this->Controls->Add(this->textBoxXa);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"Калькулятор обратной геодезической задачи";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
String^ ChangeSimbol(String^ textBox) {
    std::string tempStr = msclr::interop::marshal_as<std::string>(textBox);
    const char x = '.';
    const char y = ',';
    std::replace(tempStr.begin(), tempStr.end(), x, y);
    return msclr::interop::marshal_as<String^>(tempStr);
}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        
        float Xa = Convert::ToSingle(ChangeSimbol(textBoxXa->Text)),
              Xb = Convert::ToSingle(ChangeSimbol(textBoxXb->Text)),
              Ya = Convert::ToSingle(ChangeSimbol(textBoxYa->Text)),
              Yb = Convert::ToSingle(ChangeSimbol(textBoxYb->Text));
        float deltaX = Xb - Xa,
            deltaY = Yb - Ya;
        textBoxDeltaX->Text = deltaX.ToString();
        textBoxDeltaY->Text = deltaY.ToString();
        float Tgr = (abs(deltaY / deltaX));
        textBoxTgr->Text = Tgr.ToString();
        float radius = atan(Tgr) * 180 / M_PI;
        float minuts = ((int)(radius * 100)%100) * 60.0f/100.0f;
        float seconds = ((int)(minuts * 100)%100) * 60.0f/100.0f;
        textBoxRadius->Text = ((int)radius).ToString()+"° "+((int)minuts).ToString() + "' " + ((int)seconds).ToString() + "''";
        seconds = 60 - (int)seconds;
        if (seconds < 0) {
            seconds += 60;
            minuts++;
        }
        minuts = 59 - (int)minuts;
        if (minuts < 0) {
            minuts += 60;
            radius++;
        }
        radius = 179 - (int)radius;
        String^ alpha = radius.ToString() + "° " + minuts.ToString() + "' " + seconds.ToString() + "''";
        textBoxAplha->Text = alpha;
        minuts /= 60;
        seconds /= 3600;
        float alphaAB = radius + minuts + seconds;
        textBoxAplhaAB->Text = alphaAB.ToString();
        alphaAB = alphaAB * M_PI / 180;
        textBoxD1->Text = (deltaX/cos(alphaAB)).ToString();
        textBoxD2->Text = (deltaY / sin(alphaAB)).ToString();
        textBoxD3->Text = (sqrt(pow(deltaX,2)+pow(deltaY,2))).ToString();
        textBoxDmean->Text = ((Convert::ToSingle(textBoxD1->Text) +
            Convert::ToSingle(textBoxD2->Text) +
            Convert::ToSingle(textBoxD3->Text))/3).ToString();
    }
};
}
