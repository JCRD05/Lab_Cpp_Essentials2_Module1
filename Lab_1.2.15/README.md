# 1.2.15 LAB: Gym membership management system

## Descripción del Ejercicio

El objetivo de este laboratorio es aplicar los conceptos de programación orientada a objetos para construir un sistema de gestión de membresías de gimnasio desde cero. El código resuelve esto definiendo una clase `GymMembership` que encapsula los datos de cada miembro: ID, nombre y duración de la suscripción en meses.

El programa principal utiliza un arreglo para manejar un máximo de diez miembros y opera a través de una interfaz de línea de comandos. Esta interfaz procesa comandos como `create`, `delete`, `extend` y `cancel` para manipular los datos de los miembros, delegando la lógica de las operaciones y las validaciones correspondientes a los métodos de la clase `GymMembership`.

## Salida del Programa

A continuación se muestra una simulación de una sesión interactiva con el programa:

```bash
No members in the system
What would you like to do?: create 1 Carlos
Membership added to the system
What would you like to do?: create 2 Ana
Membership added to the system
What would you like to do?: extend 1 12
The membership has been extend to 12 months
Name: Carlos
ID: 1
Subscription valid for: 12 months
What would you like to do?: extend 2 6
The membership has been extend to 6 months
Name: Ana
ID: 2
Subscription valid for: 6 months
What would you like to do?: cancel 2
The membership has been canceled
What would you like to do?: delete 1
Membership erased from the system
What would you like to do?: extend 3 5
There is no membership 3 in the system
What would you like to do?: exit
