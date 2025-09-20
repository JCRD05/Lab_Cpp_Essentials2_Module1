# 1.0.9 LAB: Obtaining derived data from an object

## Descripción del Ejercicio

Este laboratorio explora diferentes estrategias para manejar y obtener datos derivados en un objeto, enfocándose en la eficiencia computacional. El código implementa dos clases, `AdHocSquare` y `LazySquare`, para demostrar dos métodos distintos para obtener el área.

1.  **`AdHocSquare`:** Esta clase no almacena el área como un atributo. En su lugar, el valor del área se calcula y se devuelve cada vez que se llama al método `get_area()`. El método `set_side()` simplemente actualiza el valor del lado. Este enfoque ahorra memoria pero puede ser menos eficiente si el cálculo es complejo.

2.  **`LazySquare`:** Esta clase utiliza un enfoque de "evaluación perezosa". Almacena tanto `side` como `area`. El método `get_area()` solo recalcula el área si el lado ha sido modificado desde la última vez que se calculó. Para ello, utiliza una bandera (`side_changed`) que se activa con el método `set_side()` y se desactiva después de recalcular el área. Esto optimiza el rendimiento al evitar cálculos innecesarios.

## Salida del Programa

A continuación se muestra una simulación de la salida que el programa produce en la consola al ser ejecutado:

```bash
Square 1 area = 16
Square 1 area = 25

Square 2 area = 16
Square 2 area = 25
Square 2 area = 25
Square 2 area = 36
