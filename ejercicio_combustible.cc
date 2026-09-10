#include <iostream>

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
    return 0;
}
