/*
 * Nodo.cpp
 *
 *  Created on: 30 ago. 2019
 *      Author: Aisab
 */

#include "Nodo.h"

Nodo::Nodo() {
	// TODO Auto-generated constructor stub

}

Nodo::~Nodo() {
	// TODO Auto-generated destructor stub
}

void Nodo::agregarHijo(Nodo* nodo) {
	hijos++;
	if(primerHijo == NULL){
		primerHijo = nodo;
		ultimoHijo = nodo;
	}else {
		ultimoHijo -> siguiente = nodo;
		ultimoHijo = nodo;
	}

}

Nodo* Nodo::getHijos() {
	return primerHijo;
}

Nodo::Nodo(string nombre) {
	this -> nombre = nombre;
	siguiente = NULL;
	primerHijo = NULL;
	ultimoHijo = NULL;
	hijos = 0;
}

int Nodo::getNumeroHijos() {
	return this -> hijos;
}
