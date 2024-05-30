#pragma once
#include <iostream>

using namespace std;

class Empleado
{
private:
    string nombre;
    string apellido;
public:
    Empleado(string nom, string ape);
    string getNombre();
    string getApellido();
};