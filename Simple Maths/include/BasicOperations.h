#ifndef BASICOPERATIONS_H
#define BASICOPERATIONS_H
#include <vector>

class BasicOperations
{
    public:
        BasicOperations();
        BasicOperations(std::vector<int> nums);
        ~BasicOperations();
        BasicOperations(const BasicOperations& other);
        int get_suma();
        void mostrar_suma();
        int get_resta();
        void mostrar_resta();
        int get_producto();
        void mostrar_producto();
        std::vector<double> get_division();
        void mostrar_division();
        void mostrar_operaciones();

    private:
        std::vector<int> numeros;
        int suma;
        int resta;
        int producto;
        double division;
};

#endif // BASICOPERATIONS_H
