#include <iostream>
#define RAPP_POLL_CM 2.54

double pollToCm(double p);
double cmToPoll(double c);


int main()
{
    int s;

    std::cout << "Programma di conversione pollici <---> cmTipo di conversione:\n\r\t1. pollici --> cm\n\r\t2. cm --> pollici\n\rDigitare la scelta: ";

    if(std::cin >> s)
    {
        switch(s)
        {
            case 1:
            {
                double poll;

                std::cout << "Fornire il numero in pollici: ";

                if(std::cin >> poll)
                    std::cout << poll << " pollici equivalgono a " << pollToCm(poll) << " cm";
                else
                    std::cout << "Valore non valido";
                break;
            }
            case 2:
                {
                    double cm;

                    std::cout << "Fornire il numero in pollici: ";

                    if(std::cin >> cm)
                        std::cout << cm << " pollici equivalgono a " << cmToPoll(cm) << " pollici";
                    else
                        std::cout << "Valore non valido";
                    break;
                }
            default:
                {
                    std::cout << "Scelta non valida";
                    break;
                }
        }
    }
    else
    {
        std::cout << "Scelta non valida";
    }

    std::cout << std::endl;
    return 0;
}

double pollToCm(double p) { return p * RAPP_POLL_CM;}
double cmToPoll(double c) { return c / RAPP_POLL_CM;}
