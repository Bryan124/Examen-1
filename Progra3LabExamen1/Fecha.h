#pragma once

class Fecha {
public:

	void setDia(int);
	void setMes(int);
	void setAnio(int);

	int getDia();
	int getMes();
	int getAnio();

	void imprimir();

	int dia;
	int mes;
	int anio;

};