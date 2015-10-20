#include <iostream>
#include <cmath>

double computeDelta(int a, int b, int c);


int main()
{
    double a, b, c, delta;
    std::cout << "Risoluzione dell'equazione di II grado\n\r\ta x^2 + b x + c = 0\n\rInserisci i coefficienti dell'equazione:\n\r";

    std::cout << "\ta = ";
    if(!(std::cin >> a))
    {
        std::cout << "Valore non valido" << std::endl;
        return 0;
    }
    else if(a == 0)
    {
        std::cout << "a deve essere diverso da 0" << std::endl;
        return 0;
    }

    std::cout << "\tb = ";
    if(!(std::cin >> b))
    {
        std::cout << "Valore non valido" << std::endl;
        return 0;
    }

    std::cout << "\tc = ";
    if(!(std::cin >> c))
    {
        std::cout << "Valore non valido" << std::endl;
        return 0;
    }

    delta = computeDelta(a, b, c);

    if(delta < 0)
        std::cout << "Discriminante negativo!";
    else if(delta == 0)
        std::cout << "Soluzioni:\n\r\tx_1 = x_2 = " << -b/(2*a);
    else
        std::cout << "Soluzioni:\n\r\tx_1 = " << (-b + sqrt(delta))/ (2*a) << "\n\r\tx_2 = " << (-b - sqrt(delta))/ (2*a);

    std::cout << std::endl;
    return 0;
}

double computeDelta(int a, int b, int c)
{
    return (pow(b, 2)) - (4 * a * c);
}
