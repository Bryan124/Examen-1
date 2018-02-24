#include "ListaProducto.h"
#include <iostream>
#include <string>
using namespace std;

Producto::Producto(int c, string n, float p) {
	this->cantidad = c;
	this->nombre = n;
	this->precio = p;
}
void Producto::setCantidad(int c) {
	this->cantidad = c;
}
int Producto::getCantidad() {
	return cantidad;
}
void Producto::setNombre(string n) {
	this->nombre = n;
}
string Producto::getNombre() {
	return nombre;
}
void Producto::setPrecio(float p) {
	this->precio = p;
}
float Producto::getPrecio() {
	return precio;
}

