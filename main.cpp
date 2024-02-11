//Python program that performs basic operations with numbers entered randomly.

#include <iostream>
#include "BasicOperations.h"
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<int> numeros_aleatorios(int cant_limite, int num_limite)
{
    std::vector<int> nums;
    int num;

    srand(time(NULL));
    std::cout << "Los numeros son: ";
    for(int i = 0; i < cant_limite; i++)
    {
        num = (rand() % num_limite) + 1;
        std::cout << num << " ";
        nums.push_back(num);
    }
    std::cout << std::endl;
    return nums;

}

int main()
{
    std::vector<int> numeros = numeros_aleatorios(4, 20);
    BasicOperations operaciones(numeros);
    operaciones.mostrar_operaciones();

    return 0;
}
