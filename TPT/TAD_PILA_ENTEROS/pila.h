#ifndef PILA_H
#define PILA_H
#include "pila.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct Nodo{
	int dato;
	struct Nodo* sig;
}TNodo;
typedef TNodo* Pila;
//Interfaz sugerida:

Pila pila_crear();
void pila_push(Pila* pila, int valor, int indice);
int pila_pop(Pila* pila);
int pila_top(Pila pila);
int pila_vacia(Pila pila);
void pila_destruir(Pila* pila);
void mostrar_pila(Pila pila);
#endif