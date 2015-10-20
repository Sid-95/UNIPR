#include <iostream>

int main()
{
    int s = 0;
    int i = 0;
    int v = 0;
    int cfu = 0;
    int scfu = 0;

    do{

        std::cout << "Immettere un voto (negativo per smettere): ";

        if(std::cin >> v)
        {
            if((v > 17) && (v < 31))
            {
                std::cout << "Immettere i CFU del corso: ";

                if(std::cin >> cfu)
                {
                    if(cfu > 0)
                    {
                        s += cfu * v;
                        scfu += cfu;
                        i++;
                    }
                    else
                    {
                        std::cout << "Il CFU deve assumere un valore positivo";
                    }
                }
                else
                {
                    std::cout << "Valore non valido \n\r";
                }
            }
            else
            {
                std::cout << "Il voto deve essere compreso tra 18 e 30\n\r";
            }
        }
        else
        {
            std::cout << "Valore non valido \n\r";
        }

    }while(v >= 0);

    std::cout << "\n\rHai immesso " <<  i << " voti\n\rLa media pesata dei tuoi voti e': " << ((double)s)/((double)scfu);
    std::cout << std::endl;
    return 0;


}
