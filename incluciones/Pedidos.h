#pragma once


#include "Cliente.h"
#include "Articulo.h"
#include "Empleado.h"

using namespace std;

class Pedidos 
{
public:

    Pedidos(string codigoPedido, Cliente* cliente, Empleado* empleado);
    string getCodigoPedido();
    void mostrarPedidos();
    void agregarArticulo(Articulo* articulo);

private:
    string codigoPedido;
    Empleado* empleado;
    Cliente* cliente;
    Articulo** articulos;
    int cantidadArticulos = 0;
};