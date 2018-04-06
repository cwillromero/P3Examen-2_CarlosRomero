#include <iostream>
#include <string>
#include "Puntero.h"
#include "Pila.h"
#include <vector>

Pila *pila;
string cadena;
void ImplementacionDelPushyTop(string);
int ImplementacionDelPop(Puntero *);

int main()
{

    cout << "---------- Exámen 2 - Carlos Romero ----------" << endl;
    cout << "Ingrese Una Operación: ";
    cin >> cadena;
    cout << endl;

    pila = new Pila();
    //Implementación del is Empty
    cout << "Está vacío? " << pila->isEmpty() << endl;

    cout << "Implementación del Push y el Top: " << endl;
    ImplementacionDelPushyTop(cadena);

    //Implementación del is Empty
    cout << "Está vacío? " << pila->isEmpty() << endl
         << endl;

    cout << "Implementación del Pop: " << endl;
    ImplementacionDelPop(pila->getPuntero());

    //Implementación del is Empty
    cout << "Está vacío? " << pila->isEmpty() << endl;

    pila->ResolverOperacion(cadena);

    delete pila;

    return 0;
}

void ImplementacionDelPushyTop(string cadena)
{
    pila = new Pila(cadena.at(0));
    pila->setCont();
    //Implementación del Top
    cout << pila->Top()->getSimbolo() << endl;
    for (int i = 1; i < cadena.size(); i++)
    {
        //Implementación del Push
        pila->Push(cadena.at(i));
        pila->setCont();
        //Implementación del Top
        cout << pila->Top()->getSimbolo() << endl;
    }
    cout << "Pila Cargada Correctamente." << endl
         << endl;
}

int ImplementacionDelPop(Puntero *puntero)
{
    if (puntero->getAnterior() == NULL)
    {
        //puntero = pila->Pop();
        cout << puntero->getSimbolo() << endl;
        return 0;
    }
    else
    {
        //Implementación del Pop
        cout << puntero->getSimbolo() << endl;
        puntero = pila->Pop();
        ImplementacionDelPop(puntero);
    }
}
