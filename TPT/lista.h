#indef LISTA_H
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

    #define LISTA_H
    typedef struct Nodo{
        int dato;
        struct Nodo* sig;
    }TNodo;

    typedef TNodo* ptr;

    Nodo creaNodo(int dato);
    void mostrarDato(ptr nodo);
    int retornaDato(ptr nodo);
    Tlista crearlista();
    void mostrarlista(Tlista lista);
    void insertarlista(Tlista* cabeza, int dato);

    #endif 
