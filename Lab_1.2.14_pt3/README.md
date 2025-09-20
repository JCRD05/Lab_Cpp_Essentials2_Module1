# 1.2.12 - 1.2.14 LAB: Flight booking system

## Descripción del Ejercicio

Este laboratorio consiste en el desarrollo progresivo de un sistema de reserva de vuelos a lo largo de tres partes, comenzando con una clase básica y añadiendo complejidad en cada etapa.

1.  **Parte 1 (1.2.12):** En la primera etapa, se crea la clase fundamental `FlightBooking` para modelar un único vuelo. Esta clase almacena un ID, la capacidad y los asientos reservados, e incluye un método `printStatus()` para mostrar el estado de la reserva y el porcentaje de ocupación.

2.  **Parte 2 (1.2.13):** La segunda parte expande la clase para un solo vuelo, introduciendo validación de datos. Se limita la sobreventa al 105% de la capacidad y se asegura que las reservas no sean negativas. Además, se implementa una interfaz de usuario interactiva que permite añadir o cancelar reservas mediante los comandos `add` y `cancel`.

3.  **Parte 3 (1.2.14):** Finalmente, en la tercera parte, el sistema se escala para gestionar múltiples vuelos (hasta diez). El programa utiliza un arreglo de objetos `FlightBooking` y amplía el conjunto de comandos para permitir al usuario `create` un nuevo vuelo, `delete` uno existente, y usar `add` o `cancel` especificando el ID del vuelo correspondiente.

## Salida del Programa

A continuación se muestra una simulación de la salida para cada una de las tres partes del laboratorio, consolidadas en un solo bloque.

```bash
# --- Salida de la Parte 1 ---
Flight 1 : 30/120 (25%) seats reserved
Flight 2 : 55/100 (55%) seats reserved

# --- Salida de la Parte 2 (Ejemplo de Interacción) ---
Provide flight capacity: 100
Provide number of reserved seats: 100
What would you like to do?: add
How many reservations you want to add?
10
Cannot perform this operation
What would you like to do?: add
How many reservations you want to add?
5
What would you like to do?: cancel
How many reservations you want to cancel?
10
What would you like to do?: quit

# --- Salida de la Parte 3 (Ejemplo de Interacción) ---
The system is empty
What would you like to do?: create 1 100
Flight added to the system
What would you like to do?: create 2 50
Flight added to the system
What would you like to do?: add 1 80
Flight 1 : 80/100 (80%) seats reserved
What would you like to do?: add 2 55
Cannot perform this operation
What would you like to do?: cancel 1 10
Flight 1 : 70/100 (70%) seats reserved
What would you like to to?: delete 2
Flight erased from the system
What would you like to do?: exit
