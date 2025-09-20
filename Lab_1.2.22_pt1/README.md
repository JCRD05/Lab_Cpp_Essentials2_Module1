# 1.2.22 - 1.2.23 LAB: Inheritance basics

## Descripción del Ejercicio

Este laboratorio de dos partes introduce el concepto de herencia en C++ utilizando el ejemplo de animales de granja que comparten la característica común de consumir agua.

1.  **Parte 1 (1.2.22):** Se establece una jerarquía de clases simple para demostrar los fundamentos de la herencia. Se define una clase base `FarmAnimal` y dos clases derivadas, `DummyAnimal` y `DoublingAnimal`. El objetivo es familiarizarse con la sintaxis, observar cómo se invocan los constructores de la clase base desde las clases derivadas y comprender las reglas de acceso a los miembros `private`.

2.  **Parte 2 (1.2.23):** Se aplica la herencia a un problema más práctico. Se crean clases específicas (`Cow`, `Horse`, `Sheep`) que heredan de `FarmAnimal`. Cada clase derivada **sobrescribe** (overrides) el método `getWaterConsumption()` para implementar una fórmula de cálculo de consumo de agua específica, basada en el peso del animal. El programa principal procesa una lista de animales introducida por el usuario y calcula el consumo total de agua.

## Salida del Programa

A continuación se muestra una simulación de la salida para cada una de las dos partes del laboratorio, consolidadas en un solo bloque.

```bash
# --- Salida de la Parte 1 ---
This animalA species is a cat and it consumes 5 liters of water
What about the others?
This animal species is a dog and it consumes 10 liters of water
This animal species is a cow and it consumes 42 liters of water

# --- Salida de la Parte 2 (Ejemplo de Interacción) ---
# Input: cow 500
# Input: sheep 50
# Input: horse 400
# Input: result
75.7
