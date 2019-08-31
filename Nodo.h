/*
 * Nodo.h
 *
 *  Created on: 30 ago. 2019
 *      Author: Aisab
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
using namespace std;

class Nodo {
private:
	Nodo* siguiente;
	string nombre;
	int hijos;
	Nodo* primerHijo;
	Nodo* ultimoHijo;
public:
	void agregarHijo(Nodo* nodo);
	Nodo* getHijos();
	Nodo(string nombre);

	Nodo();
	virtual ~Nodo();

	void setHijos(int hijos) {
		this->hijos = hijos;
	}
	int getNumeroHijos();

	const string& getNombre() const {
		return nombre;
	}

	void setNombre(const string& nombre) {
		this->nombre = nombre;
	}

	const Nodo*& getSiguiente() const {
		return siguiente;
	}

	void setSiguiente(const Nodo *&siguiente) {
		this->siguiente = siguiente;
	}
};

#endif /* NODO_H_ */
