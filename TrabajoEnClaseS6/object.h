#pragma once
#include <iostream>
using namespace std;

enum Tipo
{T_char,T_String,T_Int};

class Object{
public:
	virtual Tipo getTipo() = 0;
	virtual void imprimir() = 0;
};