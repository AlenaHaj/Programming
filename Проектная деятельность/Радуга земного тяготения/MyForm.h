#pragma once
#include <math.h>
#include <SFML\Graphics.hpp>
#include <Windows.h>
#include <ostream>
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Shader.hpp>



namespace Радугаземноготяготения {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(37, 52);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(370, 38);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Скорость_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(37, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(32, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Масса планеты(кг):";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(37, 146);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(370, 39);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(32, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 27);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Радиус планеты(км):";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(37, 240);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(370, 40);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(32, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(412, 27);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Высота над поверхностью планеты(м):";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(37, 338);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(370, 40);
			this->textBox4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(355, 27);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Угол, под которым тело брошено:";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(597, 52);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(298, 38);
			this->textBox5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(592, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(356, 27);
			this->label6->TabIndex = 12;
			this->label6->Text = L"1-ая космическая скорость(км/с):";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(597, 146);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(298, 39);
			this->textBox6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(592, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(353, 27);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ускорение свобод. падения(м/с²):";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(597, 240);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(298, 40);
			this->textBox7->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(592, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(232, 27);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Дальность полета(м):";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(228, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 50);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(597, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(343, 50);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Посмотерть процесс";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 514);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Радуга земного тяготения";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Скорость_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect()) {
			double M, R, h, a, g, G, V, D;
			G = 6, 67 * 10 ^ (-11);  // Гравитационная постоянная
			M = System::Convert::ToDouble(textBox1->Text);  // Масса планеты
			R = System::Convert::ToDouble(textBox2->Text);  // Радиус планеты
			h = System::Convert::ToDouble(textBox3->Text);  // Высота над поверхностью планеты
			a = System::Convert::ToDouble(textBox4->Text);  // Угол, под которым тело брошено

			R = R * 1000;
			g = G * M / pow(R, 2);  // Ускорение свободного падения
			V = (sqrt(G * M / (R + h)))/ 1000;  // 1-ая космическая
			D = (pow(V, 2) * sin(2 * a)) / (g*0,001);  // Дальность полета

			textBox5->Text = System::Convert::ToString(g);
			textBox6->Text = System::Convert::ToString(V);
			textBox7->Text = System::Convert::ToString(D);



		}
		else
			MessageBox::Show("Ошибка ввода", "Ошибка");
	}
	
	
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//	   //Функция защиты от неверного ввода
		   bool Protect() {
			   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) || (textBox4->Text->Length == 0)) { return false; }
			   for (int i = 0; i < textBox1->Text->Length; i++) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')) {}
				   else { return false; }
			   }
			   for (int i = 0; i < textBox2->Text->Length; i++) {
				   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')) {}
				   else { return false; }
			   }
			   for (int i = 0; i < textBox3->Text->Length; i++) {
				   if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == ',')) {}
				   else { return false; }
			   }
			   for (int i = 0; i < textBox4->Text->Length; i++) {
				   if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9') || (textBox4->Text[i] == ',')) {}
				   else { return false; }
			   }
			   return true;
		   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	textBox6->Text = L"";
	textBox7->Text = L"";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace sf;
	int main(); {
		RenderWindow window(VideoMode(423, 160), "Animation!");

		Texture Frames;
		Frames.loadFromFile("D:/Изображения/Гифка/0.jpg");
		Sprite man(Frames);


		int i = 0;

		while (window.isOpen())
		{
			Event event;
			while (window.pollEvent(event))
			{
				if (event.type == Event::Closed)
					window.close();
			}

			i++;

			switch (i)
			{
			case 1:
				Frames.loadFromFile("D:/Изображения/Гифка/0.jpg");
				break;
			case 2:
				Frames.loadFromFile("D:/Изображения/Гифка/1.jpg");
				break;
			case 3:
				Frames.loadFromFile("D:/Изображения/Гифка/2.jpg");
				break;
			case 4:
				Frames.loadFromFile("D:/Изображения/Гифка/3.jpg");
				break;
			case 5:
				Frames.loadFromFile("D:/Изображения/Гифка/4.jpg");
				break;
			case 6:
				Frames.loadFromFile("D:/Изображения/Гифка/5.jpg");
				break;
			case 7:
				Frames.loadFromFile("D:/Изображения/Гифка/6.jpg");
				break;
			case 8:
				Frames.loadFromFile("D:/Изображения/Гифка/7.jpg");
				break;
			case 9:
				Frames.loadFromFile("D:/Изображения/Гифка/8.jpg");
				break;
			case 10:
				Frames.loadFromFile("D:/Изображения/Гифка/9.jpg");
				break;
			case 11:
				Frames.loadFromFile("D:/Изображения/Гифка/10.jpg");
				break;
			case 12:
				Frames.loadFromFile("D:/Изображения/Гифка/11.jpg");
				break;
			case 13:
				Frames.loadFromFile("D:/Изображения/Гифка/12.jpg");
				break;
			default:
				i = 0;
				break;
			}

			Sleep(50);


			window.clear();
			window.draw(man);
			window.display();
		}

		return ;
	}
}
};
}
