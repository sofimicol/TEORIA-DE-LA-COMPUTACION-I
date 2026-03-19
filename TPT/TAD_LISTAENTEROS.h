#indef TAD_LISTAENTEROS_H
/* Diseñar e implementar un TAD ListaEnteros utilizando una lista enlazada simple.

El TAD debe permitir almacenar números enteros.

Operaciones requeridas:

crear lista vacía
insertar un elemento al inicio
insertar un elemento al final
eliminar un valor
buscar un valor
obtener la longitud de la lista
imprimir la lista
liberar completamente la memoria utilizada*/

    #define TAD_LISTAENTEROS_H
    typedef struct Nodo{
        int dato;
        struct Nodo* sig;
    }TNodo;

    typedef TNodo* Tlista;

    Nodo creaNodo(int dato);
    void mostrarDato(Tlista nodo);
    int retornaDato(Tlista nodo);
    Tlista crearListaVacia();
    void mostrarLista(Tlista lista);
    void insertar_inicio_lista(Tlista* cabeza, int dato);
    void insertar_final_lista(Tlista* cabeza, int dato);
    void eliminaDato(Tlista* cabeza, int pos);
    int buscarDato(Tlista cabeza, int dato);
    int tamLista(Tlista cabeza);
    void liberaMemoria(Tlista* cabeza);
    #endif 
