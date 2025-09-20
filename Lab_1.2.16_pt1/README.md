# 1.2.16 - 1.2.18 LAB: Modelling fractions

## Descripción del Ejercicio

Este laboratorio se enfoca en la creación de una clase `Fraction` en C++ para representar y manipular números racionales, desarrollado de manera incremental a lo largo de tres partes.

1.  **Parte 1 (1.2.16):** La primera fase establece la estructura básica de la clase `Fraction`. Se implementa la capacidad de almacenar un numerador y un denominador, y se crean métodos para representar la fracción de dos maneras: como una cadena de texto con formato (ej. "1 3/4") y como un valor de punto flotante.

2.  **Parte 2 (1.2.17):** En la segunda parte, se amplía la funcionalidad de la clase para incluir operaciones aritméticas básicas. Se añaden métodos para sumar, restar, multiplicar y dividir dos objetos `Fraction`. Además, se implementa un método `reduce()` que utiliza el algoritmo de Euclides (a través de `std::gcd`) para simplificar las fracciones a sus términos más bajos, asegurando que los resultados se presenten siempre de forma canónica.

3.  **Parte 3 (1.2.18):** La etapa final completa la clase añadiendo capacidades de comparación. Se implementan métodos para determinar si una fracción es mayor, menor o igual que otra. Esto permite realizar comparaciones lógicas entre objetos `Fraction`, finalizando así un modelo robusto para el manejo de fracciones.

## Salida del Programa

A continuación se muestra una simulación de la salida para cada una de las tres partes del laboratorio.

```bash
# --- Salida de la Parte 1 ---
# Input: 7 / 4
1 3/4 is 1.75 in decimal

# --- Salida de la Parte 2 ---
# Input: 1 / 2
# Input: 1 / 4
1/2 + 1/4 = 3/4
1/2 - 1/4 = 1/4
1/2 * 1/4 = 1/8
1/2 / 1/4 = 2

# --- Salida de la Parte 3 ---
# Input: 3 / 4
# Input: 1 / 2
3/4 > 1/2
