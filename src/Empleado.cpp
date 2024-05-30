#include <iostream>
#include "..\incluciones\Empleado.h"

Empleado::Empleado(string nom, string ape)
{   
    this->nombre = nom;
    this->apellido = ape;
}
string Empleado::getNombre()
{
    return nombre;
}
string Empleado::getApellido()
{
    return apellido;
}