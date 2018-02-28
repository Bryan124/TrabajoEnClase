#include <iostream>
#include "Char.h"
#include "Integer.h"
#include "String.h"
#include "object.h"
#include "conio.h"
#include <string>
using namespace std;
int main() {
	int opcion,op2,pos = 0;
	int cdn = 0, cr = 0, it = 0;
	string pala;
	char cara;
	int ent;
	Object *datos[4];
	for (int i = 0; i < 4; i++) {
		datos[i] = new String("");
	}

	do{
		if (pos < 4) {
			cout << "Desea Ingresar un valor al arreglo?" << "\n1.Si" << "\n2.No" << endl;
			cin >> opcion;
			switch (opcion) {
			case 1: {
				do {
					cout << "Que tipo de dato desea ingresar?" << "\n1.String" << "\n2.Char" << "\n3.Integer" << endl;
					cin >> op2;
					switch (op2) {
					case 1: {
						cout << "Ingrese el String: " << endl;
						cin >> pala;
						datos[pos] = new String(pala);
						cdn++;
						if (pos < 4) {
							pos++;
						}
						op2 = 4;
						break;
					}
					case 2: {
						cout << "Ingrese el Char: " << endl;
						cin >> cara;
						datos[pos] = new Char(cara);
						cr++;
						if (pos < 4) {
							pos++;
						}
						op2 = 4;
						break;
					}
					case 3: {
						cout << "Ingrese el Integer: " << endl;
						cin >> ent;
						datos[pos] = new Integer(ent);
						it++;
						if (pos < 4) {
							pos++;
						}
						op2 = 4;
						break;
					}
					}
				} while (op2 != 4);
				break;
			}
			}
		}
		else {
			cout << "El arreglo esta lleno!" << endl;
			opcion = 2;
			break;
		}
	}while(opcion != 2);
	
	for (int i = 0; i < 4; i++) {
		datos[i]->imprimir();
	}

	system("pause");
	
	return 0;
}
