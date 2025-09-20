# 1.0.10 LAB: Classes and objects: ShopItemOrder

## Descripción del Ejercicio

El objetivo de este laboratorio es diseñar y construir una clase en C++ desde cero para modelar una entidad del mundo real: una orden de compra de un artículo específico en un sistema de comercio electrónico. El código define la clase `ShopItemOrder`, la cual encapsula los datos privados de un pedido: nombre del artículo (`itemName`), precio unitario (`itemPrice`) y la cantidad de artículos (`itemsOrdered`).

La clase provee una interfaz pública con un constructor para inicializar los objetos y un conjunto de métodos `get` y `set` para acceder y modificar de forma controlada cada uno de los atributos. Además, incluye el método `getOrderPrice()` para calcular el costo total de la orden y `printOrder()` para mostrar un resumen del pedido en un formato legible.

## Salida del Programa

A continuación se muestra una simulación de la salida que el programa produce en la consola al ser ejecutado:

```bash
3 x "T-shirt mens white size L" = 14.97$
2 x "Jeans mens blue size L" = 17.98$
