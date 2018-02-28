#pragma once
#include <iostream>
#include "object.h"
using namespace std;


class Integer : public Object {
private:
	int valor;
	
public:
	//Constructores y Destructores
	Integer();
	Integer(int);
	~Integer();

	//Get y Set de Valor
	void setValor(int);
	int getValor();


	//Metodos Virtual
	Tipo getTipo();
	void imprimir();

};