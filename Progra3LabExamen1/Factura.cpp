#include "Fecha.h"
#include "Factura.h"
#include "ListaProducto.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


void Factura::setCliente(string cl) {
	this->cliente = cl;
}
string Factura::getCliente() {
	return cliente;
}

void Factura::addProducto(int cant, string nom,float pre) {
	Producto *nuevo = new Producto(cant, nom, pre);

	if (primero == NULL) {
		primero = nuevo;
	}
	else {
		ultimo->sig = nuevo;
		ultimo = nuevo;
	}
}
double Factura::Total() {
	double sub = listaproductos->cantidad * listaproductos->precio;
	double ISV = (listaproductos->cantidad * listaproductos->precio) * 0.07;
	double Total = sub + ISV;
	return Total;
}

void Factura::addFactura(string nom) {
	Factura *nueva = new Factura();
	Factura *actual = 0;
	if (primero1 == NULL) {
		primero1 = nueva;
		CantidadFacturas++;
	}
	else {
		ultimo1->sig = nueva;
		ultimo1 = nueva;
		CantidadFacturas++;
	}
	while (actual != NULL) {
		double totalneto = 0;
		totalneto = totalneto + nueva->Total();
	}
	cout << "Se agrego a la factura" << endl;
}


