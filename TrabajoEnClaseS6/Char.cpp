#include <iostream>
#include "Char.h"
using namespace std;

Char::Char() :valor('v') {
};
Char::Char(char valor) {
	setValor(valor);
}
Char::~Char() {
	cout << "Se destruyo ..." << endl;
}

void Char::setValor(char valor) {
	this->valor = valor;
}

char Char::getValor() {
	return valor;
}

Tipo Char::getTipo() {
	return T_char;
}
void Char::imprimir() {
	cout << "Object:Char{" << this->getValor() << "}" << endl;
}