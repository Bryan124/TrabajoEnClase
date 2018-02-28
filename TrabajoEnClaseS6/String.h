#pragma once
#include <iostream>
#include "object.h"
using namespace std;

class String : public Object {
private:
	string valor;
	
public:
	String();
	String(string);
	~String();


	//Get y Set de Valor
	void setValor(string);
	string getValor();


	//Metodos Virtual
	Tipo getTipo();
	void imprimir();

};