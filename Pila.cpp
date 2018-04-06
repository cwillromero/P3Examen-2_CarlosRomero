#include "Pila.h"
#include <iostream>
#include <string>

using namespace std;

Pila::Pila(char simbolo)
{
    puntero = new Puntero(simbolo);
}

Pila::Pila()
{
    cont = 0;
}

Puntero *Pila::getPuntero()
{
    return puntero;
}

void Pila::setCont()
{
    cont++;
}

void Pila::setPuntero(Puntero *puntero)
{

    this->puntero = puntero;
}

void Pila::Push(char simbolo)
{
    puntero = new Puntero(simbolo, puntero);
}

Puntero *Pila::Pop()
{
    puntero = puntero->getAnterior();
    cont = cont - 1;
    return puntero;
}

Puntero *Pila::Top()
{
    return puntero;
}

string Pila::isEmpty()
{
    if (cont <= 1)
    {
        return "Verdadero";
    }
    else
    {
        return "Falso";
    }
}

void Pila::ResolverOperacion(string cadena)
{
    for (int i = 0; i < cadena.size(); i++)
    {
        if ((cadena.at(i) != '1') && (cadena.at(i) != '2') &&
            (cadena.at(i) != '3') && (cadena.at(i) != '4') &&
            (cadena.at(i) != '5') && (cadena.at(i) != '6') &&
            (cadena.at(i) != '7') && (cadena.at(i) != '8') &&
            (cadena.at(i) != '9') && (cadena.at(i) != '0'))
        {
            cout << "dsg" << endl;
        }
        else
        {
            cout << "sa";
        }
    }
}

Pila::~Pila()
{
}