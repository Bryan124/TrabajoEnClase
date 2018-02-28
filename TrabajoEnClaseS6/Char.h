#pragma once
#include <iostream>
#include "object.h"
using namespace std;

class Char : public Object {
private:
	char valor;

public:
	Char();
	Char(char);
	~Char();


	//Get y Set de Valor
	void setValor(char);
	char getValor();


	//Metodos Virtual
	Tipo getTipo();
	void imprimir();
};