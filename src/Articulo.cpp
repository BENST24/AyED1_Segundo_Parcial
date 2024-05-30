#include <iostream>
#include "..\incluciones\Articulo.h"

using namespace std;

Articulo::Articulo(string cod, string nom, double pre) 
{
    this->codigoArticulo = cod;
    this->nombre = nom;
    this->precio = pre;
}

string Articulo::getNombre()
{
    return nombre;
}

string Articulo::getCodigoArticulo()
{
    return codigoArticulo;
}

double Articulo::getPrecio()
{
    return precio;
}