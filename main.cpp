#include <iostream>
#include ".\incluciones\Articulo.h"
#include ".\incluciones\Cliente.h"
#include ".\incluciones\Pedidos.h"
#include ".\incluciones\Empleado.h"

using namespace std;

void pauseConsole()
{
    cin.ignore();
    cin.get();
}

int main()
{

    Articulo* articulo1 = new Articulo("A001", "Garrafa 10L", 4500);
    Articulo* articulo2 = new Articulo("A002", "Garrafa 15L", 7000);
    
    Cliente* cliente1 = new Cliente("Cliente 1", "Apellido1", "Independencia 1500", "C001");
    Cliente* cliente2 = new Cliente("Cliente 2", "Apellido2", "Colon 1800", "C002");

    Empleado* empleado1 = new Empleado("Benjamin", "Steck");

    Articulo* cliente1Articulos[] = {articulo1, articulo2};
    Articulo* cliente2Articulos[] = {articulo1};

    Pedidos* pedido1 = new Pedidos("P001", cliente1, empleado1);
    for (Articulo* articulo : cliente1Articulos) 
    {
        pedido1->agregarArticulo(articulo);
    }

    Pedidos* pedido2 = new Pedidos("P002", cliente2, empleado1);
    for (Articulo* articulo : cliente2Articulos) 
    {
        pedido2->agregarArticulo(articulo);
    }

    Pedidos* pedidos[] = {pedido1, pedido2};

    for (int i = 0; i < 2; i++) 
    {
        pedidos[i]->mostrarPedidos();
    }

    delete articulo1;
    delete articulo2;
    delete cliente1;
    delete cliente2;
    delete empleado1;
    delete pedido1;
    delete pedido2;

    cout << "\nPresione ENTER para finalizar...";
    pauseConsole();

    return 0;
}