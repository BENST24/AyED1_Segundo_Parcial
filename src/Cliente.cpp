#include <iostream>
#include "..\incluciones\Cliente.h"

using namespace std;

Cliente::Cliente(string nom, string ape, string dire, string cod) 
{
    this->nombre = nom;
    this->apellido = ape;
    this->direccion = dire;
    this->codigoCliente = cod;
}

string Cliente::getNombre()
{
    return nombre;
}

string Cliente::getApellido()
{
    return apellido;
}

string Cliente::getDireccion()
{
    return direccion;
}

string Cliente::getCodigoCiente()
{
    return codigoCliente;
}