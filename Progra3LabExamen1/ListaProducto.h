#pragma once
#include <iostream>
#include <string>
using namespace std;

class Producto {
public:
	Producto(int, string, float);

	void setCantidad(int);
	void setNombre(string);
	void setPrecio(float);

	int getCantidad();
	string getNombre();
	float getPrecio();


	int cantidadP = 0;
	int cantidad = 0;
	string nombre;
	float precio;
	Producto *sig;
};

