/*
 * Arbol.cpp
 *
 *  Created on: 30 ago. 2019
 *      Author: Aisab
 */

#include "Arbol.h"

Arbol::Arbol::recorrer(Nodo* nodo) {
	// TODO Auto-generated constructor stub
	cout << nodo -> getNombre() << endl;
	if(nodo -> getHijos()>0){
		Nodo* i = nodo -> getHijos();
		while(i != NUll){
			recorrer(i);
			i = i -> getsiguiente();
		}

	}
}

Arbol::~Arbol() {
	// TODO Auto-generated destructor stub
}

