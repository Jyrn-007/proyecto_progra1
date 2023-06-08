#pragma once

namespace proyfereteria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formsalida
	/// </summary>
	public ref class formsalida : public System::Windows::Forms::Form
	{
	public:
		formsalida(void)
		{
			InitializeComponent();
		
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~formsalida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Nombre_del_Producto;

	private: System::Windows::Forms::ColumnHeader^ codigo_del_producto;
	private: System::Windows::Forms::ColumnHeader^ fecha;
	private: System::Windows::Forms::ColumnHeader^ Nombre_cliente;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;












	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;



	private: System::Windows::Forms::Label^ label16;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ColumnHeader^ precio_unitario;
	private: System::Windows::Forms::ColumnHeader^ sub_total;
	private: System::Windows::Forms::ColumnHeader^ total;
















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre_del_Producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->codigo_del_producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->fecha = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nombre_cliente = (gcnew System::Windows::Forms::ColumnHeader());
			this->precio_unitario = (gcnew System::Windows::Forms::ColumnHeader());
			this->sub_total = (gcnew System::Windows::Forms::ColumnHeader());
			this->total = (gcnew System::Windows::Forms::ColumnHeader());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(476, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Número del cliente";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Silver;
			this->textBox4->Location = System::Drawing::Point(632, 149);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(276, 30);
			this->textBox4->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"fecha de salida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(243, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Nit";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(297, 101);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(276, 30);
			this->textBox2->TabIndex = 9;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Nombre_del_Producto,
					this->codigo_del_producto, this->fecha, this->Nombre_cliente, this->precio_unitario, this->sub_total, this->total
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(208, 562);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1483, 288);
			this->listView1->TabIndex = 18;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Nombre_del_Producto
			// 
			this->Nombre_del_Producto->Text = L"Nombre del Producto";
			this->Nombre_del_Producto->Width = 170;
			// 
			// codigo_del_producto
			// 
			this->codigo_del_producto->Text = L"codigo del producto";
			this->codigo_del_producto->Width = 170;
			// 
			// fecha
			// 
			this->fecha->Text = L"Fecha";
			this->fecha->Width = 164;
			// 
			// Nombre_cliente
			// 
			this->Nombre_cliente->Text = L"Nombre del cliente";
			this->Nombre_cliente->Width = 160;
			// 
			// precio_unitario
			// 
			this->precio_unitario->Text = L"Precio unitario";
			this->precio_unitario->Width = 120;
			// 
			// sub_total
			// 
			this->sub_total->Text = L"sub total";
			this->sub_total->Width = 130;
			// 
			// total
			// 
			this->total->Text = L"total";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(-7, -12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(2032, 61);
			this->label5->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Silver;
			this->textBox3->Location = System::Drawing::Point(159, 145);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(276, 30);
			this->textBox3->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Encabezado de factura";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 105);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(921, 267);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Silver;
			this->textBox5->Location = System::Drawing::Point(380, 206);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(276, 30);
			this->textBox5->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(234, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 20);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Nombre del cliente";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Location = System::Drawing::Point(961, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(921, 440);
			this->groupBox2->TabIndex = 44;
			this->groupBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(452, 150);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 45);
			this->label7->TabIndex = 44;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(707, 391);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 42);
			this->button5->TabIndex = 43;
			this->button5->Text = L"consultar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(331, 22);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 20);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Detalles de compra";
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(578, 240);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 42);
			this->button6->TabIndex = 42;
			this->button6->Text = L"Borrar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(499, 102);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 20);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Cantidad";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(578, 92);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(276, 30);
			this->textBox1->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(384, 162);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 20);
			this->label12->TabIndex = 39;
			this->label12->Text = L"Total";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(44, 102);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(151, 20);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Codigo del producto";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Silver;
			this->textBox11->Location = System::Drawing::Point(201, 92);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(276, 30);
			this->textBox11->TabIndex = 34;
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(575, 391);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 42);
			this->button7->TabIndex = 33;
			this->button7->Text = L"Guardar";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(388, 220);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(145, 73);
			this->button8->TabIndex = 32;
			this->button8->Text = L"Agregar producto";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(139, 37);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 20);
			this->label16->TabIndex = 11;
			// 
			// formsalida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1890, 879);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listView1);
			this->MaximizeBox = false;
			this->Name = L"formsalida";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formsalida";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &formsalida::formsalida_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
 
	}
private: System::Void formsalida_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
