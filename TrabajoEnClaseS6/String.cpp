#include <iostream>
#include "String.h"
#include <string>
using namespace std;

String::String() :valor("Hola") {
}

String::String(string valor) {
	setValor(valor);
}
String::~String() {
	cout << "Se destruyo ..." << endl;
}
void String::setValor(string valor) {
	this->valor = valor;
}
string String::getValor() {
	return valor;
}
Tipo String::getTipo() {
	return T_String;
 }
void String::imprimir() {
	cout << "Object:String{" << this->getValor() << "}" << endl;
}
