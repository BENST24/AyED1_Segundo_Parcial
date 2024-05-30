# AyED1_Segundo_Parcial

# Sistema de Gestión de Pedidos

Este proyecto es un programa en C++ para la gestión de pedidos, clientes, empleados y artículos. El objetivo del programa es simular la creación, asignación y visualización de pedidos realizados por clientes, gestionados por empleados y que contienen diversos artículos.

## Descripción

El programa consta de varias clases que representan los distintos elementos del sistema:

- **Articulo**: Representa un artículo con un código, nombre y precio.
- **Cliente**: Representa un cliente con nombre, apellido, dirección y código de cliente.
- **Empleado**: Representa un empleado con nombre y apellido.
- **Pedidos**: Representa un pedido que incluye un código de pedido, cliente, empleado y una lista de artículos.

### Funcionalidades

1. **Creación de Artículos**: Se pueden crear objetos `Articulo` con un código, nombre y precio.
2. **Creación de Clientes**: Se pueden crear objetos `Cliente` con nombre, apellido, dirección y código de cliente.
3. **Creación de Empleados**: Se pueden crear objetos `Empleado` con nombre y apellido.
4. **Creación de Pedidos**: Se pueden crear objetos `Pedidos` que asocian un cliente, un empleado y varios artículos.
5. **Visualización de Pedidos**: Los pedidos pueden mostrarse en la consola, incluyendo la información del cliente, empleado y los artículos del pedido.

### Estructura del Proyecto

- `main.cpp`: Contiene la función principal del programa y la lógica para crear y gestionar pedidos.
- `incluciones/Articulo.h` y `Articulo.cpp`: Definen la clase `Articulo`.
- `incluciones/Cliente.h` y `Cliente.cpp`: Definen la clase `Cliente`.
- `incluciones/Empleado.h` y `Empleado.cpp`: Definen la clase `Empleado`.
- `incluciones/Pedidos.h` y `Pedidos.cpp`: Definen la clase `Pedidos`.