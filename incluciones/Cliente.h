#pragma once
#include <iostream>

using namespace std;

class Cliente 
{

private:
  string nombre;
  string apellido;
  string direccion;
  string codigoCliente;
  
public:
  Cliente(string nom, string ape, string dire, string cod);
  string getNombre ();
  string getApellido ();
  string getDireccion ();
  string getCodigoCiente();
};