# Práctica: TAD con Listas Enlazadas en C

En los siguientes ejercicios se solicita implementar **Tipos Abstractos de Datos (TAD)** utilizando **listas enlazadas simples** en lenguaje C. 

Se debe prestar especial atención a:
* La correcta definición del tipo.
* La modularización de las operaciones del TAD.
* La gestión de memoria dinámica (`malloc`, `free`).

---

## Ejercicio 1 — TAD Lista de Enteros
Diseñar e implementar un **TAD ListaEnteros** utilizando una lista enlazada simple. El TAD debe proveer las siguientes operaciones básicas:

```c
// Ejemplo de estructura de nodo
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

