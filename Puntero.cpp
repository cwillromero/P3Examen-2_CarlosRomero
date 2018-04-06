#include "Puntero.h"
#include <iostream>
#include <string>

using namespace std;

Puntero::Puntero(char simbolo, Puntero *anterior)
{
    this->simbolo = simbolo;
    this->anterior = anterior;
}

Puntero::Puntero(char simbolo)
{
    this->simbolo = simbolo;
    this->anterior = NULL;
}

char Puntero::getSimbolo()
{
    return simbolo;
}

void Puntero::setSimbolo(char simbolo)
{
    this->simbolo = simbolo;
}

Puntero *Puntero::getAnterior()
{
    return anterior;
}

void Puntero::setAnterior(Puntero *anterior)
{
    this->anterior = anterior;
}

Puntero::~Puntero()
{
}