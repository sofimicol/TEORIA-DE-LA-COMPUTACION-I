#include "pila.h"


Pila pila_crear2(int valor,Pila sig);
Pila copy_pila(Pila tope);
int retorna_dato(Pila);

Pila pila_crear(){ // crea la pila vacia
	return NULL;
}
Pila pila_crear2(int valor,Pila sig){ // crea un nodo
	Pila tope=NULL;
	tope=(Pila)malloc(sizeof(TNodo));
	tope->dato=valor;
	tope->sig=sig;
	return tope;
}
void pila_push(Pila* pila, int valor, int indice){ // ingreso de pila, 
		if(pila_vacia(*pila)==1){ //retorna 1 si esta vacia
			*pila=pila_crear2(valor,NULL); // crea el primer nodo que sera el tope de la pila
			printf("\n\n----------PROCESO DE EMPILADO DE PILA----------"); // muestra las "posiciones" de ingreso
			printf("\n\nPILA[%d]=[%d] ", indice, valor);
		}
		else{
			*pila=pila_crear2(valor,*pila);
			printf("\nPILA[%d]=[%d] ", indice, valor);
		}
	}

int pila_pop(Pila* pila){ // estructura LIFO (ultimo en entrar, primero en salir)
	Pila aux;
	int dato;
	aux=*pila;
	if(pila_vacia(*pila)!=1){
		dato=retorna_dato(aux);
		*pila=aux->sig;
		free(aux); // libera el nodo tope de la pila, que es el que se desapila y se pierde referencia a el
	}
	else {
		printf("Pila llena");
		dato=-1;
	}
	return dato;
}
int pila_top(Pila pila){ // retorna el tope de la pila no su tamaño
	if(pila==NULL){
		return -1;
	}
	else{
		return pila->dato; // retorna el dato del nodo del tope de la pila
	}

}
int pila_vacia(Pila pila){
	if(pila==NULL){
		return 1; // 1 representa positivo
	}
	else{
		return 0;// 0 representa negativo
	}
}
void pila_destruir(Pila* pila){
	Pila aux;
	aux=*pila; // auxiliar que se inicializa en el tope de la pila, apunta  asu direccion de memoria por lo que los cambios que se hagan en el afectaran a la pila principal
	printf("\n\nLiberando espacio de memoria...");
	while(aux!=NULL){
		aux=aux->sig; // auxiliar sera el siguiente nodo del tope de la pila
		free(*pila); //  libera el nodo del tope de la pila_
		*pila=aux; // el tope de la pila se actualiza al siguiente nodo, hasta que este sea NULL, caso de pila vacia
	}
}
void mostrar_pila(Pila pila){
	Pila aux;
	aux=pila;
	int i=0; // creo un indice para mostrar como se desapila  
	if(pila_vacia(aux)!=1){ // 1 si la pila esta vacia
		printf("\n----------PROCESO DE DESEMPILADO----------");
		while(aux!=NULL){
			printf("\n Orden [%d]= %d",i,retorna_dato(aux));
			i++;
			aux=aux->sig;
		}
	}
	else{
		printf("Pila vacia");
	}
}
int retorna_dato(Pila nodo){
	if(nodo!=NULL){
		return nodo->dato;
	}
	else{
		return -1;
	}
}