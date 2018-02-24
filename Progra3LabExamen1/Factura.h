#pragma once
#include "Fecha.h"
#include "ListaProducto.h"
#include <iostream>
#include <string>
using namespace std;

class Factura{
public:

	void setCliente(string);
	string getCliente();

	void addProducto(int, string, float);
	double Total();
	void addFactura(string);

	Fecha FechaDeFactura;
	int CantidadFacturas = 0;
	string cliente = "";
	Factura *sig;
	Producto *primero;
	Producto *ultimo;
	Factura *primero1;
	Factura *ultimo1;
	Factura *listaFacturas;
	Producto *listaproductos;
};