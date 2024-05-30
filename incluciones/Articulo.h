#pragma once
#include <iostream>

using namespace std;

class Articulo {

private:
  string nombre;
  string codigoArticulo;
  double precio;

public:
  Articulo(string cod, string nom, double pre);
  string getNombre ();
  string getCodigoArticulo ();
  double getPrecio ();
};