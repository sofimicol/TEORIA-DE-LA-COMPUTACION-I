#include "TAD_LISTAENTEROS.h"
#include <stdio.h>
#include <stdlib.h>


    Tlista creaNodo(int dato){
        Tlista nodo=NULL;
        nodo=(Tlista)malloc(sizeof(TNodo));
        nodo->dato=dato;
        nodo->sig=NULL;
        return nodo;
    }
    void mostrarDato(Tlista nodo){
        printf("\n Numero: %d", nodo->dato);
    }
    int retornaDato(Tlista nodo){
        return nodo->dato;
    }
    Tlista crearListaVacia(){
        Tlista lista=NULL;
    }
    void mostrarLista(Tlista lista){
        Tlista aux=NULL;
        aux=lista;
        printf("\nLista actual: ");
        if(aux!=NULL){
            while(aux!=NULL){
                mostrarDato(aux);
                aux=aux->sig;
            }
        }
        else{
            printf("\nLista vacia");
        }
    }
    void insertar_inicio_lista(Tlista* cabeza, int dato){
        Tlista aux;
        Tlista nuevo=creaNodo(dato);
        if(*cabeza==NULL){
            *cabeza=nuevo;
        }
        else{
         nuevo->sig=*cabeza;
         *cabeza=nuevo;
        }
    }
    void insertar_final_lista(Tlista* cabeza, int dato){
        Tlista aux=NULL;
        Tlista nuevo=creaNodo(dato);
        if(*cabeza!=NULL){
            aux=*cabeza;
            while(aux->sig!=NULL){
                aux=aux->sig;
            }
            aux->sig=nuevo;
        }
        else{
            *cabeza=nuevo;
        }
    }
    void eliminaDatoporPos(Tlista* cabeza, int pos){
        Tlista ant=NULL;
        Tlista nex=NULL;
        if(*cabeza!=NULL){
            if(pos==0){
                *cabeza=*cabeza->sig;
            }
            else{ 
            next=*cabeza;
            int cont=0;
            while (cont<pos ){}
                cont++;
                ant=next;
                next=next->sig;
            }
            if(next!=NULL){
                 next=next->sig;
                ant->sig=next;
                printf("Se borro con exito");
            }

        }
            else{
            printf("Lista vacia");
        }

    }
    void eliminaDato(Tlista* cabeza, int dato){
    int buscarDato(Tlista cabeza, int dato);
    int tamLista(Tlista cabeza);
    void liberaMemoria(Tlista* cabeza);