#include <iostream>
#include "Integer.h"
using namespace std;

Integer::Integer() :valor(1) {
}

Integer::Integer(int valor) {
	setValor(valor);
}

Integer::~Integer() {
	cout << "Se destruyo ..." << endl;
}

void Integer::setValor(int valor) {
	this->valor = valor;
}
int Integer::getValor() {
	return valor;
}

Tipo Integer::getTipo() {
	return T_Int;
}

void Integer::imprimir() {
	cout << "Object:Integer{" << this->getValor() << "}" << endl;
}