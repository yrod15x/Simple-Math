#include "BasicOperations.h"
#include <vector>
#include <iostream>

BasicOperations::BasicOperations()
{
    //ctor
    numeros.push_back(1);
    numeros.push_back(1);
}

BasicOperations::BasicOperations(std::vector<int> nums)
{
    numeros = nums;
}

BasicOperations::~BasicOperations()
{
    //dtor
}

BasicOperations::BasicOperations(const BasicOperations& other)
{
    //copy ctor
    numeros = other.numeros;
}

int BasicOperations::get_suma()
{
    suma = 0;
    for(int i : numeros)
    {
        suma += i;
    }
    return suma;
}

void BasicOperations::mostrar_suma()
{
    std::cout << "La suma es " << suma << std::endl;
}

int BasicOperations::get_resta()
{
    resta = numeros[0];
    for(int i : numeros)
    {
        resta -= i;
    }
    return resta;
}

void BasicOperations::mostrar_resta()
{
    std::cout << "La resta es " << resta << std::endl;
}

int BasicOperations::get_producto()
{
    producto = 1;
    for(int i : numeros)
    {
        producto *= i;
    }
    return producto;
}

void BasicOperations::mostrar_producto()
{
    std::cout << "El producto es " << producto << std::endl;
}

std::vector<double> BasicOperations::get_division()
{
    division = 1;
    int cont = 0;
    std::vector<double> resultado;

    for(int i : numeros)
    {
          if(i == 0 and cont > 0)
          {
            resultado.push_back(-1);
            return resultado;
          }
          cont++;
    }

    for(int i : numeros)
    {
        division /= i;
    }
    resultado.push_back(0);
    return resultado;
}

void BasicOperations::mostrar_division()
{
    std::vector<double> res_division;
    res_division = get_division();
    if(res_division[0] == -1)
    {
        std::cout << "Error de division por Cero" << std::endl;
    }
    else
    {
        std::cout << "La division es " << division << std::endl;
    }
}
void BasicOperations::mostrar_operaciones()
{
    get_suma();
    get_resta();
    get_producto();
    mostrar_suma();
    mostrar_resta();
    mostrar_producto();
    mostrar_division();
}
