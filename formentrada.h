#pragma once
#include "conexion.h"

namespace proyfereteria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formentrada
	/// </summary>
	public ref class formentrada : public System::Windows::Forms::Form
	{
	public:
		formentrada(void)
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
		~formentrada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ Listado;
	protected:

	protected:
	private: System::Windows::Forms::ColumnHeader^ Nombre_del_Producto;
	private: System::Windows::Forms::ColumnHeader^ codigo_del_producto;
	private: System::Windows::Forms::ColumnHeader^ fecha_de_entrada;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ColumnHeader^ ID_del_proveedor;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ColumnHeader^ Precio_unitario_costo;
	private: System::Windows::Forms::ColumnHeader^ precio_unitario_venta;

	private: System::Windows::Forms::ComboBox^ ID_proveedor;
	private: System::Windows::Forms::ColumnHeader^ Nombre_del_proveedor;



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
			this->Listado = (gcnew System::Windows::Forms::ListView());
			this->Nombre_del_Producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->codigo_del_producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->fecha_de_entrada = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nombre_del_proveedor = (gcnew System::Windows::Forms::ColumnHeader());
			this->ID_del_proveedor = (gcnew System::Windows::Forms::ColumnHeader());
			this->Precio_unitario_costo = (gcnew System::Windows::Forms::ColumnHeader());
			this->precio_unitario_venta = (gcnew System::Windows::Forms::ColumnHeader());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->ID_proveedor = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Listado
			// 
			this->Listado->AutoArrange = false;
			this->Listado->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Listado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Nombre_del_Producto,
					this->codigo_del_producto, this->fecha_de_entrada, this->Nombre_del_proveedor, this->ID_del_proveedor, this->Precio_unitario_costo,
					this->precio_unitario_venta
			});
			this->Listado->HideSelection = false;
			this->Listado->Location = System::Drawing::Point(49, 245);
			this->Listado->Name = L"Listado";
			this->Listado->Size = System::Drawing::Size(985, 191);
			this->Listado->TabIndex = 29;
			this->Listado->UseCompatibleStateImageBehavior = false;
			this->Listado->View = System::Windows::Forms::View::Details;
			// 
			// Nombre_del_Producto
			// 
			this->Nombre_del_Producto->Text = L"Nombre del Producto";
			this->Nombre_del_Producto->Width = 169;
			// 
			// codigo_del_producto
			// 
			this->codigo_del_producto->Text = L"codigo del producto";
			this->codigo_del_producto->Width = 166;
			// 
			// fecha_de_entrada
			// 
			this->fecha_de_entrada->Text = L"Fecha de entrada";
			this->fecha_de_entrada->Width = 154;
			// 
			// Nombre_del_proveedor
			// 
			this->Nombre_del_proveedor->Text = L"Nombre del proveedor";
			this->Nombre_del_proveedor->Width = 152;
			// 
			// ID_del_proveedor
			// 
			this->ID_del_proveedor->Text = L"ID del proveedor";
			this->ID_del_proveedor->Width = 152;
			// 
			// Precio_unitario_costo
			// 
			this->Precio_unitario_costo->Text = L"Precio unitario";
			this->Precio_unitario_costo->Width = 121;
			// 
			// precio_unitario_venta
			// 
			this->precio_unitario_venta->Text = L"Precio unitario de venta";
			this->precio_unitario_venta->Width = 133;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(567, 203);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 27);
			this->button2->TabIndex = 28;
			this->button2->Text = L"consultar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &formentrada::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(457, 203);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 27);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formentrada::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(550, 90);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Nombre del proveedor";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Silver;
			this->textBox4->Location = System::Drawing::Point(677, 88);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(185, 20);
			this->textBox4->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(229, 86);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"fecha de entrada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(562, 62);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"codigo del producto";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(206, 53);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"ID del proveedor";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(677, 59);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 20);
			this->textBox2->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 122);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Precio unitario de costo";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Silver;
			this->textBox5->Location = System::Drawing::Point(323, 120);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(185, 20);
			this->textBox5->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(-8, -10);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1134, 34);
			this->label6->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Silver;
			this->textBox3->Location = System::Drawing::Point(323, 84);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(185, 20);
			this->textBox3->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(545, 122);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"precio unitario de venta";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Silver;
			this->textBox6->Location = System::Drawing::Point(677, 115);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(185, 20);
			this->textBox6->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(555, 151);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Nombre del Producto";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Silver;
			this->textBox7->Location = System::Drawing::Point(677, 144);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(185, 20);
			this->textBox7->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(235, 150);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 13);
			this->label9->TabIndex = 38;
			this->label9->Text = L"ID del proveedor";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Silver;
			this->textBox8->Location = System::Drawing::Point(323, 150);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(185, 20);
			this->textBox8->TabIndex = 37;
			// 
			// ID_proveedor
			// 
			this->ID_proveedor->FormattingEnabled = true;
			this->ID_proveedor->Location = System::Drawing::Point(323, 44);
			this->ID_proveedor->Name = L"ID_proveedor";
			this->ID_proveedor->Size = System::Drawing::Size(121, 21);
			this->ID_proveedor->TabIndex = 39;
			this->ID_proveedor->SelectedIndexChanged += gcnew System::EventHandler(this, &formentrada::ID_proveedor_SelectedIndexChanged);
			// 
			// formentrada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->ID_proveedor);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->Listado);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->MaximizeBox = false;
			this->Name = L"formentrada";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formentrada";
			this->Load += gcnew System::EventHandler(this, &formentrada::formentrada_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void formentrada_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ columna = "COD_PROVEEDOR";
		String^ tabla = "PROVEEDOR";

		conexion cldatos;
		cldatos.FormarListas(
			columna,
			tabla,
			ID_proveedor
		);

		

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ PrecioU = textBox5->Text;
	String^ PrecioV = textBox6->Text;

	conexion cldatos;
	cldatos.IngresoProducto(

		textBox2->Text,
		ID_proveedor->Text->ToString(),
		textBox3->Text,
		Convert:: ToSingle(PrecioU),
		textBox7->Text,
		Convert::ToSingle(PrecioV)

	);

	textBox8->Text = ID_proveedor->Text;
	MessageBox::Show("Registro guardado exitosamente");
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ID_proveedor_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ Cod_producto; String^ Cod_Proveedor; String^ fecha;
	String^ precioUnitario; String^ descripcion; String^ ventaUnitario; String^ NomProv;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "CONSTRUINFO";//su base de datos se llama Biosisemas
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT PRODUCTOS.COD_PRODUCTO, PRODUCTOS.COD_PROV, PRODUCTOS.DESCRIPCION, PRODUCTOS.FECHA, PRODUCTOS.PRECIO_U_COMPRA, PRODUCTOS.PRECIO_U_VENTA, PROVEEDOR.NOMBRE_REPARTIDOR FROM PRODUCTOS JOIN PROVEEDOR ON PRODUCTOS.COD_PROV = PROVEEDOR.COD_PROVEEDOR";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		Cod_producto = (reader["COD_PRODUCTO"]->ToString());
		Cod_Proveedor = (reader["COD_PROV"]->ToString());
		descripcion = (reader["DESCRIPCION"]->ToString());
		fecha = (reader["FECHA"]->ToString());
		precioUnitario = (reader["PRECIO_U_COMPRA"]->ToString());
		ventaUnitario = (reader["PRECIO_U_VENTA"]->ToString());
		NomProv = (reader["NOMBRE_REPARTIDOR"]->ToString());
		String^ srtNew2 = gcnew String(Cod_producto);
		String^ srtNew5 = gcnew String(Cod_Proveedor);
		String^ srtNew1 = gcnew String(descripcion);
		String^ srtNew3 = gcnew String(fecha);
		String^ srtNew6 = gcnew String(precioUnitario);
		String^ srtNew7 = gcnew String(ventaUnitario);
		String^ srtNew4 = gcnew String(NomProv);
		
		
		ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
		
		listView1->SubItems->Add(srtNew2);
		listView1->SubItems->Add(srtNew3);
		listView1->SubItems->Add(srtNew4);
		listView1->SubItems->Add(srtNew5);
		listView1->SubItems->Add(srtNew6);
		listView1->SubItems->Add(srtNew7);
		this->Listado->Items->Add(listView1);
	}
	cn->Close();
}

};
}
