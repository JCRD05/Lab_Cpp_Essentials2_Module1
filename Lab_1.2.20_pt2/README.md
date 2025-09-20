# 1.2.19 - 1.2.21 LAB: Points in 2D

## Descripción del Ejercicio

Este proyecto de tres partes se centra en modelar entidades geométricas básicas en un espacio bidimensional utilizando clases en C++.

1.  **Parte 1 (1.2.19):** Se introduce la clase `Point2D` para representar un punto con coordenadas `x` e `y`. El objetivo principal es implementar un método `distance()` que calcula la distancia euclidiana entre dos objetos `Point2D` utilizando el teorema de Pitágoras.

2.  **Parte 2 (1.2.20):** El proyecto se expande con la introducción de una nueva clase, `Line2D`. Esta clase modela una línea recta a partir de su pendiente (`slope`) e intercepto en el eje y (`y-intercept`). Se implementa un constructor que toma dos objetos `Point2D` para calcular estos parámetros y un método `toString()` para mostrar la ecuación de la línea en el formato `y = ax + b`.

3.  **Parte 3 (1.2.21):** La última parte se basa en las clases anteriores para resolver un problema de colinealidad. El objetivo es añadir un método `contains()` a la clase `Line2D` que verifique si un tercer `Point2D` pertenece a la línea definida por los dos primeros. El programa determina si tres puntos dados son colineales.

## Salida del Programa

A continuación se muestra una simulación de la salida para cada una de las tres partes del laboratorio.

```bash
# --- Salida de la Parte 1 ---
# Input: 0 0
# Input: 3 4
5

# --- Salida de la Parte 2 ---
# Input: 0 1
# Input: 2 5
y = 2.000000x + 1.000000

# --- Salida de la Parte 3 (Ejemplo Lógico) ---
# Input: 0 1
# Input: 2 5
# Input: 3 7
collinear
