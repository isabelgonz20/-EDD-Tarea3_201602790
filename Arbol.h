/*
 * Arbol.h
 *
 *  Created on: 30 ago. 2019
 *      Author: Aisab
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"

class Arbol {
private
	Nodo* raiz;


public:
	void recorrer(Nodo* nodo);
	Arbol();
	virtual ~Arbol();
};

#endif /* ARBOL_H_ */
