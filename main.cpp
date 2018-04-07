#include <iostream>
#include <string>
#include "Puntero.h"
#include "Pila.h"
#include <vector>

Pila *pila;
Pila *pila2;
Pila *pila3;
int total = 0;
int x;
string cadena;
void ImplementacionDelPushyTop(string);
int ImplementacionDelPop(Puntero *);
int Resolver(Puntero *);
int ResolverA(Puntero *);

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

    pila2 = new Pila();
    pila2->setPuntero(pila->getPuntero());
    //Resolver
    Resolver(pila->getPuntero());

    cout << "Implementación del Pop: " << endl;
    ImplementacionDelPop(pila->getPuntero());

    //Implementación del is Empty
    cout << "Está vacío? " << pila->isEmpty() << endl;

    cout << "Ingrese Una Operación Asignación: ";
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

    pila3 = new Pila();
    pila3->setPuntero(pila->getPuntero());
    //Resolver Asignacion
    // ResolverA(pila->getPuntero());

    cout << "Implementación del Pop: " << endl;
    ImplementacionDelPop(pila->getPuntero());

    //Implementación del is Empty
    cout << "Está vacío? " << pila->isEmpty() << endl;

    delete pila;
    delete pila2;
    delete pila3;

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

int Resolver(Puntero *puntero)
{
    if (puntero == NULL)
    {
        cout << "Operación: " << cadena << " = " << total << endl
             << endl;
        return 0;
    }
    else
    {
        char simbolo = puntero->getSimbolo();
        if (simbolo == '0')
            x = 0;
        if (simbolo == '1')
            x = 1;
        if (simbolo == '2')
            x = 2;
        if (simbolo == '3')
            x = 3;
        if (simbolo == '4')
            x = 4;
        if (simbolo == '5')
            x = 5;
        if (simbolo == '6')
            x = 6;
        if (simbolo == '7')
            x = 7;
        if (simbolo == '8')
            x = 8;
        if (simbolo == '9')
            x = 9;

        int operacion;
        if (simbolo == '+')
        {
            operacion = 1;
        }
        else if (simbolo == '-')
        {
            operacion = 2;
        }
        else if (simbolo == '*')
        {
            operacion = 3;
        }
        else if (simbolo == '/')
        {
            operacion = 4;
        }

        switch (operacion)
        {
        case 1:
        {
            total = total + x;
            break;
        }

        case 2:
        {
            total = total - x;
            break;
        }

        case 3:
        {
            if (total == 0)
                total = 1;
            total = total * x;
            break;
        }

        case 4:
        {
            total = total / x;
            break;
        }
        }
        puntero = pila2->Pop();
        Resolver(puntero);
    }
}

int ResolverA(Puntero *puntero)
{
    if (puntero->getSimbolo() == '=')
    {
        cout << "Operación Asignación: " << puntero->getAnterior()->getSimbolo() << cadena << " = " << total << endl
             << endl;
        return 0;
    }
    else
    {
        char simbolo = puntero->getSimbolo();
        if (simbolo == '0')
            x = 0;
        if (simbolo == '1')
            x = 1;
        if (simbolo == '2')
            x = 2;
        if (simbolo == '3')
            x = 3;
        if (simbolo == '4')
            x = 4;
        if (simbolo == '5')
            x = 5;
        if (simbolo == '6')
            x = 6;
        if (simbolo == '7')
            x = 7;
        if (simbolo == '8')
            x = 8;
        if (simbolo == '9')
            x = 9;

        int operacion;
        if (simbolo == '+')
        {
            operacion = 1;
        }
        else if (simbolo == '-')
        {
            operacion = 2;
        }
        else if (simbolo == '*')
        {
            operacion = 3;
        }
        else if (simbolo == '/')
        {
            operacion = 4;
        }

        switch (operacion)
        {
        case 1:
        {
            total = total + x;
            break;
        }

        case 2:
        {
            total = total - x;
            break;
        }

        case 3:
        {
            if (total == 0)
                total = 1;
            total = total * x;
            break;
        }

        case 4:
        {
            total = total / x;
            break;
        }
        }
        puntero = pila3->Pop();
        Resolver(puntero);
    }
}
