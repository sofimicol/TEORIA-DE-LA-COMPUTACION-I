// Ejercicio 2 — TAD Pila de Enteros
// Implementar un TAD PilaEnteros utilizando una lista enlazada.

// La pila debe seguir el comportamiento LIFO (Last In First Out).

// Operaciones requeridas:

// crear pila
// apilar elemento
// desapilar elemento
// obtener el elemento del tope
// verificar si la pila está vacía
// liberar toda la memoria
// Interfaz sugerida:

// Pila* pila_crear();
// void pila_push(Pila* pila, int valor);
// int pila_pop(Pila* pila);
// int pila_top(Pila* pila);
// int pila_vacia(Pila* pila);
// void pila_destruir(Pila* pila);
// Cada operación que elimine nodos debe liberar la memoria correspondiente.
#include "pila.h"

int main (){
	Pila pila=pila_crear();
	int dato;
	int indice=0;
	int ban=0;
	do {
		printf("\nIngrese el [%d] elemento a la pila: ", indice);
		scanf("%d",&dato);
		pila_push(&pila,dato,indice);
		indice ++;
		printf("\n\nIngrese 0 para terminar el proceso ");
		scanf("%d", &ban);
		
	}while (ban!=0);
	mostrar_pila(pila); // muestra el contenido de la pila utilizando la funcion pop 
	pila_destruir(&pila); //libera toda la memoria de la pila
	return 0;
}
