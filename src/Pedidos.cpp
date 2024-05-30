#include <iostream>
#include "..\incluciones\Pedidos.h"

using namespace std;

Pedidos::Pedidos(string codigoPedido, Cliente* cliente, Empleado* empleado)
       : codigoPedido(codigoPedido), cliente(cliente), empleado(empleado)
       {}

void Pedidos::mostrarPedidos()
{

    cout << "Numero de pedido: " << codigoPedido << endl;
    cout << "Cargado por el empleado: " << empleado->getNombre() << " " << empleado->getApellido() << endl;
    cout << "Cliente: \n"; 
    cout << "Nombre: " << cliente->getNombre() << endl;
    cout << "Apellido: " << cliente->getApellido() << endl;
    cout << "Direccion: " << cliente->getDireccion() << endl;
    cout << "Articulos: \n";
  
    for(int i = 0; i < cantidadArticulos; i++)
    {
        cout << "- " << articulos[i]->getNombre() << " (" << articulos[i]->getCodigoArticulo() << "): $" << articulos[i]->getPrecio() << "\n\n";
    }
    
}

void Pedidos::agregarArticulo(Articulo* articulo)
{
    // Aumentar el tamaño del arreglo de artículos en 1
    Articulo** nuevosArticulos = new Articulo*[cantidadArticulos + 1];
    
    // Copiar los artículos existentes al nuevo arreglo
    for (int i = 0; i < cantidadArticulos; i++) 
    {
        nuevosArticulos[i] = articulos[i];
    }
    
    // Agregar el nuevo artículo al arreglo
    nuevosArticulos[cantidadArticulos] = articulo;
    
    // Actualizar el puntero de artículos y el contador
    delete[] articulos;
    articulos = nuevosArticulos;
    cantidadArticulos++;
    delete[] nuevosArticulos;

}

string Pedidos::getCodigoPedido()
{
    return codigoPedido;
}