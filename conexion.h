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
    void IngresoProducto(String^ Cod_producto, String^ Cod_Proveedor, String^ fecha, float^ precioUnitario, String^ descripcion, float^ ventaUnitario) {
        Conectar();
        String^ sentencia = "Insert into PRODUCTOS (COD_PRODUCTO, COD_PROV, PRECIO_U_COMPRA, PRECIO_U_VENTA, DESCRIPCION, FECHA) values(@COD_PRODUCTO, @COD_PROV, @PRECIO_U_COMPRA, @PRECIO_U_VENTA, @DESCRIPCION, @FECHA)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@COD_PRODUCTO", Cod_producto);
        ejecutar->Parameters->AddWithValue("@COD_PROV", Cod_Proveedor);
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
    float ObtenerPrecio(String^ Cod_producto) {
        Conectar();
        String^ sentencia = "SELECT PRECIO_U_VENTA FROM PRODUCTOS WHERE COD_PRODUCTO = '" + Cod_producto + "'";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        cn->Open();
        SqlDataReader^ registro = ejecutar->ExecuteReader();
        float precio = 0.0; // Inicializa el precio con un valor predeterminado

        if (registro->Read()) {
            precio = float::Parse(registro["PRECIO_U_VENTA"]->ToString());
        }

        cn->Close();
        return precio;
    }

    void AgregarCliente(String^ NombreCliente, String^ Telefono, String^ fecha, String^ Nit, float^ TotalVenta) {
        Conectar();
        String^ sentencia = "Insert into VENTA_ENCABEZADO (NOMBRE_CLIENTE, TELEFONO, FECHA, NIT, TOTAL_VENTA) values(@NOMBRE_CLIENTE, @TELEFONO, @FECHA, @NIT, @TOTAL_VENTA)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@NOMBRE_CLIENTE", NombreCliente);
        ejecutar->Parameters->AddWithValue("@TELEFONO", Telefono);
        ejecutar->Parameters->AddWithValue("@FECHA", fecha);
        ejecutar->Parameters->AddWithValue("@NIT", Nit);
        ejecutar->Parameters->AddWithValue("@TOTAL_VENTA", TotalVenta);
        cn->Open();
        ejecutar->ExecuteNonQuery();
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