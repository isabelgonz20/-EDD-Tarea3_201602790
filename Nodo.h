#ifndef NODO_H_
#define NODO_H_
#include <String.h>
using namespace std;

class Nodo {
private:
	Nodo* siguiente;
	String nombre;
public:

	Nodo();
	virtual ~Nodo();
};

#endif /* NODO_H_ */
