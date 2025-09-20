# 1.2.24 - 1.2.30 LAB: Singly linked list

## Descripción del Ejercicio

Este extenso laboratorio de siete partes guía al desarrollador a través de la implementación completa de una estructura de datos clásica, la lista enlazada simple (singly linked list), desde cero en C++.

1.  **Parte 1 (1.2.24):** Se comienza con la estructura fundamental, creando las clases `Node` y `List` e implementando las operaciones básicas `pushFront()` y `popFront()` para añadir y remover elementos del inicio de la lista.

2.  **Parte 2 (1.2.25):** Se aborda la gestión de memoria, añadiendo un destructor a la clase `List` para recorrer y eliminar correctamente todos los nodos, previniendo así las fugas de memoria.

3.  **Parte 3 (1.2.26):** Se mejora la clase añadiendo un miembro `size` y un método `getSize()` para rastrear y devolver eficientemente el número de elementos almacenados.

4.  **Parte 4 (1.2.27):** Para soportar el comportamiento de una cola (Queue), se implementa el método `pushBack()` y se añade un puntero `tail` para realizar inserciones eficientes al final de la lista.

5.  **Parte 5 (1.2.28):** Se complementa la interfaz con `popBack()`, un método que elimina el último elemento de la lista, lo cual requiere recorrerla para encontrar el penúltimo nodo y actualizar los punteros.

6.  **Parte 6 (1.2.29):** La manipulación de la lista se vuelve más flexible con la adición de métodos basados en índices: `at()` para acceder, `insert_at()` para insertar, y `remove_at()` para eliminar elementos en posiciones específicas.

7.  **Parte 7 (1.2.30):** Finalmente, se explora la semántica de copia de objetos implementando un constructor de copia personalizado que realiza una "copia profunda" (deep copy), asegurando que las listas copiadas sean verdaderamente independientes y no compartan nodos.

## Salida del Programa

A continuación se muestra una simulación de la salida para cada una de las siete partes del laboratorio, consolidadas en un solo bloque.

```console
# --- Salida de la Parte 1 ---
3
2
1
Empty List

# --- Salida de la Parte 2 ---
+Node
+Node
+Node
3
-Node
2
-Node
1
-Node
List Cleared

# --- Salida de la Parte 3 ---
pushed 1 size 1
pushed 2 size 2
pushed 3 size 3
popped 3 size 2
3
popped 2 size 1
2
popped 1 size 0
1
Empty List

# --- Salida de la Parte 4 ---
pushed 1 size 1
pushed 2 size 2
pushed 3 size 3
popped 1 size 2
popped 2 size 1
popped 3 size 0
List Cleared

# --- Salida de la Parte 5 ---
pushed 1 size 1
pushed 2 size 2
pushed 3 size 3
popped 3 size 2
popped 2 size 1
popped 1 size 0
List Cleared

# --- Salida de la Parte 6 ---
pushed 1 size 1
pushed 2 size 2
pushed 3 size 3
pushed 4 size 4
List[0] = 1
List[1] = 2
List[2] = 3
List[3] = 4

popped 2 size 3
List[0] = 1
List[1] = 3
List[2] = 4

pushed 3 in index 2 size 4
List[0] = 1
List[1] = 3
List[2] = 3
List[3] = 4
List Cleared

# --- Salida de la Parte 7 ---
Lista1
List[0] = 1
List[1] = 2
List[2] = 3
List[3] = 4

Lista2
List[0] = 1
List[1] = 2
List[2] = 3
List[3] = 4

Lista1
List[0] = 1
List[1] = 2
List[2] = 3
List[3] = 4

Lista2
List[0] = 1
List[1] = 2
List[2] = 3
List[3] = 4
List[4] = 7

Lista1
List[0] = 1
List[1] = 2
List[2] = 3
List[3] = 4
List Cleared
List Cleared
