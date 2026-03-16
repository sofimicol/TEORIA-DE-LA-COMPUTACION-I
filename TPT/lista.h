#indef LISTA_H
    #define LISTA_H

    typedef struct Nodo{
        int dato;
        struct Nodo* siguiente; 
    } TNodo;

    typedef TNodo* Tlista;
    Tlista crearlista();
    void mostrarlista(Tlista lista);
    void insertarlista(Tlista* cabeza, int dato);

    #endif 
