#pragma once
#include "conexion.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;


ref class conexion
{
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();
        st->DataSource = "localhost\\SQLEXPRESS";
        st->InitialCatalog = "CONSTRUINFO";
        st->IntegratedSecurity = true;
        cn = gcnew SqlConnection(Convert::ToString(st));
    }
public:
    void IngresoProducto(String^ Cod_producto, String^ fecha, float^ precioUnitario, String^ descripcion, float^ ventaUnitario) {
        Conectar();
        String^ sentencia = "Insert into PRODUCTOS (COD_PRODUCTO, PRECIO_U_COMPRA, PRECIO_U_VENTA, DESCRIPCION, FECHA) values(@COD_PRODUCTO, @PRECIO_U_COMPRA, @PRECIO_U_VENTA, @DESCRIPCION, @FECHA)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@COD_PRODUCTO", Cod_producto);
        ejecutar->Parameters->AddWithValue("@PRECIO_U_COMPRA", precioUnitario);
        ejecutar->Parameters->AddWithValue("@PRECIO_U_VENTA", ventaUnitario);
        ejecutar->Parameters->AddWithValue("@DESCRIPCION", descripcion);
        ejecutar->Parameters->AddWithValue("@FECHA", fecha);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void FormarListas(String^ Columna, String^ Tabla, ComboBox^ comboBox)
    {
        Conectar();
        String^ sentencia = "SELECT " + Columna + " FROM " + Tabla;
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        cn->Open();
        SqlDataReader^ registro = ejecutar->ExecuteReader();
        while (registro->Read())
        {
            comboBox->Items->Add(registro[Columna]->ToString());
        }
        cn->Close();
    }
//    void Insertar3(int id_venta, int cantidad, int id_cliente, int id_producto) {
//        Conectar();
//        String^ sentencia = "Insert into VENTA values(@id_venta, @cantidad, @id_cliente, @id_producto)";
//        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
//        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
//        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
//        ejecutar->Parameters->AddWithValue("@id_cliente", id_cliente);
//        ejecutar->Parameters->AddWithValue("@id_producto", id_producto);
//        cn->Open();
//        ejecutar->ExecuteNonQuery();
//        cn->Close();
//    }
};
//