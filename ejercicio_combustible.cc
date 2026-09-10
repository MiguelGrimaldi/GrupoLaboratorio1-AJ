#include <iostream>

float tombustible = 0;
float &CombuCambio = tombustible;
float *combustible = &tombustible;

void ConsultarCombustible();
void ConsumirCombustible(float *combustible, float litros);

int main()
{
    int opciones = 0;
    tombustible = 50;
    while(opciones != 4){
    std::cout << "Seleccione la opcion que desea" << "\n";
    std::cout << "Opcion 1: Consultar Combustivo" << "\n";
    std::cout << "Opcion 2: Repostar" << "\n";
    std::cout << "Opcion 3: Consumir combustible" << "\n";
    std::cout << "Opcion 4: Salir del programa" << "\n";
    std::cin >> opciones;

    switch(opciones){
        case 1:
        ConsultarCombustible();
        break;

        case 2:
        
        break;

        case 3:
        ConsumirCombustible(combustible,20.0);
        break;



        default: 
        std::cout << "opcion no valia" << std::endl;
        break;
            
    }
}
    
    std::cout << "Nivel actual de combustible: " << combustible << "\n";

    return 0;
}

void ConsultarCombustible(){
    std::cout << "La cantidad de combustible disponible es de " << CombuCambio << " Litros" << "\n";
}

void ConsumirCombustible(float *combustible, float litros)
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
