#include <iostream>

void ConsumirCombustible(double *combustible, double litros);

int main()
{
    ConsumirCombustible(combustible,20.0);
    std::cout << "Nivel actual de combustible: " << combustible << "\n";

    return 0;
}

void ConsumirCombustible(double *combustible, double litros)
{
    if (litros < 0)
    {
        std::cout << "Error no se permite cantidades negativas. " << "\n";
        return;
    }

    if (*combustible > 100.0)
    {
        std::cout << "El nivel actual excede la capacidad maxima de combustible del tanque. " << "\n";
        return;
    }

    if (*combustible - litros < 0.0)
    {
        std::cout << "Cantidad insuficiente de combustible. " << "\n";
        return;
    }

    *combustible -= litros;
    std::cout << "Consumo realizado con exito. Se consumieron: " << litros << "Litros. " << "\n";
}
