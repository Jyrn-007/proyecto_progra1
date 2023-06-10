#pragma once
#include "conexion.h"
#include<string>


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
	private: System::Windows::Forms::TextBox^ Num_cliente;
	protected:

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Nit_cliente;
	private: System::Windows::Forms::ListView^ Listado;






	private: System::Windows::Forms::ColumnHeader^ Nombre_del_Producto;

	private: System::Windows::Forms::ColumnHeader^ codigo_del_producto;
	private: System::Windows::Forms::ColumnHeader^ fecha;
	private: System::Windows::Forms::ColumnHeader^ Nombre_cliente;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Fech_factura;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;












	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Consultar_detalles;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ ButtonBorrarProducto;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Cantidad_Producto;


	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ Guardar_fac;


	private: System::Windows::Forms::Button^ ButtonAgregarProducto;




	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Nom_cliente;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Total_final;

	private: System::Windows::Forms::ColumnHeader^ precio_unitario;
	private: System::Windows::Forms::ColumnHeader^ cantidad;


	private: System::Windows::Forms::ComboBox^ ListCodProuct;
	private: System::Windows::Forms::Button^ Borrar_Enca;
private: System::Windows::Forms::Button^ AgregarCliente;

private: System::Windows::Forms::ColumnHeader^ sub_total;




















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
			this->Num_cliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Nit_cliente = (gcnew System::Windows::Forms::TextBox());
			this->Listado = (gcnew System::Windows::Forms::ListView());
			this->Nombre_del_Producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->codigo_del_producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->fecha = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nombre_cliente = (gcnew System::Windows::Forms::ColumnHeader());
			this->precio_unitario = (gcnew System::Windows::Forms::ColumnHeader());
			this->cantidad = (gcnew System::Windows::Forms::ColumnHeader());
			this->sub_total = (gcnew System::Windows::Forms::ColumnHeader());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Fech_factura = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Nom_cliente = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Borrar_Enca = (gcnew System::Windows::Forms::Button());
			this->AgregarCliente = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ListCodProuct = (gcnew System::Windows::Forms::ComboBox());
			this->Total_final = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ButtonBorrarProducto = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Cantidad_Producto = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ButtonAgregarProducto = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Consultar_detalles = (gcnew System::Windows::Forms::Button());
			this->Guardar_fac = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(317, 101);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Número del cliente";
			// 
			// Num_cliente
			// 
			this->Num_cliente->BackColor = System::Drawing::Color::Silver;
			this->Num_cliente->Location = System::Drawing::Point(421, 97);
			this->Num_cliente->Margin = System::Windows::Forms::Padding(2);
			this->Num_cliente->Multiline = true;
			this->Num_cliente->Name = L"Num_cliente";
			this->Num_cliente->Size = System::Drawing::Size(185, 21);
			this->Num_cliente->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 99);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"fecha de salida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(162, 68);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Nit";
			// 
			// Nit_cliente
			// 
			this->Nit_cliente->BackColor = System::Drawing::Color::Silver;
			this->Nit_cliente->Location = System::Drawing::Point(198, 66);
			this->Nit_cliente->Margin = System::Windows::Forms::Padding(2);
			this->Nit_cliente->Multiline = true;
			this->Nit_cliente->Name = L"Nit_cliente";
			this->Nit_cliente->Size = System::Drawing::Size(185, 21);
			this->Nit_cliente->TabIndex = 9;
			// 
			// Listado
			// 
			this->Listado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Nombre_del_Producto,
					this->codigo_del_producto, this->fecha, this->Nombre_cliente, this->precio_unitario, this->cantidad, this->sub_total
			});
			this->Listado->HideSelection = false;
			this->Listado->Location = System::Drawing::Point(139, 365);
			this->Listado->Margin = System::Windows::Forms::Padding(2);
			this->Listado->Name = L"Listado";
			this->Listado->Size = System::Drawing::Size(994, 189);
			this->Listado->TabIndex = 18;
			this->Listado->UseCompatibleStateImageBehavior = false;
			this->Listado->View = System::Windows::Forms::View::Details;
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
			this->precio_unitario->Width = 100;
			// 
			// cantidad
			// 
			this->cantidad->Text = L"cantidad";
			this->cantidad->Width = 130;
			// 
			// sub_total
			// 
			this->sub_total->Text = L"Sub total";
			this->sub_total->Width = 90;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(-5, -8);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1355, 40);
			this->label5->TabIndex = 19;
			// 
			// Fech_factura
			// 
			this->Fech_factura->BackColor = System::Drawing::Color::Silver;
			this->Fech_factura->Location = System::Drawing::Point(106, 94);
			this->Fech_factura->Margin = System::Windows::Forms::Padding(2);
			this->Fech_factura->Multiline = true;
			this->Fech_factura->Name = L"Fech_factura";
			this->Fech_factura->Size = System::Drawing::Size(185, 21);
			this->Fech_factura->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(265, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Encabezado de factura";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox1->Controls->Add(this->Nom_cliente);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Fech_factura);
			this->groupBox1->Controls->Add(this->Nit_cliente);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Num_cliente);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->Borrar_Enca);
			this->groupBox1->Controls->Add(this->AgregarCliente);
			this->groupBox1->Location = System::Drawing::Point(8, 68);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(614, 184);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// Nom_cliente
			// 
			this->Nom_cliente->BackColor = System::Drawing::Color::Silver;
			this->Nom_cliente->Location = System::Drawing::Point(253, 134);
			this->Nom_cliente->Margin = System::Windows::Forms::Padding(2);
			this->Nom_cliente->Multiline = true;
			this->Nom_cliente->Name = L"Nom_cliente";
			this->Nom_cliente->Size = System::Drawing::Size(185, 21);
			this->Nom_cliente->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(156, 136);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Nombre del cliente";
			// 
			// Borrar_Enca
			// 
			this->Borrar_Enca->AutoSize = true;
			this->Borrar_Enca->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Borrar_Enca->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Borrar_Enca->Location = System::Drawing::Point(505, 12);
			this->Borrar_Enca->Margin = System::Windows::Forms::Padding(2);
			this->Borrar_Enca->Name = L"Borrar_Enca";
			this->Borrar_Enca->Size = System::Drawing::Size(101, 47);
			this->Borrar_Enca->TabIndex = 32;
			this->Borrar_Enca->Text = L"Modificar Datos";
			this->Borrar_Enca->UseVisualStyleBackColor = true;
			this->Borrar_Enca->Click += gcnew System::EventHandler(this, &formsalida::Borrar_Enca_Click);
			// 
			// AgregarCliente
			// 
			this->AgregarCliente->AutoSize = true;
			this->AgregarCliente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->AgregarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AgregarCliente->Location = System::Drawing::Point(400, 12);
			this->AgregarCliente->Margin = System::Windows::Forms::Padding(2);
			this->AgregarCliente->Name = L"AgregarCliente";
			this->AgregarCliente->Size = System::Drawing::Size(101, 47);
			this->AgregarCliente->TabIndex = 32;
			this->AgregarCliente->Text = L"Agregar Cliente";
			this->AgregarCliente->UseVisualStyleBackColor = true;
			this->AgregarCliente->Click += gcnew System::EventHandler(this, &formsalida::Guardar_Enca_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox2->Controls->Add(this->ListCodProuct);
			this->groupBox2->Controls->Add(this->Total_final);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->ButtonBorrarProducto);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->Cantidad_Producto);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->ButtonAgregarProducto);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Location = System::Drawing::Point(641, 34);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(614, 208);
			this->groupBox2->TabIndex = 44;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &formsalida::groupBox2_Enter);
			// 
			// ListCodProuct
			// 
			this->ListCodProuct->FormattingEnabled = true;
			this->ListCodProuct->Location = System::Drawing::Point(139, 63);
			this->ListCodProuct->Name = L"ListCodProuct";
			this->ListCodProuct->Size = System::Drawing::Size(121, 21);
			this->ListCodProuct->TabIndex = 45;
			this->ListCodProuct->SelectedIndexChanged += gcnew System::EventHandler(this, &formsalida::ListCodProuct_SelectedIndexChanged);
			// 
			// Total_final
			// 
			this->Total_final->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Total_final->Location = System::Drawing::Point(301, 98);
			this->Total_final->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Total_final->Name = L"Total_final";
			this->Total_final->Size = System::Drawing::Size(93, 29);
			this->Total_final->TabIndex = 44;
			this->Total_final->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(221, 14);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Detalles de compra";
			// 
			// ButtonBorrarProducto
			// 
			this->ButtonBorrarProducto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ButtonBorrarProducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonBorrarProducto->Location = System::Drawing::Point(385, 156);
			this->ButtonBorrarProducto->Margin = System::Windows::Forms::Padding(2);
			this->ButtonBorrarProducto->Name = L"ButtonBorrarProducto";
			this->ButtonBorrarProducto->Size = System::Drawing::Size(75, 27);
			this->ButtonBorrarProducto->TabIndex = 42;
			this->ButtonBorrarProducto->Text = L"Borrar";
			this->ButtonBorrarProducto->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(333, 66);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Cantidad";
			// 
			// Cantidad_Producto
			// 
			this->Cantidad_Producto->BackColor = System::Drawing::Color::Silver;
			this->Cantidad_Producto->Location = System::Drawing::Point(385, 60);
			this->Cantidad_Producto->Margin = System::Windows::Forms::Padding(2);
			this->Cantidad_Producto->Multiline = true;
			this->Cantidad_Producto->Name = L"Cantidad_Producto";
			this->Cantidad_Producto->Size = System::Drawing::Size(185, 21);
			this->Cantidad_Producto->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(256, 105);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 39;
			this->label12->Text = L"Total";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(29, 66);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(102, 13);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Codigo del producto";
			// 
			// ButtonAgregarProducto
			// 
			this->ButtonAgregarProducto->AutoSize = true;
			this->ButtonAgregarProducto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ButtonAgregarProducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonAgregarProducto->Location = System::Drawing::Point(259, 143);
			this->ButtonAgregarProducto->Margin = System::Windows::Forms::Padding(2);
			this->ButtonAgregarProducto->Name = L"ButtonAgregarProducto";
			this->ButtonAgregarProducto->Size = System::Drawing::Size(101, 47);
			this->ButtonAgregarProducto->TabIndex = 32;
			this->ButtonAgregarProducto->Text = L"Agregar producto";
			this->ButtonAgregarProducto->UseVisualStyleBackColor = true;
			this->ButtonAgregarProducto->Click += gcnew System::EventHandler(this, &formsalida::ButtonAgregarProducto_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(93, 24);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 11;
			// 
			// Consultar_detalles
			// 
			this->Consultar_detalles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Consultar_detalles->Location = System::Drawing::Point(641, 292);
			this->Consultar_detalles->Margin = System::Windows::Forms::Padding(2);
			this->Consultar_detalles->Name = L"Consultar_detalles";
			this->Consultar_detalles->Size = System::Drawing::Size(75, 27);
			this->Consultar_detalles->TabIndex = 43;
			this->Consultar_detalles->Text = L"consultar";
			this->Consultar_detalles->UseVisualStyleBackColor = true;
			// 
			// Guardar_fac
			// 
			this->Guardar_fac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Guardar_fac->Location = System::Drawing::Point(513, 292);
			this->Guardar_fac->Margin = System::Windows::Forms::Padding(2);
			this->Guardar_fac->Name = L"Guardar_fac";
			this->Guardar_fac->Size = System::Drawing::Size(75, 27);
			this->Guardar_fac->TabIndex = 33;
			this->Guardar_fac->Text = L"Guardar";
			this->Guardar_fac->UseVisualStyleBackColor = true;
			// 
			// formsalida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Consultar_detalles);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Listado);
			this->Controls->Add(this->Guardar_fac);
			this->Margin = System::Windows::Forms::Padding(2);
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
private: System::Void ListCodProuct_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	String^ columna = "COD_PRODUCTO";
	String^ tabla = "PRODUCTOS";
	conexion cldatos;
	cldatos.FormarListas(
		columna,
		tabla,
		ListCodProuct
	);
}
private: System::Void Guardar_Enca_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Nit = Nit_cliente->Text;
	String^ fecha = Fech_factura->Text;
	String^ Num = Num_cliente->Text;
	String^ Nombre = Nom_cliente->Text;
	float Total = 0.00;
	Nit_cliente->Enabled= false;
	Fech_factura->Enabled= false;
	Num_cliente->Enabled = false;
	Nom_cliente->Enabled = false;

	conexion cldatos;
	cldatos.AgregarCliente(Nombre, Num, fecha, Nit, Total);

	MessageBox::Show("Cliente Agregado");

}
	private: System::Void Borrar_Enca_Click(System::Object^ sender, System::EventArgs^ e) {
		Nit_cliente->Text = "";
		Fech_factura->Text = "";
		Num_cliente->Text = "";
		Nom_cliente->Text = "";

		Nit_cliente->Enabled = true;
		Fech_factura->Enabled =true;
		Num_cliente->Enabled = true;
		Nom_cliente->Enabled = true;
}



private: System::Void ButtonAgregarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	conexion cldatos;
	float CantidadDeProducto = Convert::ToSingle(Cantidad_Producto->Text->ToString());
	float PrecioVentaProducto = cldatos.ObtenerPrecio(ListCodProuct->Text->ToString());

	float Subtotal = CantidadDeProducto * PrecioVentaProducto;


	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

