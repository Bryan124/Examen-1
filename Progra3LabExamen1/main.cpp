#include <iostream>
#include "Fecha.h"
#include "Factura.h"
#include "ListaProducto.h"

int main() {


	Factura f1 = Factura();
	f1.addProducto(13, "Pelota", 1350);
	f1.addFactura("Roberto");


	system("pause");
	return 0;
}