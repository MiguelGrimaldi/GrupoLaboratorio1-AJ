#include <iostream>

<<<<<<< HEAD
void Recargar(float &combustible, float litros)
{
    if (litros < 0)
    {
        std::cout << "[No se puede reposatar una cantidad negativa]\n";
        return;
    }
    if (combustible + litros > 100)
    {
        std::cout << "[No se puede exceder la capacidad maxima del tanque (100L)]\n";
        return;
    }
    combustible += litros;
    std::cout << "Se repostaron " << litros << "L de combutible al tanque\n";
}

int main()
{
    float combustibleAuto = 50.0; // Valor de prueba
    float litrosRecarga = 0.0;

    std::cout << "- Recarga de combustible -\n";
    std::cout << "estado actual del tanque: " << combustibleAuto << "L\n";

    std::cout << "ingrese la cantidad de litros que desee repostar: ";
    std::cin >> litrosRecarga;

    Recargar(combustibleAuto, litrosRecarga);
    std::cout << "Combustible final del tanque: " << combustibleAuto << "L\n";
=======
void ConsumirCombustible(double *combustible, double litros);

int main()
{
    ConsumirCombustible(combustible,20.0);
    std::cout << "Nivel actual de combustible: " << combustible << "\n";

>>>>>>> 0a6900ae20814ef154e9d15bff5715a8dc164342
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
