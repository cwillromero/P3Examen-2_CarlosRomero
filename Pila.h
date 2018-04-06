#include <string>
#include <iostream>
#include "Puntero.h"

using namespace std;

#ifndef PILA_H
#define PILA_H

class Pila
{

private:
  Puntero *puntero;
  int cont;

public:
  Pila();
  Pila(char);
  Puntero *getPuntero();
  void setCont();
  void setPuntero(Puntero *);
  void Push(char);
  Puntero *Pop();
  Puntero *Top();
  string isEmpty();
  void ResolverOperacion(string);
  ~Pila();
};
#endif