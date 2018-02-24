#include "Fecha.h"
#include <iostream>
using namespace std;

void Fecha::setDia(int d) {
	this->dia = d;
}
int Fecha::getDia() {
	return dia;
}
void Fecha::setMes(int m) {
	this->mes = m;
}
int Fecha::getMes() {
	return mes;
}
void Fecha::setAnio(int a) {
	this->anio = a;
}
int Fecha::getAnio() {
	return anio;
}
void Fecha::imprimir() {
	cout << dia << " / " << mes << " / " << anio << endl;
}