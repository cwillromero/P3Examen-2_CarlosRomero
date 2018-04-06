#include <string>
#include <iostream>

using namespace std;

#ifndef PUNTERO_H
#define PUNTERO_H

class Puntero
{
private:
  char simbolo;
  Puntero *anterior;

public:
  Puntero(char);
  Puntero(char, Puntero *);
  char getSimbolo();
  void setCont(int);
  void setSimbolo(char);
  Puntero *getAnterior();
  void setAnterior(Puntero *);
  ~Puntero();
};
#endif