#pragma once

namespace proyfereteria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de info
	/// </summary>
	public ref class info : public System::Windows::Forms::Form
	{
	public:
		info(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(info::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(27, 296);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(564, 177);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Somos una empresa de creaci�n de sistemas de inventarios, para diferentes negocio"
				L"s\r\n";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(-4, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(246, 57);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Construinfo";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(142, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 36);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Servicios";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(438, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Contacto";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(814, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 44);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(-81, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1081, 80);
			this->label1->TabIndex = 7;
			this->label1->Text = L"\r\n";
			// 
			// info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(918, 503);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"info";
			this->Text = L"info";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
