#include "Pila.h"
#include <iostream>
#include <string>
#include <vector>

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

/*void Pila::ResolverOperacion(string cadena)
{
    double acum = 0;
    int x = 0;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena.at(i) == '+')
            acum = acum + x;
        if (cadena.at(i) == '-')
            acum = acum - x;
        if (cadena.at(i) == '*')
        {
            if (acum == 0)
                acum = 1;
            acum = acum * x;
        }
        if (cadena.at(i) == '/')
            acum = acum / x;

        if (cadena.at(i) == '0')
            x = 0;
        if (cadena.at(i) == '1')
            x = 1;
        if (cadena.at(i) == '2')
            x = 2;
        if (cadena.at(i) == '3')
            x = 3;
        if (cadena.at(i) == '4')
            x = 4;
        if (cadena.at(i) == '5')
            x = 5;
        if (cadena.at(i) == '6')
            x = 6;
        if (cadena.at(i) == '7')
            x = 7;
        if (cadena.at(i) == '8')
            x = 8;
        if (cadena.at(i) == '9')
            x = 9;
    }
}
cout << "Resultado de la Operación: " << acum << endl;
}*/

Pila::~Pila()
{
}