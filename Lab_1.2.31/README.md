# 1.2.31 LAB: Doubly linked list

## Descripción del Ejercicio

Este laboratorio final culmina los temas anteriores con la implementación de una lista doblemente enlazada (doubly linked list). A diferencia de la lista enlazada simple, cada `Node` en esta estructura contiene un puntero tanto al elemento siguiente (`next`) como al anterior (`prev`), permitiendo la navegación bidireccional.

El código desarrolla una clase `List` completa que soporta un amplio conjunto de operaciones, incluyendo `pushFront`, `pushBack`, `popFront`, `popBack`, inserción y eliminación por índice, un destructor para la gestión de memoria y un constructor de copia para duplicados independientes. La principal ventaja de esta estructura, demostrada con el nuevo método `printListBackwards()`, es la mayor eficiencia en operaciones que requieren acceso al nodo previo, como `popBack()`, que se vuelve una operación de tiempo constante.

## Salida del Programa

A continuación se muestra una simulación de la salida del programa de prueba, que ejecuta una secuencia de operaciones para demostrar la funcionalidad de la lista.

```console
Lista
List[0] = 2
List[1] = 2
List[2] = 1

Lista
List[0] = 2
List[1] = 2

Lista
List[0] = 2

Lista
List[0] = 2
List[1] = 2
List[2] = 2
List[3] = 1

Lista
List[0] = 2
List[1] = 2
List[2] = 1

Lista
List[3] = 1
List[2] = 2
List[1] = 2

Lista 2
List[0] = 2
List[1] = 2
List[2] = 1

Lista
List[0] = 2
List[1] = 2
List[2] = 1

Lista 2
List[0] = 2
List[1] = 1

List Cleared
List Cleared
