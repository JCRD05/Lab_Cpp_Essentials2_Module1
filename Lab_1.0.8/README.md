# 1.0.8 LAB: Restricting access to object data

## Descripción del Ejercicio

El propósito de este laboratorio es demostrar el concepto de encapsulamiento de datos en la Programación Orientada a Objetos. Este principio se aplica para proteger los datos internos de un objeto y controlar cómo se modifican desde el exterior. El código implementa una clase `Square` con sus atributos `side` y `area` declarados como `private`, impidiendo así el acceso directo. Para modificar el lado del cuadrado de forma segura, se introduce un método público `set_side`. Este método actúa como un "setter", validando el valor de entrada para asegurar que no sea negativo antes de actualizar el estado del objeto. Adicionalmente, la funcionalidad para imprimir los datos se ha movido a un método público de la clase.

## Salida del Programa

A continuación se muestra una simulación de la salida que el programa produce en la consola al ser ejecutado:

```bash
Square: side = 4 area = 16

Square: side = 2 area = 4

Square: side = 2 area = 4
